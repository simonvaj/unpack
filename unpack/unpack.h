#ifndef UNPACK_H
#define UNPACK_H

#include "core/base.h"

#pragma pack(push, 1)
typedef struct
{
	f32 normal[3];
	f32 vertex0[3];
	f32 vertex1[3];
	f32 vertex2[3];
	u16 attributes;
}
Upk_StlTriangle;
#pragma pack(pop)

typedef struct
{
	u32 triangle_count;
	Upk_StlTriangle triangles[1];
	u8 _padding[2];
}
Upk_StlGeometry;

b32 upk_unpack_stl_geometry(Upk_StlGeometry** output, u8* buffer, u64 count);

#endif
