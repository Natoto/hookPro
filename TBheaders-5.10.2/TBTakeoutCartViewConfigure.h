//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, TBTakeoutNewCartViewModel;

@interface TBTakeoutCartViewConfigure : NSObject
{
    TBTakeoutNewCartViewModel *_viewModel;	// 8 = 0x8
    double _totalHeight;	// 16 = 0x10
    NSMutableArray *_cellHeightList;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableArray *cellHeightList; // @synthesize cellHeightList=_cellHeightList;
@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;
@property(nonatomic) __weak TBTakeoutNewCartViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (double)heightForCell:(long long)arg1;

@end
