#ifndef INC_CPPDDS_H_
#define INC_CPPDDS_H_
// clang-format off
/*
# License
This software is distributed under two licenses, choose whichever you like.

## MIT License
Copyright (c) 2022 Takuro Sakai

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

## Public Domain
This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <http://unlicense.org>
*/
// clang-format on
/**
@author t-sakai

Define "CPPDDS_IMPLEMENTATION" to add an implementation.
*/
#include <stdint.h>

#ifdef __cplusplus
namespace cppdds
{
#endif

#ifndef CPPDDS_TYPES
#    define CPPDDS_TYPES
#    ifndef CPPDDS_NULL
#        ifdef __cplusplus
#            define CPPDDS_NULL nullptr
#        else
#            define CPPDDS_NULL ((void*)0)
#        endif
#    endif // CPPDDS_NULL
#endif     // CPPDDS_TYPES

#if defined(_DEBUG) && !defined(CPPDDS_DEBUG)
#    define CPPDDS_DEBUG
#endif

/**
 * @brief DXGI formats
 */
typedef enum CPPDDS_DXGI_FORMAT_
{
    CPPDDS_DXGI_FORMAT_UNKNOWN = 0,
    CPPDDS_DXGI_FORMAT_R32G32B32A32_TYPELESS = 1,
    CPPDDS_DXGI_FORMAT_R32G32B32A32_FLOAT = 2,
    CPPDDS_DXGI_FORMAT_R32G32B32A32_UINT = 3,
    CPPDDS_DXGI_FORMAT_R32G32B32A32_SINT = 4,
    CPPDDS_DXGI_FORMAT_R32G32B32_TYPELESS = 5,
    CPPDDS_DXGI_FORMAT_R32G32B32_FLOAT = 6,
    CPPDDS_DXGI_FORMAT_R32G32B32_UINT = 7,
    CPPDDS_DXGI_FORMAT_R32G32B32_SINT = 8,
    CPPDDS_DXGI_FORMAT_R16G16B16A16_TYPELESS = 9,
    CPPDDS_DXGI_FORMAT_R16G16B16A16_FLOAT = 10,
    CPPDDS_DXGI_FORMAT_R16G16B16A16_UNORM = 11,
    CPPDDS_DXGI_FORMAT_R16G16B16A16_UINT = 12,
    CPPDDS_DXGI_FORMAT_R16G16B16A16_SNORM = 13,
    CPPDDS_DXGI_FORMAT_R16G16B16A16_SINT = 14,
    CPPDDS_DXGI_FORMAT_R32G32_TYPELESS = 15,
    CPPDDS_DXGI_FORMAT_R32G32_FLOAT = 16,
    CPPDDS_DXGI_FORMAT_R32G32_UINT = 17,
    CPPDDS_DXGI_FORMAT_R32G32_SINT = 18,
    CPPDDS_DXGI_FORMAT_R32G8X24_TYPELESS = 19,
    CPPDDS_DXGI_FORMAT_D32_FLOAT_S8X24_UINT = 20,
    CPPDDS_DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS = 21,
    CPPDDS_DXGI_FORMAT_X32_TYPELESS_G8X24_UINT = 22,
    CPPDDS_DXGI_FORMAT_R10G10B10A2_TYPELESS = 23,
    CPPDDS_DXGI_FORMAT_R10G10B10A2_UNORM = 24,
    CPPDDS_DXGI_FORMAT_R10G10B10A2_UINT = 25,
    CPPDDS_DXGI_FORMAT_R11G11B10_FLOAT = 26,
    CPPDDS_DXGI_FORMAT_R8G8B8A8_TYPELESS = 27,
    CPPDDS_DXGI_FORMAT_R8G8B8A8_UNORM = 28,
    CPPDDS_DXGI_FORMAT_R8G8B8A8_UNORM_SRGB = 29,
    CPPDDS_DXGI_FORMAT_R8G8B8A8_UINT = 30,
    CPPDDS_DXGI_FORMAT_R8G8B8A8_SNORM = 31,
    CPPDDS_DXGI_FORMAT_R8G8B8A8_SINT = 32,
    CPPDDS_DXGI_FORMAT_R16G16_TYPELESS = 33,
    CPPDDS_DXGI_FORMAT_R16G16_FLOAT = 34,
    CPPDDS_DXGI_FORMAT_R16G16_UNORM = 35,
    CPPDDS_DXGI_FORMAT_R16G16_UINT = 36,
    CPPDDS_DXGI_FORMAT_R16G16_SNORM = 37,
    CPPDDS_DXGI_FORMAT_R16G16_SINT = 38,
    CPPDDS_DXGI_FORMAT_R32_TYPELESS = 39,
    CPPDDS_DXGI_FORMAT_D32_FLOAT = 40,
    CPPDDS_DXGI_FORMAT_R32_FLOAT = 41,
    CPPDDS_DXGI_FORMAT_R32_UINT = 42,
    CPPDDS_DXGI_FORMAT_R32_SINT = 43,
    CPPDDS_DXGI_FORMAT_R24G8_TYPELESS = 44,
    CPPDDS_DXGI_FORMAT_D24_UNORM_S8_UINT = 45,
    CPPDDS_DXGI_FORMAT_R24_UNORM_X8_TYPELESS = 46,
    CPPDDS_DXGI_FORMAT_X24_TYPELESS_G8_UINT = 47,
    CPPDDS_DXGI_FORMAT_R8G8_TYPELESS = 48,
    CPPDDS_DXGI_FORMAT_R8G8_UNORM = 49,
    CPPDDS_DXGI_FORMAT_R8G8_UINT = 50,
    CPPDDS_DXGI_FORMAT_R8G8_SNORM = 51,
    CPPDDS_DXGI_FORMAT_R8G8_SINT = 52,
    CPPDDS_DXGI_FORMAT_R16_TYPELESS = 53,
    CPPDDS_DXGI_FORMAT_R16_FLOAT = 54,
    CPPDDS_DXGI_FORMAT_D16_UNORM = 55,
    CPPDDS_DXGI_FORMAT_R16_UNORM = 56,
    CPPDDS_DXGI_FORMAT_R16_UINT = 57,
    CPPDDS_DXGI_FORMAT_R16_SNORM = 58,
    CPPDDS_DXGI_FORMAT_R16_SINT = 59,
    CPPDDS_DXGI_FORMAT_R8_TYPELESS = 60,
    CPPDDS_DXGI_FORMAT_R8_UNORM = 61,
    CPPDDS_DXGI_FORMAT_R8_UINT = 62,
    CPPDDS_DXGI_FORMAT_R8_SNORM = 63,
    CPPDDS_DXGI_FORMAT_R8_SINT = 64,
    CPPDDS_DXGI_FORMAT_A8_UNORM = 65,
    CPPDDS_DXGI_FORMAT_R1_UNORM = 66,
    CPPDDS_DXGI_FORMAT_R9G9B9E5_SHAREDEXP = 67,
    CPPDDS_DXGI_FORMAT_R8G8_B8G8_UNORM = 68,
    CPPDDS_DXGI_FORMAT_G8R8_G8B8_UNORM = 69,
    CPPDDS_DXGI_FORMAT_BC1_TYPELESS = 70,
    CPPDDS_DXGI_FORMAT_BC1_UNORM = 71,
    CPPDDS_DXGI_FORMAT_BC1_UNORM_SRGB = 72,
    CPPDDS_DXGI_FORMAT_BC2_TYPELESS = 73,
    CPPDDS_DXGI_FORMAT_BC2_UNORM = 74,
    CPPDDS_DXGI_FORMAT_BC2_UNORM_SRGB = 75,
    CPPDDS_DXGI_FORMAT_BC3_TYPELESS = 76,
    CPPDDS_DXGI_FORMAT_BC3_UNORM = 77,
    CPPDDS_DXGI_FORMAT_BC3_UNORM_SRGB = 78,
    CPPDDS_DXGI_FORMAT_BC4_TYPELESS = 79,
    CPPDDS_DXGI_FORMAT_BC4_UNORM = 80,
    CPPDDS_DXGI_FORMAT_BC4_SNORM = 81,
    CPPDDS_DXGI_FORMAT_BC5_TYPELESS = 82,
    CPPDDS_DXGI_FORMAT_BC5_UNORM = 83,
    CPPDDS_DXGI_FORMAT_BC5_SNORM = 84,
    CPPDDS_DXGI_FORMAT_B5G6R5_UNORM = 85,
    CPPDDS_DXGI_FORMAT_B5G5R5A1_UNORM = 86,
    CPPDDS_DXGI_FORMAT_B8G8R8A8_UNORM = 87,
    CPPDDS_DXGI_FORMAT_B8G8R8X8_UNORM = 88,
    CPPDDS_DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM = 89,
    CPPDDS_DXGI_FORMAT_B8G8R8A8_TYPELESS = 90,
    CPPDDS_DXGI_FORMAT_B8G8R8A8_UNORM_SRGB = 91,
    CPPDDS_DXGI_FORMAT_B8G8R8X8_TYPELESS = 92,
    CPPDDS_DXGI_FORMAT_B8G8R8X8_UNORM_SRGB = 93,
    CPPDDS_DXGI_FORMAT_BC6H_TYPELESS = 94,
    CPPDDS_DXGI_FORMAT_BC6H_UF16 = 95,
    CPPDDS_DXGI_FORMAT_BC6H_SF16 = 96,
    CPPDDS_DXGI_FORMAT_BC7_TYPELESS = 97,
    CPPDDS_DXGI_FORMAT_BC7_UNORM = 98,
    CPPDDS_DXGI_FORMAT_BC7_UNORM_SRGB = 99,
    CPPDDS_DXGI_FORMAT_AYUV = 100,
    CPPDDS_DXGI_FORMAT_Y410 = 101,
    CPPDDS_DXGI_FORMAT_Y416 = 102,
    CPPDDS_DXGI_FORMAT_NV12 = 103,
    CPPDDS_DXGI_FORMAT_P010 = 104,
    CPPDDS_DXGI_FORMAT_P016 = 105,
    CPPDDS_DXGI_FORMAT_420_OPAQUE = 106,
    CPPDDS_DXGI_FORMAT_YUY2 = 107,
    CPPDDS_DXGI_FORMAT_Y210 = 108,
    CPPDDS_DXGI_FORMAT_Y216 = 109,
    CPPDDS_DXGI_FORMAT_NV11 = 110,
    CPPDDS_DXGI_FORMAT_AI44 = 111,
    CPPDDS_DXGI_FORMAT_IA44 = 112,
    CPPDDS_DXGI_FORMAT_P8 = 113,
    CPPDDS_DXGI_FORMAT_A8P8 = 114,
    CPPDDS_DXGI_FORMAT_B4G4R4A4_UNORM = 115,
    CPPDDS_DXGI_FORMAT_P208 = 130,
    CPPDDS_DXGI_FORMAT_V208 = 131,
    CPPDDS_DXGI_FORMAT_V408 = 132,
    CPPDDS_DXGI_FORMAT_SAMPLER_FEEDBACK_MIN_MIP_OPAQUE,
    CPPDDS_DXGI_FORMAT_SAMPLER_FEEDBACK_MIP_REGION_USED_OPAQUE,
    CPPDDS_DXGI_FORMAT_FORCE_UINT = 0xFFFFFFFFUL,
    CPPDDS_DXGI_FORMAT_INVALID = CPPDDS_DXGI_FORMAT_UNKNOWN,
} CPPDDS_DXGI_FORMAT;

/**
 * @brief Calc data size from prarameters
 * @param width 
 * @param height 
 * @param depth 
 * @param mipmaps 
 * @param array 
 * @param format 
 * @return 
*/
uint32_t cppdds_calc_size(
    uint32_t width,
    uint32_t height,
    uint32_t depth,
    uint32_t mipmaps,
    uint32_t array,
    uint32_t format);

/**
 * @brief 
 * @param dst_size 
 * @param dst 
 * @param width 
 * @param height 
 * @param depth 
 * @param mipmaps 
 * @param array 
 * @param cubemaps 
 * @param format 
 * @param src_size 
 * @param src 
 * @return 
*/
uint32_t cppdds_read(
    uint32_t dst_size,
    uint8_t* dst,
    uint32_t* width,
    uint32_t* height,
    uint32_t* depth,
    uint32_t* mipmaps,
    uint32_t* array,
    uint32_t* cubemaps,
    uint32_t* format,
    uint32_t src_size,
    const uint8_t* src);

/**
 * @brief 
 * @param dst_size 
 * @param dst 
 * @param width 
 * @param height 
 * @param depth 
 * @param mipmaps 
 * @param array 
 * @param format 
 * @param src_size 
 * @param src 
 * @param cubemap 
 * @return 
*/
uint32_t cppdds_write(
    uint32_t dst_size,
    uint8_t* dst,
    uint32_t width,
    uint32_t height,
    uint32_t depth,
    uint32_t mipmaps,
    uint32_t array,
    uint32_t format,
    uint32_t src_size,
    const uint8_t* src,
    bool cubemap);

#ifdef __cplusplus
} // namespace cppdds
#endif
#endif // INC_CPPDDS_H_

