//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluH5WebViewController.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class NSDictionary, NSString;
@protocol IUATraceComponent, aluRpcInvoker;

@interface aluH5WebViewController_RDS : aluH5WebViewController <MFMessageComposeViewControllerDelegate>
{
    _Bool _shouldTriggerCallback;	// 8 = 0x8
    _Bool _isSuc;	// 9 = 0x9
    id <IUATraceComponent> _uaTrace;	// 16 = 0x10
    id <aluRpcInvoker> _retrieveH5Invoker;	// 24 = 0x18
    NSDictionary *_extraInfo;	// 32 = 0x20
}

@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) _Bool isSuc; // @synthesize isSuc=_isSuc;
@property(nonatomic) _Bool shouldTriggerCallback; // @synthesize shouldTriggerCallback=_shouldTriggerCallback;
@property(retain, nonatomic) id <aluRpcInvoker> retrieveH5Invoker; // @synthesize retrieveH5Invoker=_retrieveH5Invoker;
@property(retain, nonatomic) id <IUATraceComponent> uaTrace; // @synthesize uaTrace=_uaTrace;
- (void).cxx_destruct;
- (void)doCallback:(_Bool)arg1 extraInfo:(id)arg2;
- (void)scheduleCallback:(_Bool)arg1 extraInfo:(id)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (id)getUaTracePageName;
- (id)alu_p_getRecipients:(id)arg1;
- (_Bool)handleSmsUrlIfSmsUrlPresent:(id)arg1;
- (void)doGetH5UrlWith:(id)arg1 ext:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)onBack;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

