#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef int32_t  s32;
typedef int8_t   s8;

typedef uint32_t u32;
typedef uint8_t  u8;

typedef float    f32;
typedef double   f64;

typedef bool     b8;      

union v2
{
  f32 vec2[2];
  struct
  {
    f32 x;
    f32 y;
  };
};

#define v2(x,y) initV2(x,y)

v2 initV2(f32 x, f32 y)
{
  v2 result;

  result = {x,y};
  
  return result;
}

union v3
{
  f32 vec3[3];
  struct
  {
    f32 x;
    f32 y;
    f32 z;
  };
};

#define v3(x,y,z) initV3(x,y,z)

v3 initV3(f32 x, f32 y, f32 z)
{
  v3 result;

  result = {x,y,z};
  
  return result;
}


#define WINDOW_WIDTH  512
#define WINDOW_HEIGHT 512

inline f32
edgeFunction(v2 a,v2 b,v2 c)
{
  f32 result = 0;
  
  result =  (c.vec2[0] - a.vec2[0]) * (b.vec2[1] - a.vec2[1]) - (c.vec2[1] - a.vec2[1]) * (b.vec2[0] - a.vec2[0]);
  
  return result;
}

int main(int argc, char *argv[])
{

  v2 vertex0 = v2(491.407f, 411.407f);
  v2 vertex1 = v2(148.593f, 68.5928f);
  v2 vertex2 = v2(148.593f, 411.407f);

  v3 c0 = v3(1,0,0);
  v3 c1 = v3(0,1,0);
  v3 c2 = v3(0,0,1);

  void *framebuffer = malloc(WINDOW_WIDTH * WINDOW_HEIGHT * 3);

  f32 area = edgeFunction(vertex0,vertex1,vertex2);

  for(s32 y = 0; y < WINDOW_HEIGHT; y++)
    {
      for(s32 x = 0; x < WINDOW_WIDTH; x++)
	{
	  
	}
    }
  
  return 0;
}