#ifdef CPPDDS_IMPLEMENTATION
#ifdef CPPDDS_DEBUG
#    include <assert.h>
#    define CPPDDS_ASSERT(exp) assert(exp)
#else
#    define CPPDDS_ASSERT(exp) (void)0
#endif
#include <string.h>

#ifdef __cplusplus
namespace cppdds
{
#endif
#ifdef __cplusplus
namespace
{
#endif

    typedef enum CPPDDS_DDSD_
    {
        CPPDDS_DDSD_CAPS = 0x01U,
        CPPDDS_DDSD_HEIGHT = 0x02U,
        CPPDDS_DDSD_WIDTH = 0x04U,
        CPPDDS_DDSD_PITCH = 0x08U,
        CPPDDS_DDSD_PIXELFORMAT = 0x1000U,
        CPPDDS_DDSD_MIPMAPCOUNT = 0x20000U,
        CPPDDS_DDSD_LINEARSIZE = 0x80000U,
        CPPDDS_DDSD_DEPTH = 0x800000U,

        CPPDDS_DDSD_REQUIRED = CPPDDS_DDSD_CAPS | CPPDDS_DDSD_HEIGHT | CPPDDS_DDSD_WIDTH | CPPDDS_DDSD_PIXELFORMAT,
    } CPPDDS_DDSD;

    typedef enum CPPDDS_RESOURCE_DIMENSION_
    {
        CPPDDS_RESOURCE_DIMENSION_UNKNOWN = 0,
        CPPDDS_RESOURCE_DIMENSION_BUFFER = 1,
        CPPDDS_RESOURCE_DIMENSION_TEXTURE1D = 2,
        CPPDDS_RESOURCE_DIMENSION_TEXTURE2D = 3,
        CPPDDS_RESOURCE_DIMENSION_TEXTURE3D = 4,
    } CPPDDS_RESOURCE_DIMENSION;

