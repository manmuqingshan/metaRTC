﻿//
// Copyright (c) 2019-2022 yanggaofeng
//


#include <yangplayer/YangPlayFactory.h>

//#include <yangaudiodev/linux/YangAudioPlayAlsa.h>
YangPlayFactory::YangPlayFactory() {
	// TODO Auto-generated constructor stub

}

YangPlayFactory::~YangPlayFactory() {
	// TODO Auto-generated destructor stub
}

YangAudioPlay* YangPlayFactory::createAudioPlay(YangAudioInfo *pcontext){
#ifndef _WIN32
	return NULL;//if(pcontext->audioPlayType==1) return new YangAudioPlayAlsa(pcontext);
#endif
	return NULL;// new YangAudioPlaySdl(pcontext);
}

YangAudioPlay *YangPlayFactory::createAudioPlay(YangAudioPlayType paet,YangAudioInfo *pcontext){
#ifndef _WIN32
	return NULL;//if(paet==Yang_AP_ALSA) return new YangAudioPlayAlsa(pcontext);
#endif
	return NULL;//new YangAudioPlaySdl(pcontext);
}
