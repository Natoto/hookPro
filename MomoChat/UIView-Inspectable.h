//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor;

@interface UIView (Inspectable)
@property(nonatomic) _Bool onePxForWidth;
- (_Bool)onePxForHight;
- (void)setOnePxForHight:(_Bool)arg1;
@property(nonatomic) _Bool onePx;
@property(nonatomic) NSString *hexRgbColor;
- (id)colorWithRGBHex:(unsigned int)arg1;
@property(nonatomic) _Bool masksToBounds;
@property(retain, nonatomic) NSString *borderHexRgb;
@property(retain, nonatomic) UIColor *borderColor;
@property(nonatomic) double borderWidth;
@property(nonatomic) long long cornerRadius;
@property(copy, nonatomic) NSString *hexColorStringForBackground; // @dynamic hexColorStringForBackground;
@property(retain, nonatomic) UIColor *backgroundColorAtRuntime; // @dynamic backgroundColorAtRuntime;
@end
