

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiEchoLaserScan_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "MultiEchoLaserScan_.h"

#include <new>

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *MultiEchoLaserScan_TYPENAME = "sensor_msgs::msg::dds_::MultiEchoLaserScan_";

            DDS_TypeCode* MultiEchoLaserScan__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MultiEchoLaserScan__g_tc_ranges__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode MultiEchoLaserScan__g_tc_intensities__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member MultiEchoLaserScan__g_tc_members[10]=
                {

                    {
                        (char *)"header_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"angle_min_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"angle_max_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"angle_increment_",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"time_increment_",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"scan_time_",/* Member name */
                        {
                            5,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"range_min_",/* Member name */
                        {
                            6,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"range_max_",/* Member name */
                        {
                            7,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"ranges_",/* Member name */
                        {
                            8,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"intensities_",/* Member name */
                        {
                            9,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode MultiEchoLaserScan__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"sensor_msgs::msg::dds_::MultiEchoLaserScan_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        MultiEchoLaserScan__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MultiEchoLaserScan_*/

                if (is_initialized) {
                    return &MultiEchoLaserScan__g_tc;
                }

                MultiEchoLaserScan__g_tc_ranges__sequence._data._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::LaserEcho__get_typecode();

                MultiEchoLaserScan__g_tc_intensities__sequence._data._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::LaserEcho__get_typecode();

                MultiEchoLaserScan__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                MultiEchoLaserScan__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                MultiEchoLaserScan__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                MultiEchoLaserScan__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                MultiEchoLaserScan__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                MultiEchoLaserScan__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                MultiEchoLaserScan__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                MultiEchoLaserScan__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                MultiEchoLaserScan__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)& MultiEchoLaserScan__g_tc_ranges__sequence;
                MultiEchoLaserScan__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)& MultiEchoLaserScan__g_tc_intensities__sequence;

                is_initialized = RTI_TRUE;

                return &MultiEchoLaserScan__g_tc;
            }

            RTIBool MultiEchoLaserScan__initialize(
                MultiEchoLaserScan_* sample) {
                return sensor_msgs::msg::dds_::MultiEchoLaserScan__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MultiEchoLaserScan__initialize_ex(
                MultiEchoLaserScan_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return sensor_msgs::msg::dds_::MultiEchoLaserScan__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MultiEchoLaserScan__initialize_w_params(
                MultiEchoLaserScan_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::Header__initialize_w_params(&sample->header_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->angle_min_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->angle_max_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->angle_increment_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->time_increment_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->scan_time_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->range_min_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->range_max_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    sensor_msgs::msg::dds_::LaserEcho_Seq_initialize(&sample->ranges_ );
                    sensor_msgs::msg::dds_::LaserEcho_Seq_set_element_allocation_params(&sample->ranges_ ,allocParams);
                    sensor_msgs::msg::dds_::LaserEcho_Seq_set_absolute_maximum(&sample->ranges_ , RTI_INT32_MAX);
                    if (!sensor_msgs::msg::dds_::LaserEcho_Seq_set_maximum(&sample->ranges_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    sensor_msgs::msg::dds_::LaserEcho_Seq_set_length(&sample->ranges_, 0);
                }
                if (allocParams->allocate_memory) {
                    sensor_msgs::msg::dds_::LaserEcho_Seq_initialize(&sample->intensities_ );
                    sensor_msgs::msg::dds_::LaserEcho_Seq_set_element_allocation_params(&sample->intensities_ ,allocParams);
                    sensor_msgs::msg::dds_::LaserEcho_Seq_set_absolute_maximum(&sample->intensities_ , RTI_INT32_MAX);
                    if (!sensor_msgs::msg::dds_::LaserEcho_Seq_set_maximum(&sample->intensities_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    sensor_msgs::msg::dds_::LaserEcho_Seq_set_length(&sample->intensities_, 0);
                }
                return RTI_TRUE;
            }

            void MultiEchoLaserScan__finalize(
                MultiEchoLaserScan_* sample)
            {

                sensor_msgs::msg::dds_::MultiEchoLaserScan__finalize_ex(sample,RTI_TRUE);
            }

            void MultiEchoLaserScan__finalize_ex(
                MultiEchoLaserScan_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                sensor_msgs::msg::dds_::MultiEchoLaserScan__finalize_w_params(
                    sample,&deallocParams);
            }

            void MultiEchoLaserScan__finalize_w_params(
                MultiEchoLaserScan_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                sensor_msgs::msg::dds_::LaserEcho_Seq_set_element_deallocation_params(
                    &sample->ranges_,deallocParams);
                sensor_msgs::msg::dds_::LaserEcho_Seq_finalize(&sample->ranges_);

                sensor_msgs::msg::dds_::LaserEcho_Seq_set_element_deallocation_params(
                    &sample->intensities_,deallocParams);
                sensor_msgs::msg::dds_::LaserEcho_Seq_finalize(&sample->intensities_);

            }

            void MultiEchoLaserScan__finalize_optional_members(
                MultiEchoLaserScan_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                std_msgs::msg::dds_::Header__finalize_optional_members(&sample->header_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = sensor_msgs::msg::dds_::LaserEcho_Seq_get_length(
                        &sample->ranges_);

                    for (i = 0; i < length; i++) {
                        sensor_msgs::msg::dds_::LaserEcho__finalize_optional_members(
                            sensor_msgs::msg::dds_::LaserEcho_Seq_get_reference(
                                &sample->ranges_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = sensor_msgs::msg::dds_::LaserEcho_Seq_get_length(
                        &sample->intensities_);

                    for (i = 0; i < length; i++) {
                        sensor_msgs::msg::dds_::LaserEcho__finalize_optional_members(
                            sensor_msgs::msg::dds_::LaserEcho_Seq_get_reference(
                                &sample->intensities_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool MultiEchoLaserScan__copy(
                MultiEchoLaserScan_* dst,
                const MultiEchoLaserScan_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyFloat (
                        &dst->angle_min_, &src->angle_min_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->angle_max_, &src->angle_max_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->angle_increment_, &src->angle_increment_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->time_increment_, &src->time_increment_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->scan_time_, &src->scan_time_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->range_min_, &src->range_min_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->range_max_, &src->range_max_)) { 
                        return RTI_FALSE;
                    }
                    if (!sensor_msgs::msg::dds_::LaserEcho_Seq_copy(&dst->ranges_ ,
                    &src->ranges_ )) {
                        return RTI_FALSE;
                    }
                    if (!sensor_msgs::msg::dds_::LaserEcho_Seq_copy(&dst->intensities_ ,
                    &src->intensities_ )) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'MultiEchoLaserScan_' sequence class.
            */
            #define T MultiEchoLaserScan_
            #define TSeq MultiEchoLaserScan_Seq

            #define T_initialize_w_params sensor_msgs::msg::dds_::MultiEchoLaserScan__initialize_w_params

            #define T_finalize_w_params   sensor_msgs::msg::dds_::MultiEchoLaserScan__finalize_w_params
            #define T_copy       sensor_msgs::msg::dds_::MultiEchoLaserScan__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

