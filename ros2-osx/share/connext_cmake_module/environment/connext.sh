_BUILDTIME_NDDSHOME="/Applications/rti_connext_dds-5.3.1"

# Give priority to the Connext installation found when the workspace was built, if it's valid.
# If it's not valid, the current value of the NDDSHOME environment variable will be used.
# The one detected at buildtime may refer to an invalid path for users using "fat archive" binaries, for example.
if [ -d "$_BUILDTIME_NDDSHOME" ]; then
  # Warn about unused environment variable.
  if [ ! -z "$NDDSHOME" -a "$NDDSHOME" != "$_BUILDTIME_NDDSHOME" ]; then
    echo "[connext_cmake_module] Warning: NDDSHOME environment variable is set to [[$NDDSHOME]]." \
      "When the workspace was built, Connext was found at [[$_BUILDTIME_NDDSHOME]]," \
      "which is what will actually be used." \
      "Manually modify the environment now if this is not the configuration you want." 1>&2
  fi
  _NDDSHOME_TO_USE=$_BUILDTIME_NDDSHOME
else
  if [ -z "$NDDSHOME" ]; then
    echo "[connext_cmake_module] Warning:"\
      "The location at which Connext was found when the workspace was built [[$_BUILDTIME_NDDSHOME]]" \
      "does not point to a valid directory, and the NDDSHOME environment variable has not been set." \
      "Support for Connext will not be available." 1>&2
    unset _BUILDTIME_NDDSHOME
    return
  fi

  if [ ! -d "$NDDSHOME" ]; then
    echo "[connext_cmake_module] Warning:" \
      "Neither the location at which Connext was found when the workspace was built [[$_BUILDTIME_NDDSHOME]]" \
      "nor the NDDSHOME environment variable [[$NDDSHOME]] point to a valid directory." \
      "Support for Connext will not be available." 1>&2
    unset _BUILDTIME_NDDSHOME
    return
  fi
  _NDDSHOME_TO_USE=$NDDSHOME
fi

# function to prepend non-duplicate values to environment variables
# using colons as separators and avoiding trailing separators
# copied from https://github.com/ament/ament_package/blob/6c8acd25498d2674e7ad9d316b35d112ae1ab8c1/ament_package/template/package_level/local_setup.sh.in#L45-L94
# since this script can't assume that the package level script was sourced before
_connext_prepend_unique_value() {
  # arguments
  _listname="$1"
  _value="$2"
  #echo "listname $_listname"
  #eval echo "list value \$$_listname"
  #echo "value $_value"

  # check if the list contains the value
  eval _values=\"\$$_listname\"
  _duplicate=
  _connext_prepend_unique_value_IFS=$IFS
  IFS=":"
  if [ "$AMENT_SHELL" = "zsh" ]; then
    # convert array-like string into array
    # to wordaround SH_WORD_SPLIT not being set
    eval _values="(\"${=_values}\")"
  fi
  for _item in $_values; do
    # ignore empty strings
    if [ -z "$_item" ]; then
      continue
    fi
    if [ "$_item" = "$_value" ]; then
      _duplicate=1
    fi
  done
  unset _item

  # prepend only non-duplicates
  if [ -z "$_duplicate" ]; then
    # avoid trailing separator
    if [ -z "$_values" ]; then
      eval export $_listname=\"$_value\"
      #eval echo "set list \$$_listname"
    else
      # field separator must not be a colon
      unset IFS
      eval export $_listname=\"$_value:\$$_listname\"
      #eval echo "prepend list \$$_listname"
    fi
  fi
  IFS=$_connext_prepend_unique_value_IFS
  unset _connext_prepend_unique_value_IFS
  unset _duplicate
  unset _values

  unset _value
  unset _listname
}

_connext_prepend_unique_value PATH "$_NDDSHOME_TO_USE/bin"

_Connext_LIBRARY_DIR_TO_USE=$_NDDSHOME_TO_USE/lib/x64Darwin17clang9.0

if [ ! -d "$_Connext_LIBRARY_DIR_TO_USE" ]; then
  echo "[connext_cmake_module] Error:" \
    "The expected location of Connext libraries [[$_Connext_LIBRARY_DIR_TO_USE]] does not exist." \
    "A version of Connext for a different architecture may have been used when the workspace was" \
    "built." \
    "Support for Connext will not work correctly." 1>&2
  unset _Connext_LIBRARY_DIR_TO_USE
  unset _NDDSHOME_TO_USE
  unset _BUILDTIME_NDDSHOME
  return
fi

# detect if running on Darwin platform
_UNAME=`uname -s`
_IS_DARWIN=0
if [ "$_UNAME" = "Darwin" ]; then
  _IS_DARWIN=1
fi
unset _UNAME

# add the libary dir on the (DY)LD_LIBRARY_PATH for the rtiddsgen tool
_connext_prepend_unique_value PATH "$_Connext_LIBRARY_DIR_TO_USE"
if [ $_IS_DARWIN -eq 0 ]; then
  _connext_prepend_unique_value LD_LIBRARY_PATH "$_Connext_LIBRARY_DIR_TO_USE"
else
  _connext_prepend_unique_value DYLD_LIBRARY_PATH "$_Connext_LIBRARY_DIR_TO_USE"
fi
unset _IS_DARWIN
unset _connext_prepend_unique_value

export NDDSHOME="$_NDDSHOME_TO_USE"

unset _Connext_LIBRARY_DIR_TO_USE
unset _NDDSHOME_TO_USE
unset _BUILDTIME_NDDSHOME
