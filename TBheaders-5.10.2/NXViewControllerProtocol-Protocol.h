//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSExport-Protocol.h"

@class JSValue, NSDictionary, NSString, NXJSCallBack;

@protocol NXViewControllerProtocol <JSExport>
- (void)setRightNaviBarItem:(NSString *)arg1 callback:(NXJSCallBack *)arg2;
- (void)setUserTrackProperty:(NSDictionary *)arg1;
- (void)openURL:(NSString *)arg1;
- (void)didLoadError:(NSString *)arg1;
- (void)didLoadFinished;
- (void)setTitle:(NSString *)arg1;
- (void)removeSubView:(JSValue *)arg1;
- (void)addSubView:(JSValue *)arg1;

@optional
- (void)setRightNaviBarItem:(NSString *)arg1 callback:(NXJSCallBack *)arg2 __JS_EXPORT_AS__setRightNaviBarItem:(id)arg3;
@end
