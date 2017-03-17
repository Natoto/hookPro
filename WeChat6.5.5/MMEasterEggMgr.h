//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMEmoticonResExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MMEasterEggMgr : MMService <MMEmoticonResExt, MMService>
{
    _Bool m_isShowEgg;
    unsigned int m_uiEasterEggLastUpdateTime;
    NSMutableArray *m_arrEgg;
}

- (void).cxx_destruct;
- (id)easterEggWithMessage:(id)arg1 isSender:(_Bool)arg2;
- (_Bool)isShowEasterEgg;
- (void)dealloc;
- (id)init;
- (void)onEmoticonResDeleteForSubType:(unsigned int)arg1;
- (void)onEmoticonResUpdateForSubType:(unsigned int)arg1 dirPath:(id)arg2;
- (void)initEggWithConfigDirPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
