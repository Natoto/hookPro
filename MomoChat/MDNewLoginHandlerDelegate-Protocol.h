//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol MDNewLoginHandlerDelegate <NSObject>
- (void)loginSuccess;
- (void)loginFailErrorCode:(long long)arg1 extraInfo:(NSDictionary *)arg2;
- (void)showServerError;
- (void)removeHud;
- (void)showHud;
@end
