//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseCell.h"

@class TBOFestivalCommunityHeaderView, TBOFestivalCommunityItemView;

@interface TBOFestivalCommunityCell : TBOBaseCell
{
    TBOFestivalCommunityHeaderView *_headerView;	// 8 = 0x8
    TBOFestivalCommunityItemView *_communityItems[8];	// 16 = 0x10
}

+ (double)cellHeightForModel:(id)arg1 owner:(id)arg2;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

