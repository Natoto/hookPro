//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray;

@interface TBPriceRange : TBJSONModel
{
    NSArray *_range;	// 8 = 0x8
    NSArray *_percent;	// 16 = 0x10
}

+ (_Bool)strictMode;
@property(retain, nonatomic) NSArray *percent; // @synthesize percent=_percent;
@property(retain, nonatomic) NSArray *range; // @synthesize range=_range;
- (void).cxx_destruct;

@end

