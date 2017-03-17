//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMMAssetICloudExt-Protocol.h"
#import "SightAssetPreviewViewDelegate-Protocol.h"
#import "SightLocalVideoProcessingViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class AVAsset, MMAssetInfo, MMScrollView, NSString, NSURL, SightAssetPreviewView, SightDraft, UIButton, UIImageView, UILabel, UIView;
@protocol MMImagePickerControlCenter, MMVideoPreviewBrowserControllerDelegate;

__attribute__((visibility("hidden")))
@interface MMVideoPreviewBrowserController : MMUIViewController <IMMAssetICloudExt, SightLocalVideoProcessingViewControllerDelegate, SightAssetPreviewViewDelegate, scrollViewDelegate, UIAlertViewDelegate>
{
    MMScrollView *_panelView;
    UIView *_maskView;
    _Bool _isPlaying;
    _Bool _isSending;
    NSURL *_videoOutputURL;
    SightDraft *_sightDraft;
    int _scene;
    float _playRate;
    id <MMVideoPreviewBrowserControllerDelegate> m_delegate;
    id <MMImagePickerControlCenter> _controlCenter;
    MMAssetInfo *_assetInfo;
    UIImageView *m_icloudImageIcon;
    UILabel *m_icloudLabel;
    NSURL *m_originUrl;
    UIView *_bottomBar;
    UIButton *_sendButton;
    UIButton *_cropButton;
    UILabel *_tipLabel;
    UILabel *_tipTitleLabel;
    UIButton *_playBigButton;
    AVAsset *_asset;
    SightAssetPreviewView *_playerView;
}

@property(retain, nonatomic) SightAssetPreviewView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) float playRate; // @synthesize playRate=_playRate;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UIButton *playBigButton; // @synthesize playBigButton=_playBigButton;
@property(retain, nonatomic) UILabel *tipTitleLabel; // @synthesize tipTitleLabel=_tipTitleLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *cropButton; // @synthesize cropButton=_cropButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) NSURL *m_originUrl; // @synthesize m_originUrl;
@property(retain, nonatomic) UILabel *m_icloudLabel; // @synthesize m_icloudLabel;
@property(retain, nonatomic) UIImageView *m_icloudImageIcon; // @synthesize m_icloudImageIcon;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(nonatomic) __weak id <MMVideoPreviewBrowserControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)sightLocalVideoProcessingViewController:(id)arg1 didFinishEditingWithSightDraft:(id)arg2;
- (void)onAssetVideoDonwloadFailed:(id)arg1;
- (void)onAssetVideoDownloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sightAssetPreviewView:(id)arg1 didFailWithError:(id)arg2;
- (void)sightAssetPreviewViewPlaybackDidReachEnd:(id)arg1;
- (void)sightAssetPreviewViewDidFinishPreparing:(id)arg1;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)systemActived:(id)arg1;
- (void)systemResigned:(id)arg1;
- (void)OnPlay:(id)arg1;
- (void)changePlayStatus:(_Bool)arg1;
- (void)hideToolBar:(_Bool)arg1;
- (void)OnCrop:(id)arg1;
- (void)compressOrExportVideo:(id)arg1;
- (CDUnknownBlockType)getVideoExportCallbackBlockWithAsset:(id)arg1 URL:(id)arg2 noCompress:(_Bool)arg3;
- (void)OnSend:(id)arg1;
- (long long)iCloudAlertViewTag;
- (unsigned long long)getPickerSceneFromOptionObj;
- (void)compressVideo:(id)arg1;
- (void)OnCompressedSuccess:(id)arg1;
- (void)OnCompressEnd;
- (void)OnCompressBegin;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initUrl;
- (void)initMaskView;
- (void)initPlayerView;
- (void)checkVideoAndUpdateBottomBar;
- (void)initBottomBar;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
