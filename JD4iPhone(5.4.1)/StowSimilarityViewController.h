//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "StowSimilarityDelegate.h"

@class JDButton, JDStoreNetwork, NSDictionary, NSMutableArray, NSString, UILabel, UITableView, UIView;

@interface StowSimilarityViewController : JDViewController <StowSimilarityDelegate>
{
    NSString *skuString;
    UITableView *similarityTableView;
    NSMutableArray *stowSimilarityArray;
    NSMutableArray *tagsArray;
    UILabel *chooseLabel;
    UIView *chooseView;
    UIView *chooseBGView;
    UILabel *recommendLabel;
    JDButton *activityButton;
    JDStoreNetwork *m_netWork;
    _Bool isChooseViewInTable;
    struct CGPoint movePoint;
    _Bool isFirstRequest;
    int moveY;
    UIView *emptyView;
    UIView *footerView;
    NSDictionary *model;
}

@property(retain, nonatomic) NSDictionary *model; // @synthesize model;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)onClickItemButton:(id)arg1;
- (void)onClickCellButton:(id)arg1;
- (void)tapTowareInfo;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadHeadView;
- (void)didFinishInToastView:(id)arg1;
- (void)requestSimilarProdList:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
