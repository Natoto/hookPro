//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBNewMemberBottomBarItem : TBJSONModel
{
    NSString *_img;	// 8 = 0x8
    NSString *_text1;	// 16 = 0x10
    NSString *_text2;	// 24 = 0x18
    NSString *_targetUrl;	// 32 = 0x20
    NSString *_view;	// 40 = 0x28
    NSString *_flag;	// 48 = 0x30
    NSString *_cache;	// 56 = 0x38
}

+ (id)modelKeyMapper;
@property(retain, nonatomic) NSString *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSString *flag; // @synthesize flag=_flag;
@property(nonatomic) NSString *view; // @synthesize view=_view;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) NSString *text2; // @synthesize text2=_text2;
@property(retain, nonatomic) NSString *text1; // @synthesize text1=_text1;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
- (void).cxx_destruct;

@end

