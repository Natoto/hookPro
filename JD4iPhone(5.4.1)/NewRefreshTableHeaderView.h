//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DeliveryStaffView, NSString, UIImageView, UILabel, UIScrollView;

@interface NewRefreshTableHeaderView : UIView
{
    UIView *_contentView;
    UILabel *_statusLabel;
    UIImageView *_staffImageView;
    UIImageView *_boxImageView;
    DeliveryStaffView *_deliveryStaffView;
    UIImageView *_refreshTitleImageView;
    int _state;
    NSString *identifier;
    double _frameHeight;
    int _oldState;
    _Bool _isLoaded;
    NSString *identifier_;
    UIScrollView *_scrollView;
    double originInset;
    id <NewRefreshTableHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <NewRefreshTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) double originInset; // @synthesize originInset;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=identifier_;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)updateLayer:(double)arg1;
- (void)finishLoading;
- (void)pullRefreshTableHeaderViewDown:(CDUnknownBlockType)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)setRefreshTitleImageView:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 identifier:(id)arg2 tipNumber:(long long)arg3;
- (void)dealloc;

@end

