//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBFavUniqueListTitleQueryContext : NSObject
{
    NSString *_title;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSString *_appName;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;

@end
