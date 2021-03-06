//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBPaymentPayBaseViewController.h"

#import "UIWebViewDelegate.h"

@class CBPaymentPayWebViewParamModel, NSString, UIWebView;

@interface CBPaymentPayWebViewController : CBPaymentPayBaseViewController <UIWebViewDelegate>
{
    CBPaymentPayWebViewParamModel *_paramModel;
    UIWebView *_webView;
}

@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) CBPaymentPayWebViewParamModel *paramModel; // @synthesize paramModel=_paramModel;
- (void).cxx_destruct;
- (void)callJSFunction:(id)arg1 param:(id)arg2;
- (void)closeWebViewWithType:(long long)arg1 callBackName:(id)arg2;
- (void)changeTitleFromWebView;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)didReceiveMemoryWarning;
- (void)cb_createWebView;
- (void)cb_setupSelf;
- (void)viewDidLoad;
- (id)initWithParamModel:(id)arg1;
- (void)navBarLeftButtonAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

