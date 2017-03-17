//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTableViewInfoDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MMTableViewInfo, MMUILabel, NSString, UITextField;
@protocol ContactTagNameEditViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ContactTagNameEditViewController : MMUIViewController <MMTableViewInfoDelegate, UITextFieldDelegate, UIAlertViewDelegate>
{
    _Bool _bIsTagNameOverLimit;
    _Bool _bIsShowWarningText;
    id <ContactTagNameEditViewControllerDelegate> _delegate;
    NSString *_existTagName;
    NSString *_tagSvrName;
    MMTableViewInfo *_tableViewInfo;
    UITextField *_tagNameEditTextField;
    MMUILabel *_warningTextLabel;
}

@property(retain, nonatomic) MMUILabel *warningTextLabel; // @synthesize warningTextLabel=_warningTextLabel;
@property(nonatomic) _Bool bIsShowWarningText; // @synthesize bIsShowWarningText=_bIsShowWarningText;
@property(nonatomic) _Bool bIsTagNameOverLimit; // @synthesize bIsTagNameOverLimit=_bIsTagNameOverLimit;
@property(retain, nonatomic) UITextField *tagNameEditTextField; // @synthesize tagNameEditTextField=_tagNameEditTextField;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) NSString *tagSvrName; // @synthesize tagSvrName=_tagSvrName;
@property(retain, nonatomic) NSString *existTagName; // @synthesize existTagName=_existTagName;
@property(nonatomic) __weak id <ContactTagNameEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onTagNameChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setSaveButtonEnable:(_Bool)arg1;
- (_Bool)isChangeTagName;
- (void)makeWarningTextCell:(id)arg1 CellInfo:(id)arg2;
- (void)hideWarningText;
- (void)showWarningText:(id)arg1;
- (void)makeEditCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeTopicEditView;
- (void)initTableViewInfoData;
- (void)onDone;
- (void)onReturn;
- (void)dismissViewController;
- (void)viewDidLoad;
- (id)initViewControllerWithCurrentTagName:(id)arg1 withTagSvrName:(id)arg2 withDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
