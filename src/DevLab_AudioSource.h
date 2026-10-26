#pragma once

#include "DevLab_AudioTools.h"

#if __has_include("AudioTools/Disk/AudioSource.h")
#include "AudioTools/Disk/AudioSource.h"
#define DEVLAB_AUDIO_SOURCE_BEGIN_RETURNS_BOOL 1
#else
#include "AudioTools/CoreAudio/AudioSource.h"
#define DEVLAB_AUDIO_SOURCE_BEGIN_RETURNS_BOOL 0
#endif
