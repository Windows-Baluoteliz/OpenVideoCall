
#ifndef AGORA_VIDEO_SOURCE_ENGINE_H
#define AGORA_VIDEO_SOURCE_ENGINE_H

#define _CRT_SECURE_NO_WARNINGS
#include "IAgoraRtcEngine.h"

namespace agora{
	namespace rtc{

		class IAgoraVideoSourceEngine
		{
		public:
			virtual void release() = 0;
			virtual bool initialize(const char* appid) = 0;
			virtual int setChannelProfile(CHANNEL_PROFILE_TYPE profile) = 0;
			virtual int setVideoProfile(VIDEO_PROFILE_TYPE profile, bool swapWidthAndHeight) = 0;
			virtual int enableWebSdkInteroperability(bool enable) = 0;
			virtual int startScreenCapture(HWND windowId, int capFreq, Rect rect, int bitrate) = 0;
			virtual int stopScreenCapture() = 0;
			virtual int setParameters(const char* parameters) = 0;
			virtual int setupLocalVideo(VideoCanvas canvas) = 0;
			virtual int startPreview() = 0;
			virtual int stopPreview() = 0;
			virtual bool enableDualStreamMode(bool enable) = 0;
			virtual int renewToken(const char* token) = 0;
			virtual int joinChannel(const char* token, const char* channelId, const char* info, uid_t uid) = 0;
			virtual int leaveChannel() = 0;
		};
	} // namespace rtc
} //namespace agora

AGORA_API agora::rtc::IAgoraVideoSourceEngine* AGORA_CALL createAgoraVideoSourceEngine();

#endif