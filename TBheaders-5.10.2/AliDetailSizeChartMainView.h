//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailBaseContainerView.h"

#import "AliDetailSizeChartDelegate-Protocol.h"

@class AliDetailDataEngine, AliDetailSizeChartNavigationBar, AliDetailSizeChartPickChooserView, AliDetailSizeChartScrollView, AliDetailSizeChartViewModel, NSString, TBDetailErrorView, TBSDKMTOPServer, UIActivityIndicatorView;

@interface AliDetailSizeChartMainView : AliDetailBaseContainerView <AliDetailSizeChartDelegate>
{
    _Bool _editing;	// 8 = 0x8
    _Bool _loadingSuccess;	// 9 = 0x9
    _Bool _saveSuccess;	// 10 = 0xa
    AliDetailDataEngine *_dataEngine;	// 16 = 0x10
    AliDetailSizeChartPickChooserView *_pickerView;	// 24 = 0x18
    AliDetailSizeChartViewModel *_sizeChartModel;	// 32 = 0x20
    TBSDKMTOPServer *_getSizeChartServer;	// 40 = 0x28
    TBSDKMTOPServer *_saveMySizeServer;	// 48 = 0x30
    TBDetailErrorView *_errorView;	// 56 = 0x38
    AliDetailSizeChartNavigationBar *_navigationBar;	// 64 = 0x40
    AliDetailSizeChartScrollView *_scrollView;	// 72 = 0x48
    UIActivityIndicatorView *_loadingIndicator;	// 80 = 0x50
    unsigned long long _flag;	// 88 = 0x58
    CDUnknownBlockType _sizeChartGoBackBlock;	// 96 = 0x60
}

@property(copy, nonatomic) CDUnknownBlockType sizeChartGoBackBlock; // @synthesize sizeChartGoBackBlock=_sizeChartGoBackBlock;
@property(nonatomic) unsigned long long flag; // @synthesize flag=_flag;
@property(nonatomic) _Bool saveSuccess; // @synthesize saveSuccess=_saveSuccess;
@property(nonatomic) _Bool loadingSuccess; // @synthesize loadingSuccess=_loadingSuccess;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) AliDetailSizeChartScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) AliDetailSizeChartNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) TBDetailErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) TBSDKMTOPServer *saveMySizeServer; // @synthesize saveMySizeServer=_saveMySizeServer;
@property(retain, nonatomic) TBSDKMTOPServer *getSizeChartServer; // @synthesize getSizeChartServer=_getSizeChartServer;
@property(retain, nonatomic) AliDetailSizeChartViewModel *sizeChartModel; // @synthesize sizeChartModel=_sizeChartModel;
@property(retain, nonatomic) AliDetailSizeChartPickChooserView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) AliDetailDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
- (void).cxx_destruct;
- (id)detailModel;
- (void)executeSaveSizeChartFailed:(id)arg1;
- (void)executeSaveSizeChartSuccess:(id)arg1;
- (void)sendSaveSizeChartRequest;
- (void)executeGetSizeChartFailed:(id)arg1;
- (void)executeGetSizeChartSuccess:(id)arg1;
- (void)sendGetSizeChartRequest:(_Bool)arg1;
- (id)parseDataFromMtop:(id)arg1;
- (id)getSuccessMsg:(id)arg1 defaultMsg:(id)arg2;
- (id)getErrorHintMsg:(id)arg1 defaultMsg:(id)arg2;
- (void)saveSizeChartFinished;
- (void)saveSizeChartLoading;
- (void)getSizeChartSuccess;
- (void)getSizeChartFailed:(id)arg1;
- (void)getSizeChartLoading;
- (void)saveMySizeEvent;
- (void)startEditingEvent;
- (void)endEditingEvent;
- (void)setStartEditingState;
- (void)setEndEditingState;
- (CDUnknownBlockType)viewDidDisappearBlock;
- (void)setGoBackBlock:(CDUnknownBlockType)arg1;
- (void)contentChangedAtPos:(unsigned long long)arg1 flag:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)hide:(_Bool)arg1;
- (void)setNavigationBarLeftCloseButtonIconFont:(id)arg1;
- (void)getContentByData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

