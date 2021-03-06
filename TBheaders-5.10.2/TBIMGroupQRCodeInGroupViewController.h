//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBIMGroupServiceDelegate-Protocol.h"
#import "UIViewControllerTBNavigator-Protocol.h"

@class NSString, TBModelStatusHandler, UIButton, UIImageView, UILabel, UIView;
@protocol TBIMGroupAdapter, TBIMGroupServiceAdapter;

@interface TBIMGroupQRCodeInGroupViewController : TBViewController <TBIMGroupServiceDelegate, UIViewControllerTBNavigator>
{
    NSString *_code;	// 16 = 0x10
    NSString *_codeKey;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    NSString *_expiredTime;	// 40 = 0x28
    NSString *_ccode;	// 48 = 0x30
    NSString *_creatorUserID;	// 56 = 0x38
    id <TBIMGroupServiceAdapter> _groupService;	// 64 = 0x40
    id <TBIMGroupAdapter> _groupAdapter;	// 72 = 0x48
    TBModelStatusHandler *_handler;	// 80 = 0x50
    UIView *_containerView;	// 88 = 0x58
    UIImageView *_groupHeadImageView;	// 96 = 0x60
    UILabel *_groupNameLabel;	// 104 = 0x68
    UILabel *_groupNumberLabel;	// 112 = 0x70
    UIButton *_inGroupButton;	// 120 = 0x78
}

@property(retain, nonatomic) UIButton *inGroupButton; // @synthesize inGroupButton=_inGroupButton;
@property(retain, nonatomic) UILabel *groupNumberLabel; // @synthesize groupNumberLabel=_groupNumberLabel;
@property(retain, nonatomic) UILabel *groupNameLabel; // @synthesize groupNameLabel=_groupNameLabel;
@property(retain, nonatomic) UIImageView *groupHeadImageView; // @synthesize groupHeadImageView=_groupHeadImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TBModelStatusHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) id <TBIMGroupAdapter> groupAdapter; // @synthesize groupAdapter=_groupAdapter;
@property(retain, nonatomic) id <TBIMGroupServiceAdapter> groupService; // @synthesize groupService=_groupService;
@property(retain, nonatomic) NSString *creatorUserID; // @synthesize creatorUserID=_creatorUserID;
@property(retain, nonatomic) NSString *ccode; // @synthesize ccode=_ccode;
@property(retain, nonatomic) NSString *expiredTime; // @synthesize expiredTime=_expiredTime;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *codeKey; // @synthesize codeKey=_codeKey;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)groupQRCodeInGroupQRCodeKey:(id)arg1 error:(id)arg2;
- (void)groupQRCodeInGroupQRCodeKey:(id)arg1;
- (void)groupInfoChange:(id)arg1 fail:(unsigned long long)arg2 error:(id)arg3;
- (void)groupInfoChange:(id)arg1 success:(unsigned long long)arg2;
- (void)inGroupFail:(id)arg1;
- (void)inGroupSuccess;
- (void)tapToInGroup:(id)arg1;
- (void)setUpForExpiredTimeOrDissolvedViewWithText:(id)arg1;
- (void)setUpForNormalView;
- (void)setUpNavigationBar;
- (void)updateGroupAdapter:(id)arg1;
- (void)displayLogic;
- (id)configHandlerWithExpiredTimeOrDissolvedText:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

