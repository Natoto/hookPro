//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "WVJSBridgeInterfaceProtocol-Protocol.h"

@class NSString;
@protocol WVJSBridgeContextProtocol;

@interface WVDynamicHandler (WVJSBridgeInterface) <WVJSBridgeInterfaceProtocol>
+ (void)WVJSBridgeInterface$callback:(CDUnknownBlockType)arg1 withRet:(id)arg2 withResult:(id)arg3;
+ (void)WVJSBridgeInterface$forbiddenThisMethodToJSB:(SEL)arg1;
- (void)WVJSBridgeInterface$release;

// Remaining properties
@property(nonatomic) __weak id <WVJSBridgeContextProtocol> context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
