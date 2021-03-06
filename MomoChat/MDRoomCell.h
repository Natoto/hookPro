//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MDSwitch, UILabel, UIView;

@interface MDRoomCell : UITableViewCell
{
    UILabel *_leftTitleLabel;
    MDSwitch *_rightSwitch;
    UIView *_topLine;
    UIView *_bottomLine;
    id <MDRoomCellDelegate> _delegate;
}

@property(nonatomic) __weak id <MDRoomCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) MDSwitch *rightSwitch; // @synthesize rightSwitch=_rightSwitch;
@property(retain, nonatomic) UILabel *leftTitleLabel; // @synthesize leftTitleLabel=_leftTitleLabel;
- (void).cxx_destruct;
- (void)valueChanged:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