    typedef enum CPPDDS_DDPF_
    {
        CPPDDS_DDPF_ALPHAPIXELS = 0x01U,
        CPPDDS_DDPF_ALPHA = 0x02U,
        CPPDDS_DDPF_FOURCC = 0x04U,
        CPPDDS_DDPF_RGB = 0x40U,
        CPPDDS_DDPF_YUV = 0x200U,
        CPPDDS_DDPF_LUMINANCE = 0x20000U,
    } CPPDDS_DDPF;

#define CPPDDS_MAKEFORCC(X0, X1, X2, X3) ((uint32_t)(X0)) | ((uint32_t)(X1) << 8) | ((uint32_t)(X2) << 16) | ((uint32_t)(X3) << 24)
    typedef enum CPPDDS_FOURCC_
    {
        CPPDDS_FOURCC_DXT1 = CPPDDS_MAKEFORCC('D', 'X', 'T', '1'),
        CPPDDS_FOURCC_DXT2 = CPPDDS_MAKEFORCC('D', 'X', 'T', '2'),
        CPPDDS_FOURCC_DXT3 = CPPDDS_MAKEFORCC('D', 'X', 'T', '3'),
        CPPDDS_FOURCC_DXT4 = CPPDDS_MAKEFORCC('D', 'X', 'T', '4'),
        CPPDDS_FOURCC_DXT5 = CPPDDS_MAKEFORCC('D', 'X', 'T', '5'),

        CPPDDS_FOURCC_RGBG = CPPDDS_MAKEFORCC('R', 'G', 'B', 'G'),
        CPPDDS_FOURCC_GRGB = CPPDDS_MAKEFORCC('G', 'R', 'G', 'B'),
        CPPDDS_FOURCC_UYVY = CPPDDS_MAKEFORCC('U', 'Y', 'V', 'Y'),
        CPPDDS_FOURCC_YUY2 = CPPDDS_MAKEFORCC('Y', 'U', 'Y', '2'),

        CPPDDS_FOURCC_DX10 = CPPDDS_MAKEFORCC('D', 'X', '1', '0'),
    } CPPDDS_FOURCC;

    typedef enum CPPDDS_CAPS_
    {
        CPPDDS_CAPS_COMPLEX = 0x8U,
        CPPDDS_CAPS_MIPMAP = 0x400000U,
        CPPDDS_CAPS_TEXTURE = 0x1000U,
    } CPPDDS_CAPS;

    typedef enum CPPDDS_CAPS2_
    {
        CPPDDS_CAPS2_CUBEMAP = 0x00000200U,
        CPPDDS_CAPS2_CUBEMAP_POSITIVEX = 0x00000400U,
        CPPDDS_CAPS2_CUBEMAP_NEGATIVEX = 0x00000800U,
        CPPDDS_CAPS2_CUBEMAP_POSITIVEY = 0x00001000U,
        CPPDDS_CAPS2_CUBEMAP_NEGATIVEY = 0x00002000U,
        CPPDDS_CAPS2_CUBEMAP_POSITIVEZ = 0x00004000U,
        CPPDDS_CAPS2_CUBEMAP_NEGATIVEZ = 0x00008000U,
        CPPDDS_CAPS2_VOLUME = 0x00400000U,
    } CPPDDS_CAPS2;

    typedef enum CPPDDS_DIMENSION_
    {
        CPPDDS_DIMENSION_1D = 2,
        CPPDDS_DIMENSION_2D = 3,
        CPPDDS_DIMENSION_3D = 4,
    } CPPDDS_DIMENSION;

    typedef struct
    {
        uint32_t size_;
        uint32_t flags_;
        uint32_t fourCC_;
        uint32_t RGBBitCount_;
        uint32_t RBitMask_;
        uint32_t GBitMask_;
        uint32_t BBitMask_;
        uint32_t ABitMask_;
    } CPPDDS_PIXELFORMAT;

    typedef struct
    {
        uint32_t size_;
        uint32_t flags_;
        uint32_t height_;
        uint32_t width_;
        uint32_t pitchOrLinearSize_;
        uint32_t depth_;
        uint32_t mipMapCount_;
        uint32_t reserved1_[11];
        CPPDDS_PIXELFORMAT ddspf_;
        uint32_t caps_;
        uint32_t caps2_;
        uint32_t caps3_;
        uint32_t caps4_;
        uint32_t reserved2_;
    } CPPDS_HEADER;

    typedef struct
    {
        uint32_t dxgiFormat_;
        uint32_t resourceDimension_;
        uint32_t miscFlag_;
        uint32_t arraySize_;
        uint32_t miscFlags2_;
    } CPPDDS_HEADER10;

    uint32_t cppdds_max(uint32_t x0, uint32_t x1)
    {
        return x0 < x1 ? x1 : x0;
    }

    uint32_t cppdds_bpp(uint32_t format)
    {
        switch((CPPDDS_DXGI_FORMAT)format) {
        case CPPDDS_DXGI_FORMAT_R32G32B32A32_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R32G32B32A32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32G32B32A32_UINT:
        case CPPDDS_DXGI_FORMAT_R32G32B32A32_SINT:
            return 16;
        case CPPDDS_DXGI_FORMAT_R32G32B32_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R32G32B32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32G32B32_UINT:
        case CPPDDS_DXGI_FORMAT_R32G32B32_SINT:
            return 12;
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_FLOAT:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_UNORM:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_UINT:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_SNORM:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_SINT:
        case CPPDDS_DXGI_FORMAT_R32G32_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R32G32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32G32_UINT:
        case CPPDDS_DXGI_FORMAT_R32G32_SINT:
        case CPPDDS_DXGI_FORMAT_R32G8X24_TYPELESS:
        case CPPDDS_DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
        case CPPDDS_DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS:
        case CPPDDS_DXGI_FORMAT_X32_TYPELESS_G8X24_UINT:
            return 8;
        case CPPDDS_DXGI_FORMAT_R10G10B10A2_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R10G10B10A2_UNORM:
        case CPPDDS_DXGI_FORMAT_R10G10B10A2_UINT:
        case CPPDDS_DXGI_FORMAT_R11G11B10_FLOAT:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_UNORM:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_UINT:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_SNORM:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_SINT:
        case CPPDDS_DXGI_FORMAT_R16G16_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R16G16_FLOAT:
        case CPPDDS_DXGI_FORMAT_R16G16_UNORM:
        case CPPDDS_DXGI_FORMAT_R16G16_UINT:
        case CPPDDS_DXGI_FORMAT_R16G16_SNORM:
        case CPPDDS_DXGI_FORMAT_R16G16_SINT:
        case CPPDDS_DXGI_FORMAT_R32_TYPELESS:
        case CPPDDS_DXGI_FORMAT_D32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32_UINT:
        case CPPDDS_DXGI_FORMAT_R32_SINT:
        case CPPDDS_DXGI_FORMAT_R24G8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_D24_UNORM_S8_UINT:
        case CPPDDS_DXGI_FORMAT_R24_UNORM_X8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_X24_TYPELESS_G8_UINT:
            return 4;
        case CPPDDS_DXGI_FORMAT_R8G8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R8G8_UNORM:
        case CPPDDS_DXGI_FORMAT_R8G8_UINT:
        case CPPDDS_DXGI_FORMAT_R8G8_SNORM:
        case CPPDDS_DXGI_FORMAT_R8G8_SINT:
        case CPPDDS_DXGI_FORMAT_R16_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R16_FLOAT:
        case CPPDDS_DXGI_FORMAT_D16_UNORM:
        case CPPDDS_DXGI_FORMAT_R16_UNORM:
        case CPPDDS_DXGI_FORMAT_R16_UINT:
        case CPPDDS_DXGI_FORMAT_R16_SNORM:
        case CPPDDS_DXGI_FORMAT_R16_SINT:
            return 2;
        case CPPDDS_DXGI_FORMAT_R8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R8_UNORM:
        case CPPDDS_DXGI_FORMAT_R8_UINT:
        case CPPDDS_DXGI_FORMAT_R8_SNORM:
        case CPPDDS_DXGI_FORMAT_R8_SINT:
        case CPPDDS_DXGI_FORMAT_A8_UNORM:
        case CPPDDS_DXGI_FORMAT_R1_UNORM:
            return 1;
        case CPPDDS_DXGI_FORMAT_R9G9B9E5_SHAREDEXP:
            return 4;
        case CPPDDS_DXGI_FORMAT_R8G8_B8G8_UNORM:
        case CPPDDS_DXGI_FORMAT_G8R8_G8B8_UNORM:
            return 4;
        case CPPDDS_DXGI_FORMAT_BC1_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC1_UNORM:
        case CPPDDS_DXGI_FORMAT_BC1_UNORM_SRGB:
            return 1;
        case CPPDDS_DXGI_FORMAT_BC2_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC2_UNORM:
        case CPPDDS_DXGI_FORMAT_BC2_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC3_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC3_UNORM:
        case CPPDDS_DXGI_FORMAT_BC3_UNORM_SRGB:
            return 2;
        case CPPDDS_DXGI_FORMAT_BC4_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC4_UNORM:
        case CPPDDS_DXGI_FORMAT_BC4_SNORM:
            return 1;
        case CPPDDS_DXGI_FORMAT_BC5_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC5_UNORM:
        case CPPDDS_DXGI_FORMAT_BC5_SNORM:
            return 2;
        case CPPDDS_DXGI_FORMAT_B5G6R5_UNORM:
        case CPPDDS_DXGI_FORMAT_B5G5R5A1_UNORM:
            return 2;
        case CPPDDS_DXGI_FORMAT_B8G8R8A8_UNORM:
        case CPPDDS_DXGI_FORMAT_B8G8R8X8_UNORM:
        case CPPDDS_DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM:
        case CPPDDS_DXGI_FORMAT_B8G8R8A8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_B8G8R8X8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
            return 4;
        case CPPDDS_DXGI_FORMAT_BC6H_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC6H_UF16:
        case CPPDDS_DXGI_FORMAT_BC6H_SF16:
        case CPPDDS_DXGI_FORMAT_BC7_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC7_UNORM:
        case CPPDDS_DXGI_FORMAT_BC7_UNORM_SRGB:
            return 2;
        case CPPDDS_DXGI_FORMAT_AYUV:
        case CPPDDS_DXGI_FORMAT_Y410:
        case CPPDDS_DXGI_FORMAT_Y416:
        case CPPDDS_DXGI_FORMAT_NV12:
        case CPPDDS_DXGI_FORMAT_P010:
        case CPPDDS_DXGI_FORMAT_P016:
        case CPPDDS_DXGI_FORMAT_420_OPAQUE:
        case CPPDDS_DXGI_FORMAT_YUY2:
        case CPPDDS_DXGI_FORMAT_Y210:
        case CPPDDS_DXGI_FORMAT_Y216:
        case CPPDDS_DXGI_FORMAT_NV11:
        case CPPDDS_DXGI_FORMAT_AI44:
        case CPPDDS_DXGI_FORMAT_IA44:
        case CPPDDS_DXGI_FORMAT_P8:
        case CPPDDS_DXGI_FORMAT_A8P8:
            return 0;
        case CPPDDS_DXGI_FORMAT_B4G4R4A4_UNORM:
            return 2;
        case CPPDDS_DXGI_FORMAT_P208:
        case CPPDDS_DXGI_FORMAT_V208:
        case CPPDDS_DXGI_FORMAT_V408:
            return 0;
        }
        return 0;
    }

