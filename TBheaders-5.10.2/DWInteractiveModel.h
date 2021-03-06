//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface DWInteractiveModel : NSObject
{
    NSString *_type;	// 8 = 0x8
    NSString *_jsTemplate;	// 16 = 0x10
    NSDictionary *_jsData;	// 24 = 0x18
    NSString *_layout;	// 32 = 0x20
    NSString *_align;	// 40 = 0x28
    NSDictionary *_margin;	// 48 = 0x30
    NSArray *_startAnimations;	// 56 = 0x38
    NSArray *_endAnimations;	// 64 = 0x40
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSArray *endAnimations; // @synthesize endAnimations=_endAnimations;
@property(retain, nonatomic) NSArray *startAnimations; // @synthesize startAnimations=_startAnimations;
@property(retain, nonatomic) NSDictionary *margin; // @synthesize margin=_margin;
@property(retain, nonatomic) NSString *align; // @synthesize align=_align;
@property(retain, nonatomic) NSString *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSDictionary *jsData; // @synthesize jsData=_jsData;
@property(retain, nonatomic) NSString *jsTemplate; // @synthesize jsTemplate=_jsTemplate;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

