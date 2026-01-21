#include "unpack/unpack.h"

b32 upk_unpack_stl_geometry(Upk_StlGeometry** output, u8* buffer, u64 count);
{
	b32 result = false;
	u32 header_size = 80;
	if (count >= header_size + sizeof(Upk_StlGeometry))
	{
		u8* data = buffer + header_size;
		*output = (Upk_StlGeometry*)data;
		result = true;
	}
	return result;
}

