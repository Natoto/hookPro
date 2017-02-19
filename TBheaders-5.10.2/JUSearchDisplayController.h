//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JHSBaseViewController.h"

#import "JUSearchNavBarProtocol-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JHSDataSource, JHSError, JHSErrorInfoHandler, JHSSearchKeywordDataSource, JHSSearchSegmentView, JHSUTListModel, JUSearchNavBar, NSString, UITableView, UIView;

@interface JUSearchDisplayController : JHSBaseViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, JUSearchNavBarProtocol>
{
    NSString *_keyword;	// 8 = 0x8
    NSString *_sort;	// 16 = 0x10
    NSString *_reverses;	// 24 = 0x18
    JHSDataSource *_resultDataSource;	// 32 = 0x20
    JHSUTListModel *_utModel;	// 40 = 0x28
    JHSSearchKeywordDataSource *_keywordDataSource;	// 48 = 0x30
    JHSError *_emptyError;	// 56 = 0x38
    JHSErrorInfoHandler *_errorHandler;	// 64 = 0x40
    JUSearchNavBar *_searchNavBar;	// 72 = 0x48
    UITableView *_resultsTableView;	// 80 = 0x50
    UITableView *_historyTableView;	// 88 = 0x58
    JHSSearchSegmentView *_searchSegmentView;	// 96 = 0x60
    UIView *_emptyHistoryFooterView;	// 104 = 0x68
    UIView *_suggestionFooterView;	// 112 = 0x70
    _Bool _initiativeSearch;	// 120 = 0x78
}

- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)suggestionFooterView;
- (id)emptyHistoryFooterView;
- (void)gotoSearchResultViewController:(id)arg1;
- (void)addKeywordToTextField:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)searchWithKey:(id)arg1;
- (void)navBack:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)killScroll;
- (void)loadDataFromDataSource;
- (void)refreshHistoryTableView;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)buildFootViewInHistoryTableView;
- (id)resultsTableView;
- (id)historyTableView;
- (id)searchSegmentView;
- (id)searchNavBar;
- (struct CGRect)resultsTableViewRectWhenSegHidden;
- (struct CGRect)resultsTableViewRect;
- (struct CGRect)historyTableViewRect;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)clearHistory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
