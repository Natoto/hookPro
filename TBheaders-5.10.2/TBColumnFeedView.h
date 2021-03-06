//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class TBHLColumnFeedCell, TBHLFeedCellModel, TBHLReaderCountView, UIImageView, UILabel;

@interface TBColumnFeedView : UIControl
{
    _Bool _showTagView;	// 8 = 0x8
    _Bool _read;	// 9 = 0x9
    UIImageView *_iconImage;	// 16 = 0x10
    UILabel *_titilelabel;	// 24 = 0x18
    UILabel *_bizSourceLabel;	// 32 = 0x20
    TBHLReaderCountView *_readersNumLabel;	// 40 = 0x28
    UIImageView *_tagImageView;	// 48 = 0x30
    TBHLColumnFeedCell *_superCell;	// 56 = 0x38
    long long _row;	// 64 = 0x40
    TBHLFeedCellModel *_model;	// 72 = 0x48
}

@property(nonatomic) _Bool read; // @synthesize read=_read;
@property(retain, nonatomic) TBHLFeedCellModel *model; // @synthesize model=_model;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(nonatomic) __weak TBHLColumnFeedCell *superCell; // @synthesize superCell=_superCell;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) TBHLReaderCountView *readersNumLabel; // @synthesize readersNumLabel=_readersNumLabel;
@property(retain, nonatomic) UILabel *bizSourceLabel; // @synthesize bizSourceLabel=_bizSourceLabel;
@property(retain, nonatomic) UILabel *titilelabel; // @synthesize titilelabel=_titilelabel;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;
- (void)clicked;
- (void)loadTagImageUrl:(id)arg1;
- (void)configHLCell:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

