//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface MDGroupTypeTableViewCell : UITableViewCell
{
    _Bool _isMarkShowed;
    UILabel *_titleLabel;
    UIImageView *_accessoryImageView;
}

@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isMarkShowed; // @synthesize isMarkShowed=_isMarkShowed;
- (void).cxx_destruct;
- (void)manageCellMark;
- (void)updateCellWithGroupDetaileCategory:(id)arg1;
- (void)configData;
- (void)configView;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
