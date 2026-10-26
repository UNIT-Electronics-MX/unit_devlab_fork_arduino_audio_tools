#pragma once

#include "DevLab_AudioTools.h"

#if __has_include("AudioTools/Disk/AudioSourceSD.h")
#include "AudioTools/Disk/AudioSourceSD.h"
#else
#include "AudioTools/AudioLibs/AudioSourceSD.h"
#endif
