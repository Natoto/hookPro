//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TribeDBProcess : NSObject
{
}

+ (void)DBTribeMsgToTribeMsg:(id)arg1 toDest:(id)arg2;
+ (id)shareInstance;
- (id)getShowTitleOfTribeMessage:(id)arg1;
- (id)getDBTribeMsgByTribeMsg:(id)arg1;
- (void)updateTribeMsgContent:(id)arg1;
- (void)updateTribeMsgState:(id)arg1 withMsgId:(id)arg2 withState:(long long)arg3;
- (void)appendTribeSystemMsg:(id)arg1 withUnread:(_Bool)arg2 withSave:(_Bool)arg3;
- (void)appendTribeNormalMsg:(id)arg1 withUnread:(_Bool)arg2 withSave:(_Bool)arg3;
- (void)appendTribeMsg:(id)arg1 withUnread:(_Bool)arg2 withSave:(_Bool)arg3;
- (_Bool)isExistsMsgIdByTime:(id)arg1 withTime:(id)arg2 withSender:(id)arg3 error:(int *)arg4;
- (_Bool)isExistsMsgIdByMsgId:(id)arg1 withMsgId:(id)arg2 withSender:(id)arg3 error:(int *)arg4;
- (void)deleteTribeSession:(id)arg1;
- (void)appendTribeSysList:(id)arg1 withUnread:(_Bool)arg2 withSave:(_Bool)arg3;
- (id)getAllTribeSessionIds;
- (_Bool)deleteTribeList:(id)arg1 saveFlag:(_Bool)arg2;
- (_Bool)updateTribeList:(id)arg1 saveFlag:(_Bool)arg2;
- (_Bool)appendTribeList:(id)arg1 saveFlag:(_Bool)arg2;
- (_Bool)deleteTribeMember:(id)arg1 withUid:(id)arg2 save:(_Bool)arg3;
- (void)insertTribeMemberList:(id)arg1 withUid:(id)arg2 withNick:(id)arg3 withFlag:(long long)arg4 withTX:(_Bool)arg5;
- (id)getTribeMemberDispName:(id)arg1 withUid:(id)arg2;
- (_Bool)updateTribeMemberFlag:(id)arg1 withParam:(id)arg2;
- (void)updateTribeMsg:(id)arg1 withMsgId:(id)arg2 withContentType:(int)arg3 withPerviewAvatar:(id)arg4 withAvatar:(id)arg5;
- (id)getTribeSession:(id)arg1 error:(int *)arg2;
- (id)getTribeSession:(id)arg1;
- (id)getTribeMemberAllObj:(id)arg1;
- (id)getTribeListAllObj;
- (id)getWWTribeListObj:(id)arg1;
- (id)getTribeListObj:(id)arg1;
- (id)getLastTribeMessage:(id)arg1;
- (id)getLastTribeSysList;
- (void)updateSessionSysLastMsgInfo:(id)arg1 tribeSysMsg:(id)arg2;
- (void)updateSessionLastMsgInfo:(id)arg1 tribeMsg:(id)arg2;
- (void)updateTribeList:(id)arg1 key:(id)arg2 value:(id)arg3 withSave:(_Bool)arg4;
- (void)TribeMsgToDBTribeMsg:(id)arg1 toDest:(id)arg2;
- (void)DBTribeMemberToTribeMember:(id)arg1 toDest:(id)arg2;
- (void)TribeMemberToTribeMember:(id)arg1 toDest:(id)arg2;
- (void)DBTribeSysListToTribeSysList:(id)arg1 toDest:(id)arg2;
- (void)TribeSysListToDBTribeSysList:(id)arg1 toDest:(id)arg2;
- (void)DBTribeListToTribeList:(id)arg1 toDest:(id)arg2;
- (void)TribeListToDBTribeList:(id)arg1 toDest:(id)arg2;
- (id)init;
- (id)getNextTribeMessageIndex;
- (long long)makeTribeMessageIndexBase;

@end

