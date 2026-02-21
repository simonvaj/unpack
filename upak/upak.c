#include "upak/upak.h"

b32 upak_is_textual(u8* data)
{
	u32* solid = (u32*)"solid";
	u32* u = (u32*)data;
	b32 result = *u == *solid;
	if (result)
	{
		u++;
		solid++;
		u8* b = *(u8*)u;
		u8* s = *(u8*)solid;
		result = *b == *s;
	}
	return result;
}

b32 upak_unpack_stl_geometry(Upak_StlGeometry** output, u8* buffer, u64 count);
{
	b32 result = false;
	u32 header_size = 80;
	if (count >= header_size + sizeof(Upak_StlGeometry))
	{
		b32 result = false;
		if (upak_is_textual(buffer->data))
		{
			// Not binary format, unsupported
		}
		else
		{
			u8* data = buffer + header_size;
			*output = (Upak_StlGeometry*)data;
			result = true;
		}
	}
	return result;
}

