//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SuggestCellControllerFactory : NSObject
{
    NSMutableDictionary *_cellControllsDict;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableDictionary *cellControllsDict; // @synthesize cellControllsDict=_cellControllsDict;
- (void).cxx_destruct;
- (void)clean;
- (id)allCellControllers;
- (id)getSuggestCellControllerWithDataType:(Class)arg1;
- (void)registerSuggestCellController:(id)arg1;
- (id)init;

@end