    uint32_t cppdds_to_uint32(const uint8_t* bytes)
    {
        uint32_t result = bytes[3];
        result = (result << 8) | bytes[2];
        result = (result << 8) | bytes[1];
        result = (result << 8) | bytes[0];
        return result;
    }

#define CMPBITMASK(ddspf, R, G, B, A) (ddspf.RBitMask_ == R && ddspf.GBitMask_ == G && ddspf.BBitMask_ == B && ddspf.ABitMask_ == A)

    uint32_t cppdds_format(const CPPDDS_PIXELFORMAT& ddspf) noexcept
    {
        if(CPPDDS_DDPF_FOURCC == (CPPDDS_DDPF_FOURCC & ddspf.flags_)) {
            switch(ddspf.fourCC_) {
            case CPPDDS_FOURCC_DXT1:
                return CPPDDS_DXGI_FORMAT_BC1_UNORM;
            case CPPDDS_FOURCC_DXT2:
                return CPPDDS_DXGI_FORMAT_BC2_UNORM;
            case CPPDDS_FOURCC_DXT3:
                return CPPDDS_DXGI_FORMAT_BC3_UNORM;
            case CPPDDS_FOURCC_DXT4:
                return CPPDDS_DXGI_FORMAT_BC4_UNORM;
            case CPPDDS_FOURCC_DXT5:
                return CPPDDS_DXGI_FORMAT_BC5_UNORM;
            case CPPDDS_FOURCC_RGBG:
                return CPPDDS_DXGI_FORMAT_R8G8_B8G8_UNORM;
            case CPPDDS_FOURCC_GRGB:
                return CPPDDS_DXGI_FORMAT_G8R8_G8B8_UNORM;
            case CPPDDS_FOURCC_UYVY:
                return CPPDDS_DXGI_FORMAT_R8G8_B8G8_UNORM;
            case CPPDDS_FOURCC_YUY2:
                return CPPDDS_DXGI_FORMAT_YUY2;
            default:
                return CPPDDS_DXGI_FORMAT_INVALID;
            }
        }

        if(CPPDDS_DDPF_RGB == (CPPDDS_DDPF_RGB & ddspf.flags_)) {
            switch(ddspf.RGBBitCount_) {
            case 32:
                if(CMPBITMASK(ddspf, 0x00FF0000U, 0x0000FF00U, 0x000000FFU, 0xFF000000U)) {
                    return CPPDDS_DXGI_FORMAT_B8G8R8A8_UNORM;
                }
                if(CMPBITMASK(ddspf, 0x000000FFU, 0x0000FF00U, 0x00FF0000U, 0xFF000000U)) {
                    return CPPDDS_DXGI_FORMAT_R8G8B8A8_UNORM;
                }
                if(CMPBITMASK(ddspf, 0x00FF0000U, 0x0000FF00U, 0x000000FFU, 0x00000000U)) {
                    return CPPDDS_DXGI_FORMAT_B8G8R8X8_UNORM;
                }
                if(CMPBITMASK(ddspf, 0x000000FFU, 0x0000FF00U, 0x00FF0000U, 0x00000000U)) {
                    return CPPDDS_DXGI_FORMAT_R8G8B8A8_UNORM;
                }

                // if(CMPBITMASK(ddspf, 0x000003FFU, 0x000FFC00U, 0x3FF00000U, 0xC0000000U)){
                //     return CPPDDS_DXGI_FORMAT_INVALID;
                // }

                if(CMPBITMASK(ddspf, 0x3FF00000U, 0x000FFC00U, 0x000003FFU, 0xC0000000U)) {
                    return CPPDDS_DXGI_FORMAT_R10G10B10A2_UNORM;
                }

                if(CMPBITMASK(ddspf, 0x0000FFFFU, 0xFFFF0000U, 0x00000000U, 0x00000000U)) {
                    return CPPDDS_DXGI_FORMAT_R16G16_UNORM;
                }
                if(CMPBITMASK(ddspf, 0xFFFFFFFFU, 0x00000000U, 0x00000000U, 0x00000000U)) {
                    return CPPDDS_DXGI_FORMAT_R32_FLOAT;
                }
                break;

            case 24:
                if(CMPBITMASK(ddspf, 0xFF0000U, 0x00FF00U, 0x0000FFU, 0)) {
                    return CPPDDS_DXGI_FORMAT_B8G8R8X8_UNORM;
                }
                break;

            case 16:
                if(CMPBITMASK(ddspf, 0xF800U, 0x07E0U, 0x001FU, 0x0000U)) {
                    return CPPDDS_DXGI_FORMAT_B5G6R5_UNORM;
                }
                if(CMPBITMASK(ddspf, 0x7C00U, 0x03E0U, 0x001FU, 0x8000U)) {
                    return CPPDDS_DXGI_FORMAT_B5G5R5A1_UNORM;
                }
                if(CMPBITMASK(ddspf, 0x7C00U, 0x03E0U, 0x001FU, 0x00U)) {
                    return CPPDDS_DXGI_FORMAT_B5G5R5A1_UNORM;
                }
                if(CMPBITMASK(ddspf, 0x0F00U, 0x00F0U, 0x000FU, 0xF000U)) {
                    return CPPDDS_DXGI_FORMAT_B4G4R4A4_UNORM;
                }
                if(CMPBITMASK(ddspf, 0x0F00U, 0x00F0U, 0x000FU, 0x00U)) {
                    return CPPDDS_DXGI_FORMAT_B4G4R4A4_UNORM;
                }
                if(CMPBITMASK(ddspf, 0xFFFFU, 0, 0, 0)) {
                    return CPPDDS_DXGI_FORMAT_R16_UNORM;
                }
                break;

            case 8:
                if(CMPBITMASK(ddspf, 0xFFU, 0, 0, 0)) {
                    return CPPDDS_DXGI_FORMAT_R8_UNORM;
                }
                break;
            }
            return CPPDDS_DXGI_FORMAT_INVALID;
        }

        if(CPPDDS_DDPF_LUMINANCE == (CPPDDS_DDPF_LUMINANCE & ddspf.flags_)) {
            switch(ddspf.RGBBitCount_) {
            case 16:
                if(CMPBITMASK(ddspf, 0xFFFFU, 0, 0, 0)) {
                    return CPPDDS_DXGI_FORMAT_R16_UNORM;
                }
                break;

            case 8:
                if(CMPBITMASK(ddspf, 0xFFU, 0, 0, 0)) {
                    return CPPDDS_DXGI_FORMAT_R8_UNORM;
                }
                break;
            }
            return CPPDDS_DXGI_FORMAT_INVALID;
        }
        if(CPPDDS_DDPF_ALPHAPIXELS == (CPPDDS_DDPF_ALPHAPIXELS & ddspf.flags_) || CPPDDS_DDPF_ALPHA == (CPPDDS_DDPF_ALPHA & ddspf.flags_)) {
            if(8 == ddspf.RGBBitCount_) {
                return CPPDDS_DXGI_FORMAT_A8_UNORM;
            }
        }
        return CPPDDS_DXGI_FORMAT_INVALID;
    }
#undef CMPBITMASK

