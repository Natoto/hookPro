//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailSkuDestinationModel, NSString;

@interface AliDetailSkuItemModel : TBJSONModel
{
    _Bool _showAddress;	// 8 = 0x8
    _Bool _showAddressTaobao;	// 9 = 0x9
    _Bool _hideQuantity;	// 10 = 0xa
    _Bool _elecVoucher;	// 11 = 0xb
    long long _unitBuy;	// 16 = 0x10
    NSString *_skuH5Url;	// 24 = 0x18
    NSString *_location;	// 32 = 0x20
    AliDetailSkuDestinationModel *_destination;	// 40 = 0x28
    NSString *_recommendSize;	// 48 = 0x30
    NSString *_recommendTip;	// 56 = 0x38
    NSString *_buttonText;	// 64 = 0x40
}

@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) NSString *recommendTip; // @synthesize recommendTip=_recommendTip;
@property(retain, nonatomic) NSString *recommendSize; // @synthesize recommendSize=_recommendSize;
@property(retain, nonatomic) AliDetailSkuDestinationModel *destination; // @synthesize destination=_destination;
@property(nonatomic) _Bool elecVoucher; // @synthesize elecVoucher=_elecVoucher;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *skuH5Url; // @synthesize skuH5Url=_skuH5Url;
@property(nonatomic) long long unitBuy; // @synthesize unitBuy=_unitBuy;
@property(nonatomic) _Bool hideQuantity; // @synthesize hideQuantity=_hideQuantity;
@property(nonatomic) _Bool showAddressTaobao; // @synthesize showAddressTaobao=_showAddressTaobao;
@property(nonatomic) _Bool showAddress; // @synthesize showAddress=_showAddress;
- (void).cxx_destruct;

@end

