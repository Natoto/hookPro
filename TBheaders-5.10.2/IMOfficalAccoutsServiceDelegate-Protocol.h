//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString;

@protocol IMOfficalAccoutsServiceDelegate <NSObject>

@optional
- (void)deleteMessageIds:(NSArray *)arg1 error:(NSError *)arg2;
- (void)officalAccountMessages:(NSArray *)arg1 hasMore:(_Bool)arg2 error:(NSError *)arg3 fromMessageId:(NSString *)arg4;
- (void)officalAccountInfoDeleted:(NSArray *)arg1;
- (void)officalAccountInfoUpdated:(NSArray *)arg1;
@end
