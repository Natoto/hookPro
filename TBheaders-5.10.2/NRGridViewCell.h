//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface NRGridViewCell : UIView
{
    _Bool _selected;	// 8 = 0x8
    _Bool _highlighted;	// 9 = 0x9
    NSString *_reuseIdentifier;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    UILabel *_textLabel;	// 40 = 0x28
    UILabel *_detailedTextLabel;	// 48 = 0x30
    UIView *_selectionBackgroundView;	// 56 = 0x38
    UIView *_backgroundView;	// 64 = 0x40
}

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *selectionBackgroundView; // @synthesize selectionBackgroundView=_selectionBackgroundView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UILabel *detailedTextLabel; // @synthesize detailedTextLabel=_detailedTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) _Bool needsRelayout; // @dynamic needsRelayout;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)__commonInit;

@end
