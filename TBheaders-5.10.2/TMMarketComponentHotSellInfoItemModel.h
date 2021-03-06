//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMMarketComponentBaseModel.h"

@class NSString;

@interface TMMarketComponentHotSellInfoItemModel : TMMarketComponentBaseModel
{
    _Bool _hot;	// 11 = 0xb
    _Bool _import;	// 12 = 0xc
    _Bool _bought;	// 13 = 0xd
    NSString *_img;	// 16 = 0x10
    NSString *_id;	// 24 = 0x18
    NSString *_sales;	// 32 = 0x20
    NSString *_promPrice;	// 40 = 0x28
    NSString *_nodeType;	// 48 = 0x30
    NSString *_cateId;	// 56 = 0x38
    NSString *_selling;	// 64 = 0x40
}

@property(copy, nonatomic) NSString *selling; // @synthesize selling=_selling;
@property(copy, nonatomic) NSString *cateId; // @synthesize cateId=_cateId;
@property(nonatomic) _Bool bought; // @synthesize bought=_bought;
@property(copy, nonatomic) NSString *nodeType; // @synthesize nodeType=_nodeType;
@property(copy, nonatomic) NSString *promPrice; // @synthesize promPrice=_promPrice;
@property(nonatomic) _Bool import; // @synthesize import=_import;
@property(nonatomic) _Bool hot; // @synthesize hot=_hot;
@property(copy, nonatomic) NSString *sales; // @synthesize sales=_sales;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
- (void).cxx_destruct;
- (void)setItemFrame:(struct CGRect)arg1;
- (id)reuseIdentifier;
- (id)initWithDictionary:(id)arg1;

@end

