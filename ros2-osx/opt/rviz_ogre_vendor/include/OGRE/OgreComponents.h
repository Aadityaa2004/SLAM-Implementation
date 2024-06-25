#ifndef __OGRE_COMPONENTS_Config_H_
#define __OGRE_COMPONENTS_Config_H_

/* #undef OGRE_BUILD_RENDERSYSTEM_D3D9 */
/* #undef OGRE_BUILD_RENDERSYSTEM_D3D11 */
#define OGRE_BUILD_RENDERSYSTEM_GL
#define OGRE_BUILD_RENDERSYSTEM_GL3PLUS
/* #undef OGRE_BUILD_RENDERSYSTEM_GLES2 */
#define OGRE_BUILD_PLUGIN_BSP
#define OGRE_BUILD_PLUGIN_OCTREE
#define OGRE_BUILD_PLUGIN_PCZ
#define OGRE_BUILD_PLUGIN_PFX
/* #undef OGRE_BUILD_PLUGIN_CG */
#define OGRE_BUILD_PLUGIN_STBI
/* #undef OGRE_BUILD_PLUGIN_FREEIMAGE */
#define OGRE_BUILD_COMPONENT_PAGING
#define OGRE_BUILD_COMPONENT_MESHLODGENERATOR
#define OGRE_BUILD_COMPONENT_TERRAIN
#define OGRE_BUILD_COMPONENT_VOLUME
#define OGRE_BUILD_COMPONENT_PROPERTY
#define OGRE_BUILD_COMPONENT_OVERLAY
#define OGRE_BUILD_COMPONENT_RTSHADERSYSTEM
#define OGRE_BUILD_COMPONENT_HLMS

#define OGRE_BITES_HAVE_SDL 1

#endif
