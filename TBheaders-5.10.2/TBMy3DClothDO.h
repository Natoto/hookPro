//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMy3DBaseBinDO.h"

@class NSString;

@interface TBMy3DClothDO : TBMy3DBaseBinDO
{
    int _modelType;	// 8 = 0x8
    int _sex;	// 12 = 0xc
    int _part;	// 16 = 0x10
    int _seq;	// 20 = 0x14
    NSString *_title;	// 24 = 0x18
    NSString *_itemId;	// 32 = 0x20
    NSString *_picUrl;	// 40 = 0x28
    NSString *_price;	// 48 = 0x30
    NSString *_style;	// 56 = 0x38
    NSString *_ids;	// 64 = 0x40
    NSString *_collocationKey;	// 72 = 0x48
    NSString *_tryPic;	// 80 = 0x50
    NSString *_meshPicPath;	// 88 = 0x58
}

+ (id)ignoredPropertyNames;
@property(copy, nonatomic) NSString *meshPicPath; // @synthesize meshPicPath=_meshPicPath;
@property(copy, nonatomic) NSString *tryPic; // @synthesize tryPic=_tryPic;
@property(copy, nonatomic) NSString *collocationKey; // @synthesize collocationKey=_collocationKey;
@property(copy, nonatomic) NSString *ids; // @synthesize ids=_ids;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic) int part; // @synthesize part=_part;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) int sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int modelType; // @synthesize modelType=_modelType;
- (void).cxx_destruct;

@end

