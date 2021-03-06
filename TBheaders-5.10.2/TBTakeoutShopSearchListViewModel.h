//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTakeoutViewModel.h"

@class NSString, TBTakeoutQueryShopListModel, TBTakeoutShopSearchListAPI;

@interface TBTakeoutShopSearchListViewModel : TBTakeoutViewModel
{
    NSString *_lon;	// 8 = 0x8
    NSString *_lat;	// 16 = 0x10
    NSString *_serviceIds;	// 24 = 0x18
    NSString *_keyword;	// 32 = 0x20
    NSString *_pageNo;	// 40 = 0x28
    NSString *_pageSize;	// 48 = 0x30
    NSString *_orderType;	// 56 = 0x38
    NSString *_range;	// 64 = 0x40
    NSString *_cityCode;	// 72 = 0x48
    TBTakeoutQueryShopListModel *_listModel;	// 80 = 0x50
    TBTakeoutShopSearchListAPI *_shopSearchApi;	// 88 = 0x58
}

@property(retain, nonatomic) TBTakeoutShopSearchListAPI *shopSearchApi; // @synthesize shopSearchApi=_shopSearchApi;
@property(retain, nonatomic) TBTakeoutQueryShopListModel *listModel; // @synthesize listModel=_listModel;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *orderType; // @synthesize orderType=_orderType;
@property(copy, nonatomic) NSString *pageSize; // @synthesize pageSize=_pageSize;
@property(copy, nonatomic) NSString *pageNo; // @synthesize pageNo=_pageNo;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *serviceIds; // @synthesize serviceIds=_serviceIds;
@property(copy, nonatomic) NSString *lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSString *lon; // @synthesize lon=_lon;
- (void).cxx_destruct;
- (void)onError:(id)arg1;
- (void)onSuccess;
- (void)parseResult:(id)arg1;
- (id)serviceApi;
- (id)init;

@end

