//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface AliHotSpotAnswerViewItem : UIView
{
    UILabel *_textLabel;	// 8 = 0x8
    CDUnknownBlockType _answerItemView;	// 16 = 0x10
    unsigned long long _status;	// 24 = 0x18
    NSString *_answerText;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *answerText; // @synthesize answerText=_answerText;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchAnswerItemView:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3;

@end
