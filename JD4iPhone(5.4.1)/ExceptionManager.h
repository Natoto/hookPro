//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDStoreNetwork;

@interface ExceptionManager : NSObject
{
    long long reloadCount;
    JDStoreNetwork *network_;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedExceptionManager;
- (void)handleNetworkAbnormalWithInfo:(id)arg1 error:(id)arg2 errorType:(int)arg3 AsiErrorDic:(id)arg4;
- (void)handleError:(id)arg1;
- (id)handleErrorWithResultData:(id)arg1;
- (void)JDUncaughtExceptionHandler;
- (void)startNotification;
- (void)stopNotification;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

