//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTakeoutNewViewModel.h"

@class NSArray, NSString;

@interface TBTakeoutOrderDetailFooterViewModel : TBTakeoutNewViewModel
{
    NSArray *_buttonList;	// 8 = 0x8
    NSString *_chargeBackId;	// 16 = 0x10
    NSString *_chargeBackText;	// 24 = 0x18
    NSString *_chargeBackUrl;	// 32 = 0x20
    NSString *_complaintPhone;	// 40 = 0x28
}

@property(copy, nonatomic) NSString *complaintPhone; // @synthesize complaintPhone=_complaintPhone;
@property(copy, nonatomic) NSString *chargeBackUrl; // @synthesize chargeBackUrl=_chargeBackUrl;
@property(copy, nonatomic) NSString *chargeBackText; // @synthesize chargeBackText=_chargeBackText;
@property(copy, nonatomic) NSString *chargeBackId; // @synthesize chargeBackId=_chargeBackId;
@property(copy, nonatomic) NSArray *buttonList; // @synthesize buttonList=_buttonList;
- (void).cxx_destruct;
- (void)parseResult:(id)arg1;

@end

