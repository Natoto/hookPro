//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSString;

@interface JDQuickerListData : NSObject
{
    NSDateFormatter *_dataFormatter;
    _Bool _showCartOnly;
    float _pNameHeight;
    float _showTimeHeight;
    float _nikNameHeight;
    float _cellHeight;
    int _code;
    float _price;
    NSString *_brandName;
    NSString *_sid;
    NSString *_pimg;
    NSString *_pname;
    NSString *_cartOnly;
    NSString *_desc;
    NSString *_num;
    NSString *_sn;
    NSString *_id;
    NSString *_time;
    NSString *_showTime;
    NSString *_orderCode;
}

@property(nonatomic) float price; // @synthesize price=_price;
@property(nonatomic) int code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *orderCode; // @synthesize orderCode=_orderCode;
@property(copy, nonatomic) NSString *showTime; // @synthesize showTime=_showTime;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *sn; // @synthesize sn=_sn;
@property(copy, nonatomic) NSString *num; // @synthesize num=_num;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic, getter=isShowCartOnly) _Bool showCartOnly; // @synthesize showCartOnly=_showCartOnly;
@property(copy, nonatomic) NSString *cartOnly; // @synthesize cartOnly=_cartOnly;
@property(copy, nonatomic) NSString *pname; // @synthesize pname=_pname;
@property(copy, nonatomic) NSString *pimg; // @synthesize pimg=_pimg;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(nonatomic) float cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) float nikNameHeight; // @synthesize nikNameHeight=_nikNameHeight;
@property(nonatomic) float showTimeHeight; // @synthesize showTimeHeight=_showTimeHeight;
@property(nonatomic) float pNameHeight; // @synthesize pNameHeight=_pNameHeight;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end