    bool cppdds_pixelformat(CPPDDS_PIXELFORMAT& ddspf, uint32_t format)
    {
        switch((CPPDDS_DXGI_FORMAT)format) {
        case CPPDDS_DXGI_FORMAT_R32G32B32A32_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R32G32B32A32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32G32B32A32_UINT:
        case CPPDDS_DXGI_FORMAT_R32G32B32A32_SINT:
        case CPPDDS_DXGI_FORMAT_R32G32B32_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R32G32B32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32G32B32_UINT:
        case CPPDDS_DXGI_FORMAT_R32G32B32_SINT:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_FLOAT:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_UNORM:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_UINT:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_SNORM:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_SINT:
        case CPPDDS_DXGI_FORMAT_R32G32_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R32G32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32G32_UINT:
        case CPPDDS_DXGI_FORMAT_R32G32_SINT:
        case CPPDDS_DXGI_FORMAT_R32G8X24_TYPELESS:
        case CPPDDS_DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
        case CPPDDS_DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS:
        case CPPDDS_DXGI_FORMAT_X32_TYPELESS_G8X24_UINT:
        case CPPDDS_DXGI_FORMAT_R10G10B10A2_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R10G10B10A2_UNORM:
        case CPPDDS_DXGI_FORMAT_R10G10B10A2_UINT:
        case CPPDDS_DXGI_FORMAT_R11G11B10_FLOAT:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_UNORM:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_UINT:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_SNORM:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_SINT:
        case CPPDDS_DXGI_FORMAT_R16G16_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R16G16_FLOAT:
        case CPPDDS_DXGI_FORMAT_R16G16_UNORM:
        case CPPDDS_DXGI_FORMAT_R16G16_UINT:
        case CPPDDS_DXGI_FORMAT_R16G16_SNORM:
        case CPPDDS_DXGI_FORMAT_R16G16_SINT:
        case CPPDDS_DXGI_FORMAT_R32_TYPELESS:
        case CPPDDS_DXGI_FORMAT_D32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32_UINT:
        case CPPDDS_DXGI_FORMAT_R32_SINT:
        case CPPDDS_DXGI_FORMAT_R24G8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_D24_UNORM_S8_UINT:
        case CPPDDS_DXGI_FORMAT_R24_UNORM_X8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_X24_TYPELESS_G8_UINT:
        case CPPDDS_DXGI_FORMAT_R8G8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R8G8_UNORM:
        case CPPDDS_DXGI_FORMAT_R8G8_UINT:
        case CPPDDS_DXGI_FORMAT_R8G8_SNORM:
        case CPPDDS_DXGI_FORMAT_R8G8_SINT:
        case CPPDDS_DXGI_FORMAT_R16_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R16_FLOAT:
        case CPPDDS_DXGI_FORMAT_D16_UNORM:
        case CPPDDS_DXGI_FORMAT_R16_UNORM:
        case CPPDDS_DXGI_FORMAT_R16_UINT:
        case CPPDDS_DXGI_FORMAT_R16_SNORM:
        case CPPDDS_DXGI_FORMAT_R16_SINT:
        case CPPDDS_DXGI_FORMAT_R8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R8_UNORM:
        case CPPDDS_DXGI_FORMAT_R8_UINT:
        case CPPDDS_DXGI_FORMAT_R8_SNORM:
        case CPPDDS_DXGI_FORMAT_R8_SINT:
        case CPPDDS_DXGI_FORMAT_A8_UNORM:
        case CPPDDS_DXGI_FORMAT_R1_UNORM:
        case CPPDDS_DXGI_FORMAT_R9G9B9E5_SHAREDEXP:
        case CPPDDS_DXGI_FORMAT_R8G8_B8G8_UNORM:
        case CPPDDS_DXGI_FORMAT_G8R8_G8B8_UNORM:
        case CPPDDS_DXGI_FORMAT_BC1_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC1_UNORM:
        case CPPDDS_DXGI_FORMAT_BC1_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC2_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC2_UNORM:
        case CPPDDS_DXGI_FORMAT_BC2_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC3_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC3_UNORM:
        case CPPDDS_DXGI_FORMAT_BC3_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC4_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC4_UNORM:
        case CPPDDS_DXGI_FORMAT_BC4_SNORM:
        case CPPDDS_DXGI_FORMAT_BC5_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC5_UNORM:
        case CPPDDS_DXGI_FORMAT_BC5_SNORM:
        case CPPDDS_DXGI_FORMAT_B5G6R5_UNORM:
        case CPPDDS_DXGI_FORMAT_B5G5R5A1_UNORM:
        case CPPDDS_DXGI_FORMAT_B8G8R8A8_UNORM:
        case CPPDDS_DXGI_FORMAT_B8G8R8X8_UNORM:
        case CPPDDS_DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM:
        case CPPDDS_DXGI_FORMAT_B8G8R8A8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_B8G8R8X8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC6H_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC6H_UF16:
        case CPPDDS_DXGI_FORMAT_BC6H_SF16:
        case CPPDDS_DXGI_FORMAT_BC7_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC7_UNORM:
        case CPPDDS_DXGI_FORMAT_BC7_UNORM_SRGB:
            ddspf.flags_ = CPPDDS_DDPF_FOURCC;
            ddspf.fourCC_ = CPPDDS_FOURCC_DX10;
            return true;
        case CPPDDS_DXGI_FORMAT_AYUV:
        case CPPDDS_DXGI_FORMAT_Y410:
        case CPPDDS_DXGI_FORMAT_Y416:
        case CPPDDS_DXGI_FORMAT_NV12:
        case CPPDDS_DXGI_FORMAT_P010:
        case CPPDDS_DXGI_FORMAT_P016:
        case CPPDDS_DXGI_FORMAT_420_OPAQUE:
        case CPPDDS_DXGI_FORMAT_YUY2:
        case CPPDDS_DXGI_FORMAT_Y210:
        case CPPDDS_DXGI_FORMAT_Y216:
        case CPPDDS_DXGI_FORMAT_NV11:
        case CPPDDS_DXGI_FORMAT_AI44:
        case CPPDDS_DXGI_FORMAT_IA44:
        case CPPDDS_DXGI_FORMAT_P8:
        case CPPDDS_DXGI_FORMAT_A8P8:
            return false;
        case CPPDDS_DXGI_FORMAT_B4G4R4A4_UNORM:
            ddspf.flags_ = CPPDDS_DDPF_FOURCC;
            ddspf.fourCC_ = CPPDDS_FOURCC_DX10;
            return true;
        case CPPDDS_DXGI_FORMAT_P208:
        case CPPDDS_DXGI_FORMAT_V208:
        case CPPDDS_DXGI_FORMAT_V408:
            return false;
        }
        return false;
    }

