/*
Physics Effects Copyright(C) 2010 Sony Computer Entertainment Inc.
All rights reserved.

Physics Effects is open software; you can redistribute it and/or
modify it under the terms of the BSD License.

Physics Effects is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the BSD License for more details.

A copy of the BSD License is distributed with
Physics Effects under the filename: physics_effects_license.txt
*/

#ifndef _SCE_PFX_CONTACT_TRI_MESH_BOX_H
#define _SCE_PFX_CONTACT_TRI_MESH_BOX_H

#include "../../../include/physics_effects/base_level/collision/pfx_tri_mesh.h"
#include "../../../include/physics_effects/base_level/collision/pfx_box.h"
#include "pfx_contact_cache.h"

namespace sce {
namespace PhysicsEffects {

PfxInt32 pfxContactTriMeshBox(
	PfxContactCache &contacts,
	const PfxTriMesh *meshA,
	const PfxTransform3 &transformA,
	const PfxBox &boxB,
	const PfxTransform3 &transformB,
	PfxFloat distanceThreshold = SCE_PFX_FLT_MAX );

} // namespace PhysicsEffects
} // namespace sce

#endif // _SCE_PFX_CONTACT_TRI_MESH_BOX_H
