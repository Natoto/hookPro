//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLConferenceWindowDataModel, NSDictionary, NSString;

@protocol MLConferenceHumanDelegate <NSObject>

@optional
- (void)showConferenceGiftPanelWithSlavermodel:(MLConferenceWindowDataModel *)arg1;
- (void)showConferenceRankingDelegate:(NSString *)arg1;
- (void)showUserCardWithMomoid:(NSString *)arg1;
- (void)conferenceDidEnd;
- (void)conferenceDidStart;
- (void)conferenceHumanDismissDecorationPanel;
- (void)conferenceHumanShowDecorationPanel;
- (void)onUserStatusChanged;
- (void)exitConferenceFromGuestShouldReplayVideo:(_Bool)arg1;
- (void)startGuestPublishWithParam:(NSDictionary *)arg1;
- (NSString *)applyPublishGotoString;
- (void)applyConferenceSuccess:(_Bool)arg1;
- (_Bool)isMasterBoardcasting;
- (_Bool)inStartBoardcastingView;
- (void)hostConnectButtonClick;
- (void)removeSlaveViewWithUserID:(NSString *)arg1;
- (void)kickGuestFromHostWithUserID:(NSString *)arg1;
- (void)mixGuestVideo;
- (void)setAcceptGuestWithMediaUserID:(NSString *)arg1;
@end
