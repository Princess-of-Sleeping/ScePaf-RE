﻿/*
	Vita Development Suite Libraries
*/

#ifndef _VDSUITE_USER_PAF_GRAPHICS_ARL_ARL_DEFINES_H
#define _VDSUITE_USER_PAF_GRAPHICS_ARL_ARL_DEFINES_H

typedef enum PolygonModeEnum {
	POLYGON_MODE_FILL = 0,
	POLYGON_MODE_POINT_10UV = 0x10000,
	POLYGON_MODE_POINT = 0x20000,
	POLYGON_MODE_POINT_01UV = 0x20000,
	POLYGON_MODE_LINE = 0x28000,
	POLYGON_MODE_TRIANGLE_LINE = 0x28000,
	POLYGON_MODE_TRIANGLE_POINT = 0x30000
} PolygonModeEnum;

typedef enum DepthFuncEnum {
	DEPTH_NEVER = 0,
	DEPTH_LESS = 0x400000,
	DEPTH_EQUAL = 0x800000,
	DEPTH_LEQUAL = 0xC00000,
	DEPTH_GREATER = 0x1000000,
	DEPTH_NOTEQUAL = 0x1400000,
	DEPTH_GEQUAL = 0x1800000,
	DEPTH_ALWAYS = 0x1C00000
} DepthFuncEnum;

typedef enum CullModeEnum {
	CULL_NONE = 0,
	CULL_CW = 1,
	CULL_CCW = 2
} CullModeEnum;

typedef enum BlendingFactor {
	ZERO = 0,
	ONE = 1,
	SRC_COLOR = 2,
	ONE_MINUS_SRC_COLOR = 3,
	SRC_ALPHA = 4,
	ONE_MINUS_SRC_ALPHA = 5,
	DST_COLOR = 6,
	ONE_MINUS_DST_COLOR = 7,
	DST_ALPHA = 8,
	ONE_MINUS_DST_ALPHA = 9,
	SRC_ALPHA_SATURATE = 10,
	DST_ALPHA_SATURATE = 11
} BlendingFactor;

typedef enum BlendEquationEnum {
	FUNC_ADD = 1,
	FUNC_SUBTRACT = 2,
	FUNC_REVERSE_SUBTRACT = 3
} BlendEquationEnum;

typedef enum FaceEnum {
	FRONT = 1,
	BACK = 2,
	FRONT_AND_BACK = 3
} FaceEnum;

typedef enum EnableCap {
	BLEND = 0,
	DITHER = 1,
	STENCIL_TEST = 2,
	DEPTH_TEST = 3,
	SCISSOR_TEST = 4,
	POLYGON_OFFSET_FILL = 5,
	SAMPLE_ALPHA_TO_COVERAGE = 6,
	SAMPLE_COVERAGE = 7,
	WCLAMP = 8,
	WBUFFER = 9,
	TWO_SIDED = 10
} EnableCap;


#endif /* _VDSUITE_USER_PAF_GRAPHICS_ARL_ARL_DEFINES_H */