    bool cppdds_read_pixel(uint8_t* dst, uint32_t format, const uint8_t* src)
    {
        switch(format) {
        case CPPDDS_DXGI_FORMAT_R32G32B32A32_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R32G32B32A32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32G32B32A32_UINT:
        case CPPDDS_DXGI_FORMAT_R32G32B32A32_SINT:
            ::memcpy(dst, src, 16);
            return true;
        case CPPDDS_DXGI_FORMAT_R32G32B32_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R32G32B32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32G32B32_UINT:
        case CPPDDS_DXGI_FORMAT_R32G32B32_SINT:
            ::memcpy(dst, src, 12);
            return true;
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_FLOAT:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_UNORM:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_UINT:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_SNORM:
        case CPPDDS_DXGI_FORMAT_R16G16B16A16_SINT:
        case CPPDDS_DXGI_FORMAT_R32G32_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R32G32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32G32_UINT:
        case CPPDDS_DXGI_FORMAT_R32G32_SINT:
        case CPPDDS_DXGI_FORMAT_R32G8X24_TYPELESS:
        case CPPDDS_DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
        case CPPDDS_DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS:
        case CPPDDS_DXGI_FORMAT_X32_TYPELESS_G8X24_UINT:
            ::memcpy(dst, src, 8);
            return true;
        case CPPDDS_DXGI_FORMAT_R10G10B10A2_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R10G10B10A2_UNORM:
        case CPPDDS_DXGI_FORMAT_R10G10B10A2_UINT:
        case CPPDDS_DXGI_FORMAT_R11G11B10_FLOAT:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_UNORM:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_UINT:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_SNORM:
        case CPPDDS_DXGI_FORMAT_R8G8B8A8_SINT:
        case CPPDDS_DXGI_FORMAT_R16G16_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R16G16_FLOAT:
        case CPPDDS_DXGI_FORMAT_R16G16_UNORM:
        case CPPDDS_DXGI_FORMAT_R16G16_UINT:
        case CPPDDS_DXGI_FORMAT_R16G16_SNORM:
        case CPPDDS_DXGI_FORMAT_R16G16_SINT:
        case CPPDDS_DXGI_FORMAT_R32_TYPELESS:
        case CPPDDS_DXGI_FORMAT_D32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32_FLOAT:
        case CPPDDS_DXGI_FORMAT_R32_UINT:
        case CPPDDS_DXGI_FORMAT_R32_SINT:
        case CPPDDS_DXGI_FORMAT_R24G8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_D24_UNORM_S8_UINT:
        case CPPDDS_DXGI_FORMAT_R24_UNORM_X8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_X24_TYPELESS_G8_UINT:
            ::memcpy(dst, src, 4);
            return true;
        case CPPDDS_DXGI_FORMAT_R8G8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R8G8_UNORM:
        case CPPDDS_DXGI_FORMAT_R8G8_UINT:
        case CPPDDS_DXGI_FORMAT_R8G8_SNORM:
        case CPPDDS_DXGI_FORMAT_R8G8_SINT:
        case CPPDDS_DXGI_FORMAT_R16_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R16_FLOAT:
        case CPPDDS_DXGI_FORMAT_D16_UNORM:
        case CPPDDS_DXGI_FORMAT_R16_UNORM:
        case CPPDDS_DXGI_FORMAT_R16_UINT:
        case CPPDDS_DXGI_FORMAT_R16_SNORM:
        case CPPDDS_DXGI_FORMAT_R16_SINT:
            ::memcpy(dst, src, 2);
            return true;
        case CPPDDS_DXGI_FORMAT_R8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_R8_UNORM:
        case CPPDDS_DXGI_FORMAT_R8_UINT:
        case CPPDDS_DXGI_FORMAT_R8_SNORM:
        case CPPDDS_DXGI_FORMAT_R8_SINT:
        case CPPDDS_DXGI_FORMAT_A8_UNORM:
            ::memcpy(dst, src, 1);
            return true;
        case CPPDDS_DXGI_FORMAT_R1_UNORM:
            break;
        case CPPDDS_DXGI_FORMAT_R9G9B9E5_SHAREDEXP:
            ::memcpy(dst, src, 4);
            return true;
        case CPPDDS_DXGI_FORMAT_R8G8_B8G8_UNORM:
        case CPPDDS_DXGI_FORMAT_G8R8_G8B8_UNORM:
            ::memcpy(dst, src, 4);
            return true;
        case CPPDDS_DXGI_FORMAT_BC1_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC1_UNORM:
        case CPPDDS_DXGI_FORMAT_BC1_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC2_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC2_UNORM:
        case CPPDDS_DXGI_FORMAT_BC2_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC3_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC3_UNORM:
        case CPPDDS_DXGI_FORMAT_BC3_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC4_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC4_UNORM:
        case CPPDDS_DXGI_FORMAT_BC4_SNORM:
        case CPPDDS_DXGI_FORMAT_BC5_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC5_UNORM:
        case CPPDDS_DXGI_FORMAT_BC5_SNORM:
            break;
        case CPPDDS_DXGI_FORMAT_B5G6R5_UNORM:
        case CPPDDS_DXGI_FORMAT_B5G5R5A1_UNORM:
            ::memcpy(dst, src, 2);
            return true;
        case CPPDDS_DXGI_FORMAT_B8G8R8A8_UNORM:
        case CPPDDS_DXGI_FORMAT_B8G8R8X8_UNORM:
        case CPPDDS_DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM:
        case CPPDDS_DXGI_FORMAT_B8G8R8A8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_B8G8R8X8_TYPELESS:
        case CPPDDS_DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
            ::memcpy(dst, src, 4);
            return true;
        case CPPDDS_DXGI_FORMAT_BC6H_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC6H_UF16:
        case CPPDDS_DXGI_FORMAT_BC6H_SF16:
        case CPPDDS_DXGI_FORMAT_BC7_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC7_UNORM:
        case CPPDDS_DXGI_FORMAT_BC7_UNORM_SRGB:
            break;
        case CPPDDS_DXGI_FORMAT_AYUV:
        case CPPDDS_DXGI_FORMAT_Y410:
        case CPPDDS_DXGI_FORMAT_Y416:
        case CPPDDS_DXGI_FORMAT_NV12:
        case CPPDDS_DXGI_FORMAT_P010:
        case CPPDDS_DXGI_FORMAT_P016:
        case CPPDDS_DXGI_FORMAT_420_OPAQUE:
        case CPPDDS_DXGI_FORMAT_YUY2:
        case CPPDDS_DXGI_FORMAT_Y210:
        case CPPDDS_DXGI_FORMAT_Y216:
        case CPPDDS_DXGI_FORMAT_NV11:
        case CPPDDS_DXGI_FORMAT_AI44:
        case CPPDDS_DXGI_FORMAT_IA44:
        case CPPDDS_DXGI_FORMAT_P8:
        case CPPDDS_DXGI_FORMAT_A8P8:
            break;
        case CPPDDS_DXGI_FORMAT_B4G4R4A4_UNORM:
            ::memcpy(dst, src, 2);
            return true;
        case CPPDDS_DXGI_FORMAT_P208:
        case CPPDDS_DXGI_FORMAT_V208:
        case CPPDDS_DXGI_FORMAT_V408:
            break;
        }
        return false;
    }

