//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LVProtocal-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class CABasicAnimation, LView, NSString, NSValue, UIView;

@interface LVAnimator : NSObject <LVProtocal, NSCopying, NSMutableCopying>
{
    NSString *_animationKey;	// 8 = 0x8
    CABasicAnimation *_pausedAnimation;	// 16 = 0x10
    double _timeOffset;	// 24 = 0x18
    _Bool _autoreverses;	// 32 = 0x20
    float _duration;	// 36 = 0x24
    float _delay;	// 40 = 0x28
    int _repeatCount;	// 44 = 0x2c
    int _interpolator;	// 48 = 0x30
    NSString *_keyPath;	// 56 = 0x38
    NSValue *_toValue;	// 64 = 0x40
    UIView *_target;	// 72 = 0x48
    LView *_lv_lview;	// 80 = 0x50
    struct _LVUserDataInfo *_lv_userData;	// 88 = 0x58
}

+ (int)classDefine:(struct lv_State *)arg1;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LView *lv_lview; // @synthesize lv_lview=_lv_lview;
@property(nonatomic) __weak UIView *target; // @synthesize target=_target;
@property(nonatomic) int interpolator; // @synthesize interpolator=_interpolator;
@property(nonatomic) _Bool autoreverses; // @synthesize autoreverses=_autoreverses;
@property(nonatomic) int repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) float delay; // @synthesize delay=_delay;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSValue *toValue; // @synthesize toValue=_toValue;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (void)callback:(int)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(readonly, nonatomic, getter=isPaused) _Bool paused; // @dynamic paused;
- (void)resume;
- (void)pause;
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @dynamic running;
- (void)cancel;
- (void)start;
- (void)syncAnimatingValue:(id)arg1;
- (id)buildAnimation;
- (id)buildTimingFunction:(int)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)lv_nativeObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
