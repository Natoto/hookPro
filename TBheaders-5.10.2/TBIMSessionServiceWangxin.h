//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMSessionServiceBase.h"

#import "TBWangXinManagerDelegate-Protocol.h"
#import "WXContactBizLogicDelegate-Protocol.h"

@class NSString;

@interface TBIMSessionServiceWangxin : TBIMSessionServiceBase <TBWangXinManagerDelegate, WXContactBizLogicDelegate>
{
}

- (void)didGetShuntContact:(id)arg1 ofToId:(id)arg2 withError:(id)arg3;
- (void)ampUserUpdated:(id)arg1;
- (void)ampSessionChanged:(id)arg1 changeType:(id)arg2;
- (_Bool)leaveSession:(id)arg1;
- (_Bool)enterSession:(id)arg1;
- (_Bool)removeSession:(id)arg1;
- (id)getSessionById:(id)arg1;
- (void)perparServiceWithSessionId:(id)arg1 withParam:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