    bool cppdds_dxt_read(uint32_t dst_size, uint8_t* dst, uint32_t width, uint32_t height, uint32_t mipmaps, uint32_t format, uint32_t src_size, const uint8_t* src)
    {
        uint32_t block_size = 0;
        switch(format) {
        case CPPDDS_DXGI_FORMAT_BC1_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC1_UNORM:
        case CPPDDS_DXGI_FORMAT_BC1_UNORM_SRGB:
            block_size = 8;
            break;
        case CPPDDS_DXGI_FORMAT_BC2_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC2_UNORM:
        case CPPDDS_DXGI_FORMAT_BC2_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC3_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC3_UNORM:
        case CPPDDS_DXGI_FORMAT_BC3_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC4_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC4_UNORM:
        case CPPDDS_DXGI_FORMAT_BC4_SNORM:
        case CPPDDS_DXGI_FORMAT_BC5_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC5_UNORM:
        case CPPDDS_DXGI_FORMAT_BC5_SNORM:
        case CPPDDS_DXGI_FORMAT_BC6H_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC6H_UF16:
        case CPPDDS_DXGI_FORMAT_BC6H_SF16:
        case CPPDDS_DXGI_FORMAT_BC7_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC7_UNORM:
        case CPPDDS_DXGI_FORMAT_BC7_UNORM_SRGB:
            block_size = 16;
            break;
        default:
            return 0;
        }
        for(uint32_t i = 0; i < mipmaps; ++i) {
            uint32_t w = (width + 3UL) >> 2;
            uint32_t h = (height + 3UL) >> 2;
            uint32_t size = (w * h) * block_size;
            if(dst_size < size || src_size < size) {
                return false;
            }
            ::memcpy(dst, src, size);
            width = cppdds_max(width >> 1, 1);
            height = cppdds_max(height >> 1, 1);
            dst_size -= size;
            src_size -= size;
        }
        return true;
    }

    bool cppdds_read(uint32_t dst_size, uint8_t* dst, uint32_t width, uint32_t height, uint32_t depth, uint32_t mipmaps, uint32_t format, uint32_t src_size, const uint8_t* src)
    {
        switch(format) {
        case CPPDDS_DXGI_FORMAT_BC1_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC1_UNORM:
        case CPPDDS_DXGI_FORMAT_BC1_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC2_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC2_UNORM:
        case CPPDDS_DXGI_FORMAT_BC2_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC3_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC3_UNORM:
        case CPPDDS_DXGI_FORMAT_BC3_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC4_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC4_UNORM:
        case CPPDDS_DXGI_FORMAT_BC4_SNORM:
        case CPPDDS_DXGI_FORMAT_BC5_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC5_UNORM:
        case CPPDDS_DXGI_FORMAT_BC5_SNORM:
        case CPPDDS_DXGI_FORMAT_BC6H_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC6H_UF16:
        case CPPDDS_DXGI_FORMAT_BC6H_SF16:
        case CPPDDS_DXGI_FORMAT_BC7_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC7_UNORM:
        case CPPDDS_DXGI_FORMAT_BC7_UNORM_SRGB:
            return cppdds_dxt_read(dst_size, dst, width, height, mipmaps, format, src_size, src);
        }
        uint32_t bpp = cppdds_bpp(format);
        if(bpp <= 0) {
            return false;
        }
        for(uint32_t i = 0; i < mipmaps; ++i) {
            uint32_t size = bpp * width * height * depth;
            if(dst_size < size || src_size < size) {
                return false;
            }
            ::memcpy(dst, src, size);
            width = cppdds_max(width >> 1, 1);
            height = cppdds_max(height >> 1, 1);
            depth = cppdds_max(depth >> 1, 1);
            dst_size -= size;
            src_size -= size;
        }
        return true;
    }

