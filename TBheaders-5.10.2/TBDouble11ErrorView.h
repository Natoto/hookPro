//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSError, NSTimer, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface TBDouble11ErrorView : UIView
{
    NSError *_error;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UILabel *_limitHintLabel;	// 24 = 0x18
    UILabel *_reloadLabel;	// 32 = 0x20
    UIButton *_refreshButton;	// 40 = 0x28
    UIActivityIndicatorView *_activityIndicatorView;	// 48 = 0x30
    NSTimer *_timer;	// 56 = 0x38
    id _target;	// 64 = 0x40
    SEL _action;	// 72 = 0x48
}

+ (id)double11ErrorView;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UILabel *reloadLabel; // @synthesize reloadLabel=_reloadLabel;
@property(retain, nonatomic) UILabel *limitHintLabel; // @synthesize limitHintLabel=_limitHintLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)timerFired:(id)arg1;
- (void)showRefreshStatus;
- (void)showNormalStatus;
- (void)refreshButtonPressed:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
