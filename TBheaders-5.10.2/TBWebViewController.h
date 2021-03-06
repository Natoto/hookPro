//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBWVBaseController.h"

@class NSMutableArray, NSMutableDictionary, NSString, TBOpenJSApiGateway;
@protocol TBWopcPublicServiceProtocol;

@interface TBWebViewController : TBWVBaseController
{
    CDUnknownBlockType _interruptJumpToLocalPageBlock;	// 8 = 0x8
    CDUnknownBlockType _backItemClickedBlock;	// 16 = 0x10
    TBOpenJSApiGateway *_openJSApiGateway;	// 24 = 0x18
    NSMutableArray *_serviceArray;	// 32 = 0x20
    NSMutableArray *_photoUploadResultArray;	// 40 = 0x28
    NSMutableDictionary *_photoPool;	// 48 = 0x30
    NSMutableDictionary *_uploadingPool;	// 56 = 0x38
    id <TBWopcPublicServiceProtocol> _wopcService;	// 64 = 0x40
}

@property(retain, nonatomic) id <TBWopcPublicServiceProtocol> wopcService; // @synthesize wopcService=_wopcService;
@property(retain, nonatomic) NSMutableDictionary *uploadingPool; // @synthesize uploadingPool=_uploadingPool;
@property(retain, nonatomic) NSMutableDictionary *photoPool; // @synthesize photoPool=_photoPool;
@property(retain, nonatomic) NSMutableArray *photoUploadResultArray; // @synthesize photoUploadResultArray=_photoUploadResultArray;
@property(retain, nonatomic) NSMutableArray *serviceArray; // @synthesize serviceArray=_serviceArray;
@property(retain, nonatomic) TBOpenJSApiGateway *openJSApiGateway; // @synthesize openJSApiGateway=_openJSApiGateway;
@property(copy, nonatomic) CDUnknownBlockType backItemClickedBlock; // @synthesize backItemClickedBlock=_backItemClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType interruptJumpToLocalPageBlock; // @synthesize interruptJumpToLocalPageBlock=_interruptJumpToLocalPageBlock;
- (void).cxx_destruct;
- (void)setTrackExtraInfoL:(id)arg1;
- (void)setTrackCodeL:(id)arg1;
- (id)getTrackExtraInfoL;
- (id)getTrackCodeL;
- (void)setNavTitleL:(id)arg1;
- (_Bool)getHaveLoadedSuccessL;
- (void)backItemClickedL;
- (void)setForbiddenBroswerViewPullL:(_Bool)arg1;
- (void)setLoadPageByUrlWithTagL:(id)arg1;
- (void)setLoadUrlL:(id)arg1;
- (id)getLoadUrlL;
- (void)setUseToolBarL:(_Bool)arg1;
- (void)setUsePullRefreshL:(_Bool)arg1;
- (id)getCurrentUrl;
- (void)loadMorePage:(id)arg1;
- (void)setRegisteHandler:(id)arg1 withClassName:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)setRegisteHandler:(id)arg1 withClassName:(id)arg2 handler:(CDUnknownBlockType)arg3 withResetHandler:(CDUnknownBlockType)arg4 withDeallocHandler:(CDUnknownBlockType)arg5;
- (id)getTBWebView;
- (void)setBackItemClicked:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType webViewDidFailWithErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType webViewDidFinishLoadBlock;
@property(copy, nonatomic) CDUnknownBlockType webViewDidStartLoadBlock;
@property(copy, nonatomic) CDUnknownBlockType interruptJumpToLocalBlock;
@property(copy, nonatomic) CDUnknownBlockType webViewShouldStartLoadBlock;
@property(copy, nonatomic) CDUnknownBlockType webViewShouldStartLoadWithRequestBlock;
- (void)setInterruptJumpToLocalPage:(CDUnknownBlockType)arg1;
- (void)forceBack;
- (void)backItemClicked:(id)arg1;
- (_Bool)interruptJumpToLocalPage:(long long)arg1 withParam:(id)arg2 withRequest:(id)arg3;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)functionsRegisteHandler;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)firstLoadURL:(id)arg1 query:(id)arg2;
- (void)firstLoadURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

