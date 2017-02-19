//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface MLSearchViewController : MLBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hasNextPage;
    _Bool _isRecent;
    UITableView *_tableView;
    long long _currentIndex;
    NSMutableArray *_dataList;
    NSString *_keyword;
}

@property(nonatomic) _Bool isRecent; // @synthesize isRecent=_isRecent;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didClickBack:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addTableView;
- (void)loadMore;
- (void)getDataFail:(id)arg1;
- (void)getDataError:(id)arg1;
- (void)showTips:(id)arg1;
- (void)getDataSuccess:(id)arg1;
- (void)refreshData;
- (void)doThingBeforeGetData:(_Bool)arg1;
- (void)getRecentRoom:(_Bool)arg1;
- (void)getDataByKeyword:(_Bool)arg1 keyword:(id)arg2;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initRecentWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
