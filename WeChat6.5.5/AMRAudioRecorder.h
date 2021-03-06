//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAudioRecorder.h"

@class NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface AMRAudioRecorder : BaseAudioRecorder
{
    NSRecursiveLock *mPrepareSentLock;
    _Bool mIsPrepareSent;
    _Bool mIsNeedRestartMusic;
    _Bool mIsNeedRestartAudioTalk;
}

@property(nonatomic) _Bool needRestartAudioTalk; // @synthesize needRestartAudioTalk=mIsNeedRestartAudioTalk;
@property(nonatomic) _Bool needRestartMusic; // @synthesize needRestartMusic=mIsNeedRestartMusic;
- (void).cxx_destruct;
- (void)stop;
- (void)stopButNotNotify;
- (_Bool)prepareRecordButNotNotify;
- (void)record;
- (_Bool)prepareSend;
- (void)createAMRFile:(id)arg1;
- (_Bool)prepareRecord;
- (void)setDelegate:(id)arg1;
- (void)MainThreadStopRecord;
- (id)init;
- (void)prepareBuffers;
- (void)setDataFormat;

@end

