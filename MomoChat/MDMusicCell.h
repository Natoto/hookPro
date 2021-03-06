//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDFavoriteCell.h"

#import "GMGridViewActionDelegate.h"
#import "GMGridViewDataSource.h"
#import "UIActionSheetDelegate.h"

@class GMGridView, NSMutableArray, NSString, UITableViewCell;

@interface MDMusicCell : MDFavoriteCell <GMGridViewDataSource, GMGridViewActionDelegate, UIActionSheetDelegate>
{
    id <MDMusicCellDelegate> _delegate;
    GMGridView *_grid;
    NSMutableArray *_musicItemList;
    UITableViewCell *_arrowCell;
}

@property(retain, nonatomic) UITableViewCell *arrowCell; // @synthesize arrowCell=_arrowCell;
@property(retain, nonatomic) NSMutableArray *musicItemList; // @synthesize musicItemList=_musicItemList;
@property(retain, nonatomic) GMGridView *grid; // @synthesize grid=_grid;
@property(nonatomic) id <MDMusicCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)GMGridView:(id)arg1 didTapOnItemAtIndex:(long long)arg2;
- (id)GMGridView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (struct CGSize)GMGridView:(id)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (long long)numberOfItemsInGMGridView:(id)arg1;
- (void)refreshCellWithModel:(id)arg1;
- (void)dealloc;
- (void)setupGridView;
- (id)initWithreuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

