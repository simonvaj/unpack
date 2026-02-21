#ifndef UPAK_H
#define UPAK_H

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
Upak_StlTriangle;
#pragma pack(pop)

typedef struct
{
	u32 triangle_count;
	Upak_StlTriangle triangles[1];
	u8 _padding[2];
}
Upak_StlGeometry;

b32 upak_unpack_stl_geometry(Upak_StlGeometry** output, u8* buffer, u64 count);

#endif
