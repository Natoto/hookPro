//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBSNSNetServiceContainer;

@interface TBSNSWeexConfigMgr : NSObject
{
    TBSNSNetServiceContainer *_subServices;	// 8 = 0x8
}

+ (_Bool)isOrangeSupportWeex;
+ (id)getWeexListJS;
+ (_Bool)isSupportWeex;
+ (id)sharedInstance;
@property(retain, nonatomic) TBSNSNetServiceContainer *subServices; // @synthesize subServices=_subServices;
- (void).cxx_destruct;
- (void)result:(_Bool)arg1 markT:(int)arg2 withData:(id)arg3;
- (void)dealloc;
- (void)checkWeexConfig;
- (id)init;

@end

