//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;
@protocol TBPSCaptureScanManagerDelegate;

@interface TBPSCaptureScanManager : NSObject
{
    _Bool _isScanning;	// 8 = 0x8
    id <TBPSCaptureScanManagerDelegate> _delegate;	// 16 = 0x10
    NSDate *_lastScanning;	// 24 = 0x18
}

+ (void)selectAsset:(id)arg1;
@property(nonatomic) id <TBPSCaptureScanManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *lastScanning; // @synthesize lastScanning=_lastScanning;
@property(readonly, nonatomic) _Bool isScanning; // @synthesize isScanning=_isScanning;
- (void).cxx_destruct;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)dealloc;
- (void)scanWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isShowALAsset:(id)arg1;
- (id)init;

@end
