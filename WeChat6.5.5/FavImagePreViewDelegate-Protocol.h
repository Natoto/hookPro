//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavImagePreView, UIImageView;
@protocol RecordNodeDataSource;

@protocol FavImagePreViewDelegate <NSObject>

@optional
- (void)onWillLongPressFavPreImage:(UIImageView *)arg1;
- (void)onLongPressedFavPreImage:(id <RecordNodeDataSource>)arg1;
- (void)onClickFavPreImage:(FavImagePreView *)arg1 ImageIndex:(unsigned int)arg2;
@end

