//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JDBaseToastViewDelegate.h"
#import "UPAPayPluginDelegate.h"

@class JDStoreNetwork, NSData, NSDictionary, NSString;

@interface AppDelegateCommonManager : NSObject <JDBaseToastViewDelegate, UPAPayPluginDelegate>
{
    NSDictionary *paymentDic_;
    NSData *cpXmlData_;
    JDStoreNetwork *_network;
    _Bool _isFromCart;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedAppDelegateCommonManager;
@property(nonatomic) _Bool isFromCart; // @synthesize isFromCart=_isFromCart;
- (void)didFinishInToastView:(id)arg1;
- (void)didPayonlineSuccess:(id)arg1;
- (void)UPAPayPluginResult:(id)arg1;
- (void)statusUPPayPluginResult:(id)arg1;
- (void)openApplePayWithTn:(id)arg1 isGoods:(_Bool)arg2;
- (void)openUPPayPluginWithTn:(id)arg1;
- (void)openUPOMPViewWithXmlData:(id)arg1;
- (void)qqWalletPayWithDicInfo:(id)arg1;
- (void)JDPayWithDicInfo:(id)arg1;
- (void)applePayWithDicInfo:(id)arg1;
- (void)weixinPayWithDicInfo:(id)arg1;
- (void)upompPayWithDicInfo:(id)arg1;
- (void)showPayWebViewWithDic:(id)arg1;
- (void)showPayViewWithDicInfo:(id)arg1;
- (void)showPayViewWithJDJPDicInfo:(id)arg1;
- (void)getJDPayInfoWithPayId:(id)arg1;
- (void)getApplePayInfoWithPayId:(id)arg1;
- (void)getQQWalletPayInfoWithPayId:(id)arg1;
- (void)getWeixinPayInfoWithPayId:(id)arg1;
- (void)getUPPayInfoWithPayId:(id)arg1;
- (void)getUPOMPInfoWithPayId:(id)arg1;
- (id)payInfoWitOrderID:(id)arg1;
- (void)getWeixinPayInfoWithOrderId:(id)arg1;
- (void)getUPOMPInfoWithOrderId:(id)arg1;
- (id)currentNavigationController;
- (void)pushOrderListViewController;
- (void)showOrderList;
- (void)didCashiersCancel:(id)arg1;
- (void)didCashiersPaySuccess:(id)arg1;
- (void)stopHandle;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

