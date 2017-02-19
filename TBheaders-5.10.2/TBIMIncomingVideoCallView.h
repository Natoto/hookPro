//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol TBIMIncomingVideoCallViewDelegate;

@interface TBIMIncomingVideoCallView : UIView
{
    id <TBIMIncomingVideoCallViewDelegate> _delegate;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    UILabel *_nickLabel;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_introductionLabel;	// 40 = 0x28
    UIImageView *_avatarImageView;	// 48 = 0x30
    UIButton *_cancelButton;	// 56 = 0x38
    UIButton *_acceptButton;	// 64 = 0x40
    UILabel *_tipLabel;	// 72 = 0x48
    UIView *_buttonContainerView;	// 80 = 0x50
}

@property(nonatomic) __weak UIView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak UILabel *introductionLabel; // @synthesize introductionLabel=_introductionLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <TBIMIncomingVideoCallViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureWithVideoCall:(id)arg1;
- (void)configureWithNick:(id)arg1 avatarURLString:(id)arg2 title:(id)arg3 introduction:(id)arg4;
- (void)acceptButtonClicked:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (id)init;

@end
