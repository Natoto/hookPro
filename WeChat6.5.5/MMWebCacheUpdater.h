//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMsgExt-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"

__attribute__((visibility("hidden")))
@interface MMWebCacheUpdater : NSObject <INetworkStatusMgrExt, IMsgExt>
{
}

- (void)handleSyncPushInfo:(id)arg1;
- (void)handleAsyncPushInfo:(id)arg1;
- (void)tryStartDownloadPushInfo:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (id)parseNewXml:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)init;
- (void)dealloc;

@end

