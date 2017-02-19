//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBRateShareHelpViewDelegate-Protocol.h"

@class NSString, TBRateShareComponent, TBRateShareHelpView, UIButton;

@interface TBRateShareView : UIView <TBRateShareHelpViewDelegate>
{
    UIButton *_checkShareButton;	// 8 = 0x8
    UIButton *_questionButton;	// 16 = 0x10
    TBRateShareComponent *_shareRateComponent;	// 24 = 0x18
    TBRateShareHelpView *_shareHelpView;	// 32 = 0x20
    UIView *_bottomLineView;	// 40 = 0x28
}

@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) TBRateShareHelpView *shareHelpView; // @synthesize shareHelpView=_shareHelpView;
@property(retain, nonatomic) TBRateShareComponent *shareRateComponent; // @synthesize shareRateComponent=_shareRateComponent;
@property(retain, nonatomic) UIButton *questionButton; // @synthesize questionButton=_questionButton;
@property(retain, nonatomic) UIButton *checkShareButton; // @synthesize checkShareButton=_checkShareButton;
- (void).cxx_destruct;
- (void)removeRateShareHelpView;
- (void)openHelpPage:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
