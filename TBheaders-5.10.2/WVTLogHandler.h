//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WVExternalLogProtocol-Protocol.h"

@class NSString, TLogBiz;

@interface WVTLogHandler : NSObject <WVExternalLogProtocol>
{
    TLogBiz *_tlog;	// 8 = 0x8
}

+ (void)callALog:(id)arg1 withMessage:(id)arg2;
+ (void)registerToWindVane;
@property(retain, nonatomic) TLogBiz *tlog; // @synthesize tlog=_tlog;
- (void).cxx_destruct;
- (void)verbose:(id)arg1 message:(id)arg2;
- (void)debug:(id)arg1 message:(id)arg2;
- (void)info:(id)arg1 message:(id)arg2;
- (void)warn:(id)arg1 message:(id)arg2;
- (void)error:(id)arg1 message:(id)arg2;
- (long long)logLevel;
- (_Bool)isCloseOwnLog;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

