//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface GDMDarenMenuItem : NSObject
{
    _Bool _isJumpItem;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_jumpUrl;	// 24 = 0x18
    NSArray *_subItems;	// 32 = 0x20
}

+ (id)itemFromDict:(id)arg1;
@property(retain) NSArray *subItems; // @synthesize subItems=_subItems;
@property(retain) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property _Bool isJumpItem; // @synthesize isJumpItem=_isJumpItem;
@property(retain) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

