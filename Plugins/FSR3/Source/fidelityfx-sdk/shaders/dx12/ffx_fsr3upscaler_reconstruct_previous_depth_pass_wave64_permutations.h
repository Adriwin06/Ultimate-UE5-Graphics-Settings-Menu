#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b.h"

typedef union ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FSR3UPSCALER_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_PermutationKey;

typedef struct ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_PermutationInfo {
    const uint32_t       blobSize;
    const unsigned char* blobData;


    const uint32_t  numConstantBuffers;
    const char**    constantBufferNames;
    const uint32_t* constantBufferBindings;
    const uint32_t* constantBufferCounts;
    const uint32_t* constantBufferSpaces;

    const uint32_t  numSRVTextures;
    const char**    srvTextureNames;
    const uint32_t* srvTextureBindings;
    const uint32_t* srvTextureCounts;
    const uint32_t* srvTextureSpaces;

    const uint32_t  numUAVTextures;
    const char**    uavTextureNames;
    const uint32_t* uavTextureBindings;
    const uint32_t* uavTextureCounts;
    const uint32_t* uavTextureSpaces;

    const uint32_t  numSRVBuffers;
    const char**    srvBufferNames;
    const uint32_t* srvBufferBindings;
    const uint32_t* srvBufferCounts;
    const uint32_t* srvBufferSpaces;

    const uint32_t  numUAVBuffers;
    const char**    uavBufferNames;
    const uint32_t* uavBufferBindings;
    const uint32_t* uavBufferCounts;
    const uint32_t* uavBufferSpaces;

    const uint32_t  numSamplers;
    const char**    samplerNames;
    const uint32_t* samplerBindings;
    const uint32_t* samplerCounts;
    const uint32_t* samplerSpaces;

    const uint32_t  numRTAccelerationStructures;
    const char**    rtAccelerationStructureNames;
    const uint32_t* rtAccelerationStructureBindings;
    const uint32_t* rtAccelerationStructureCounts;
    const uint32_t* rtAccelerationStructureSpaces;
} ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_IndirectionTable[] = {
    13,
    13,
    9,
    9,
    7,
    7,
    4,
    4,
    15,
    15,
    8,
    8,
    11,
    11,
    0,
    0,
    14,
    14,
    12,
    12,
    2,
    2,
    10,
    10,
    3,
    3,
    1,
    1,
    6,
    6,
    5,
    5,
    13,
    13,
    9,
    9,
    7,
    7,
    4,
    4,
    15,
    15,
    8,
    8,
    11,
    11,
    0,
    0,
    14,
    14,
    12,
    12,
    2,
    2,
    10,
    10,
    3,
    3,
    1,
    1,
    6,
    6,
    5,
    5,
};

static const ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_PermutationInfo g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_PermutationInfo[] = {
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_69525c65ff8f2f547314f75e9ddf6283_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a9a8d2281f85817f0832c3675a464522_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0b0877ac9369d87564fc4f6f47bf490e_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_a6cff3d72d9a536d998709c257ff4e8a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_fcc2ce38f12038824cc52926d1a386ea_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_d8306b74cb699efd7dd4c54da15affb0_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_f1eb03094ff995d753aaee93934385f0_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_37e077844d11d835615285702a4b4ba9_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_238219ac4486909007f46ebaae9608b8_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_176c02bac27cd99e1182320253b5d034_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73094f94f3eb2fdd828295508c3f142e_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_73842b3b9066ffd4884f511bf776ce97_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_4691ce58f411fc836f205e46f1b3ee56_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_e41aade6381ba5b6f6ee0e46451246f5_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_7ffe735a2c5a888c0b2a00b13765d6e0_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_0bfa2605aef4593ded3b922017c7721b_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};
