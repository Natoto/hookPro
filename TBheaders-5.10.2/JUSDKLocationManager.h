//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSString, TBLocationData, TBLocationOption;

@interface JUSDKLocationManager : NSObject
{
    _Bool _isLatestLocateSuccess;	// 8 = 0x8
    NSLock *_locationLock;	// 16 = 0x10
    NSString *_gpsCity;	// 24 = 0x18
    NSString *_defaultCity;	// 32 = 0x20
    TBLocationOption *_option;	// 40 = 0x28
    TBLocationData *_locationData;	// 48 = 0x30
}

+ (_Bool)isLatestLocateSuccess;
+ (void)updateUserDefaultCity:(id)arg1;
+ (id)userDefaultCity;
+ (id)sharedInstance;
@property(retain, nonatomic) TBLocationData *locationData; // @synthesize locationData=_locationData;
@property(retain, nonatomic) TBLocationOption *option; // @synthesize option=_option;
@property(retain, nonatomic) NSString *defaultCity; // @synthesize defaultCity=_defaultCity;
@property(retain, nonatomic) NSString *gpsCity; // @synthesize gpsCity=_gpsCity;
@property(nonatomic) _Bool isLatestLocateSuccess; // @synthesize isLatestLocateSuccess=_isLatestLocateSuccess;
- (void).cxx_destruct;
- (void)updateLoction;
- (void)refreshLocation;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
