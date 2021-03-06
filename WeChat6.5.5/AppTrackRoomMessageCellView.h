//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "ITrackPresentExt-Protocol.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface AppTrackRoomMessageCellView : CommonMessageCellView <ITrackPresentExt>
{
    UILabel *m_statusLabel;
}

- (void).cxx_destruct;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)layoutContentView;
- (_Bool)canOpenTrackRoom;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

