//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBWebViewController.h"

@class TBIconFontButton, UILabel;

@interface TBTakeoutOrderViewController : TBWebViewController
{
    UILabel *_navTitleLabel;	// 8 = 0x8
    TBIconFontButton *_refreshButton;	// 16 = 0x10
}

@property(retain, nonatomic) TBIconFontButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UILabel *navTitleLabel; // @synthesize navTitleLabel=_navTitleLabel;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setNavBar;
- (void)buttonClick:(id)arg1;
- (void)backItemClicked:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