    uint32_t cppdds_calc_dxt_size(uint32_t width, uint32_t height, uint32_t mipmaps, uint32_t format)
    {
        uint32_t block_size = 0;
        switch(format) {
        case CPPDDS_DXGI_FORMAT_BC1_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC1_UNORM:
        case CPPDDS_DXGI_FORMAT_BC1_UNORM_SRGB:
            block_size = 8;
            break;
        case CPPDDS_DXGI_FORMAT_BC2_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC2_UNORM:
        case CPPDDS_DXGI_FORMAT_BC2_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC3_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC3_UNORM:
        case CPPDDS_DXGI_FORMAT_BC3_UNORM_SRGB:
        case CPPDDS_DXGI_FORMAT_BC4_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC4_UNORM:
        case CPPDDS_DXGI_FORMAT_BC4_SNORM:
        case CPPDDS_DXGI_FORMAT_BC5_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC5_UNORM:
        case CPPDDS_DXGI_FORMAT_BC5_SNORM:
        case CPPDDS_DXGI_FORMAT_BC6H_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC6H_UF16:
        case CPPDDS_DXGI_FORMAT_BC6H_SF16:
        case CPPDDS_DXGI_FORMAT_BC7_TYPELESS:
        case CPPDDS_DXGI_FORMAT_BC7_UNORM:
        case CPPDDS_DXGI_FORMAT_BC7_UNORM_SRGB:
            block_size = 16;
            break;
        default:
            return 0;
        }

        uint32_t size = 0;
        for(uint32_t i = 0; i < mipmaps; ++i) {
            uint32_t w = (width + 3UL) >> 2;
            uint32_t h = (height + 3UL) >> 2;
            size += (w * h) * block_size;
            width = cppdds_max(width >> 1, 1);
            height = cppdds_max(height >> 1, 1);
        }
        return size;
    }

#ifdef __cplusplus
} // namespace
#endif

uint32_t cppdds_calc_size(uint32_t width, uint32_t height, uint32_t depth, uint32_t mipmaps, uint32_t array, uint32_t format)
{
    switch(format) {
    case CPPDDS_DXGI_FORMAT_INVALID:
        return 0;
    case CPPDDS_DXGI_FORMAT_BC1_TYPELESS:
    case CPPDDS_DXGI_FORMAT_BC1_UNORM:
    case CPPDDS_DXGI_FORMAT_BC1_UNORM_SRGB:
    case CPPDDS_DXGI_FORMAT_BC2_TYPELESS:
    case CPPDDS_DXGI_FORMAT_BC2_UNORM:
    case CPPDDS_DXGI_FORMAT_BC2_UNORM_SRGB:
    case CPPDDS_DXGI_FORMAT_BC3_TYPELESS:
    case CPPDDS_DXGI_FORMAT_BC3_UNORM:
    case CPPDDS_DXGI_FORMAT_BC3_UNORM_SRGB:
    case CPPDDS_DXGI_FORMAT_BC4_TYPELESS:
    case CPPDDS_DXGI_FORMAT_BC4_UNORM:
    case CPPDDS_DXGI_FORMAT_BC4_SNORM:
    case CPPDDS_DXGI_FORMAT_BC5_TYPELESS:
    case CPPDDS_DXGI_FORMAT_BC5_UNORM:
    case CPPDDS_DXGI_FORMAT_BC5_SNORM:
    case CPPDDS_DXGI_FORMAT_BC6H_TYPELESS:
    case CPPDDS_DXGI_FORMAT_BC6H_UF16:
    case CPPDDS_DXGI_FORMAT_BC6H_SF16:
    case CPPDDS_DXGI_FORMAT_BC7_TYPELESS:
    case CPPDDS_DXGI_FORMAT_BC7_UNORM:
    case CPPDDS_DXGI_FORMAT_BC7_UNORM_SRGB:
        return cppdds_calc_dxt_size(width, height, mipmaps, format) * array;
    }

    uint32_t pixels = 0;
    for(uint32_t i = 0; i < mipmaps; ++i) {
        pixels += width * height * depth;
        width = cppdds_max(width >> 1, 1);
        height = cppdds_max(height >> 1, 1);
        depth = cppdds_max(depth >> 1, 1);
    }
    return pixels * cppdds_bpp(format) * array;
}

uint32_t cppdds_read(
    uint32_t dst_size,
    uint8_t* dst,
    uint32_t* width,
    uint32_t* height,
    uint32_t* depth,
    uint32_t* mipmaps,
    uint32_t* array,
    uint32_t* cubemaps,
    uint32_t* format,
    uint32_t src_size,
    const uint8_t* src)
{
    CPPDDS_ASSERT(CPPDDS_NULL != width);
    CPPDDS_ASSERT(CPPDDS_NULL != height);
    CPPDDS_ASSERT(CPPDDS_NULL != depth);
    CPPDDS_ASSERT(CPPDDS_NULL != array);
    CPPDDS_ASSERT(CPPDDS_NULL != mipmaps);
    CPPDDS_ASSERT(CPPDDS_NULL != cubemaps);
    CPPDDS_ASSERT(CPPDDS_NULL != format);
    CPPDDS_ASSERT(CPPDDS_NULL != src);

    if(src_size < 4 || 0x20534444ULL != cppdds_to_uint32(src)) {
        return 0;
    }
    src += 4;
    src_size -= 4;
    if(src_size < sizeof(CPPDS_HEADER)) {
        return false;
    }
    CPPDS_HEADER header;
    memcpy(&header, src, sizeof(CPPDS_HEADER));
    src += sizeof(CPPDS_HEADER);
    src_size -= sizeof(CPPDS_HEADER);
    if(CPPDDS_DDSD_REQUIRED != (CPPDDS_DDSD_REQUIRED & header.flags_)) {
        return 0;
    }
    CPPDDS_HEADER10 header10 = {};
    if(sizeof(CPPDDS_HEADER10) <= src_size && CPPDDS_DDPF_FOURCC == header.ddspf_.flags_ && CPPDDS_FOURCC_DX10 == header.ddspf_.fourCC_) {
        memcpy(&header10, src, sizeof(CPPDDS_HEADER10));
        src += sizeof(CPPDDS_HEADER10);
        src_size -= sizeof(CPPDDS_HEADER10);
        *format = (uint32_t)header10.dxgiFormat_;
        *array = cppdds_max(header10.arraySize_, 1);
        if(0x04U == (header10.miscFlag_&0x04U)){
            *cubemaps = 6;
        }
    } else {
        *format = cppdds_format(header.ddspf_);
        *array = 1;

        *cubemaps = 0;
        if(CPPDDS_CAPS2_CUBEMAP == (header.caps2_ & CPPDDS_CAPS2_CUBEMAP)) {
            uint32_t cubemap_flags =
                CPPDDS_CAPS2_CUBEMAP_POSITIVEX
                | CPPDDS_CAPS2_CUBEMAP_NEGATIVEX
                | CPPDDS_CAPS2_CUBEMAP_POSITIVEY
                | CPPDDS_CAPS2_CUBEMAP_NEGATIVEY
                | CPPDDS_CAPS2_CUBEMAP_POSITIVEZ
                | CPPDDS_CAPS2_CUBEMAP_NEGATIVEZ;
            if(cubemap_flags == (header.caps2_ & cubemap_flags)) {
                *cubemaps = 6;
            }
        }
    }
    *width = header.width_;
    *height = header.height_;
    *depth = cppdds_max(header.depth_, 1);
    *mipmaps = (CPPDDS_DDSD_MIPMAPCOUNT == (CPPDDS_DDSD_MIPMAPCOUNT & header.flags_)) ? cppdds_max(header.mipMapCount_, 1) : 1;

    uint32_t images = (*array);
    uint32_t image_size = cppdds_calc_size(*width, *height, *depth, *mipmaps, *array, *format);
    uint32_t total = image_size * images;
    if(CPPDDS_NULL == dst) {
        return total;
    }
    if(dst_size < total || total <= 0) {
        return 0;
    }
    for(uint32_t i = 0; i < images; ++i) {
        if(!cppdds_read(dst_size, dst, *width, *height, *depth, *mipmaps, *format, src_size, src)) {
            return 0;
        }
        dst_size -= image_size;
        dst += image_size;
        src_size -= image_size;
        src += image_size;
    }
    return total;
}

uint32_t cppdds_write(
    uint32_t dst_size,
    uint8_t* dst,
    uint32_t width,
    uint32_t height,
    uint32_t depth,
    uint32_t mipmaps,
    uint32_t array,
    uint32_t format,
    uint32_t src_size,
    const uint8_t* src,
    bool cubemap)
{
    CPPDDS_ASSERT(CPPDDS_NULL != src);
    uint32_t images = array;
    if(cubemap){
        images *= 6;
    }

    uint32_t image_size = cppdds_calc_size(width, height, depth, mipmaps, array, format);
    uint32_t total = image_size * images;
    total += 4;
    total += sizeof(CPPDS_HEADER);
    total += sizeof(CPPDDS_HEADER10);
    if(nullptr == dst){
        return total;
    }
    if(dst_size<total){
        return 0;
    }
    //write magic
    const uint32_t Magic = 0x20534444ULL;
    ::memcpy(dst, &Magic, sizeof(Magic));
    dst += sizeof(Magic);
    dst_size -= sizeof(Magic);

    //write header
    CPPDS_HEADER header = {};
    header.size_ = sizeof(CPPDS_HEADER);
    header.flags_ = CPPDDS_DDSD_REQUIRED;
    header.width_ = width;
    header.height_ = height;
    header.ddspf_.size_ = sizeof(CPPDDS_PIXELFORMAT);
    cppdds_pixelformat(header.ddspf_, format);
    header.caps_ = CPPDDS_CAPS_TEXTURE;
    ::memcpy(dst, &header, sizeof(CPPDS_HEADER));
    dst += sizeof(CPPDS_HEADER);
    dst_size -= sizeof(CPPDS_HEADER);

    CPPDDS_HEADER10 header10 = {};
    header10.dxgiFormat_ = format;
    header10.resourceDimension_ = CPPDDS_DIMENSION_1D;
    if(1<height){
        header10.resourceDimension_ = CPPDDS_DIMENSION_2D;
    }
    if(1<depth){
        header10.resourceDimension_ = CPPDDS_DIMENSION_3D;
    }
    header10.miscFlag_ = cubemap? 0x4U : 0;
    header10.miscFlags2_ = 0x01U;
    ::memcpy(dst, &header10, sizeof(CPPDDS_HEADER10));
    dst += sizeof(CPPDDS_HEADER10);
    dst_size -= sizeof(CPPDDS_HEADER10);

    for(uint32_t i = 0; i < images; ++i) {
        if(dst_size<src_size){
            return 0;
        }
        ::memcpy(dst, src, image_size);
        dst_size -= image_size;
        dst += image_size;
        src_size -= image_size;
        src += image_size;
    }
    return total;
}

#ifdef __cplusplus
} // namespace cppdds
#endif

#endif // CPPDDS_IMPLEMENTATION
