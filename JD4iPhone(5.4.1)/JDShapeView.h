//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer;

@interface JDShapeView : UIView
{
    CAShapeLayer *jShape;
    CAShapeLayer *dShape;
    double _pullRate;
}

@property(nonatomic) double pullRate; // @synthesize pullRate=_pullRate;
- (id)initWithFrame:(struct CGRect)arg1;

@end
