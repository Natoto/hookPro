//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLBaseViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSMutableArray, NSString, UICollectionView;

@interface MLSearchTagListViewController : MLBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *_colView;
    NSMutableArray *_tagArray;
}

@property(retain, nonatomic) NSMutableArray *tagArray; // @synthesize tagArray=_tagArray;
@property(retain, nonatomic) UICollectionView *colView; // @synthesize colView=_colView;
- (void).cxx_destruct;
- (void)initCollectionView:(struct CGRect)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)getTagsFail:(id)arg1;
- (void)getTagsSuccess:(id)arg1;
- (void)getTagArray;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
