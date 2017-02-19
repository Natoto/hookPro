//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DataSynchronizer, NSString;
@protocol EventWatcherProtocol;

@interface TBAbortMonitor : NSObject
{
    NSString *_markerFileDir;	// 8 = 0x8
    NSString *_riskyMarkerFileDir;	// 16 = 0x10
    NSString *_crashMarkerFileDir;	// 24 = 0x18
    NSString *_appVersion;	// 32 = 0x20
    DataSynchronizer *_dataSynchronizer;	// 40 = 0x28
    id <EventWatcherProtocol> _h5AbortMonitorDelegate;	// 48 = 0x30
    id <EventWatcherProtocol> _transitionMonitorDelegate;	// 56 = 0x38
}

+ (id)instance;
@property(retain, nonatomic) id <EventWatcherProtocol> transitionMonitorDelegate; // @synthesize transitionMonitorDelegate=_transitionMonitorDelegate;
@property(retain, nonatomic) id <EventWatcherProtocol> h5AbortMonitorDelegate; // @synthesize h5AbortMonitorDelegate=_h5AbortMonitorDelegate;
@property(retain, nonatomic) DataSynchronizer *dataSynchronizer; // @synthesize dataSynchronizer=_dataSynchronizer;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *crashMarkerFileDir; // @synthesize crashMarkerFileDir=_crashMarkerFileDir;
@property(copy, nonatomic) NSString *riskyMarkerFileDir; // @synthesize riskyMarkerFileDir=_riskyMarkerFileDir;
@property(copy, nonatomic) NSString *markerFileDir; // @synthesize markerFileDir=_markerFileDir;
- (void).cxx_destruct;
- (void)doActionWhenMemoryWarning;
- (float)getMemoryUsage;
- (void)dealloc;
- (void)startFullTraceWatcher;
- (void)markRiskyDevice;
- (void)removeRiskyTag;
- (_Bool)isRiskyDevice;
- (long long)markerStatus:(id *)arg1;
- (void)removeMarkerOnAppTerminate;
- (void)logEnterForground;
- (void)logEnterBackground;
- (void)addAction:(id)arg1 forPage:(id)arg2;
- (void)createCrashMarker;
- (_Bool)isReleaseVersion;
- (void)handleAbortFile;
- (void)onApplicationLaunched;
- (void)registerLifeCycleObservers:(id)arg1;
- (id)init;

@end
