//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface JDMTASession : NSObject
{
    long long _sequence;
    long long _visit_times;
    long long _pre_session;
    long long _pre_sequence;
    NSString *_fst_session_time;
    NSString *_cur_session_time;
    NSString *_pre_session_time;
    NSDictionary *_utm_infos;
    NSDictionary *_tracking_infos;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSDictionary *tracking_infos; // @synthesize tracking_infos=_tracking_infos;
@property(retain, nonatomic) NSDictionary *utm_infos; // @synthesize utm_infos=_utm_infos;
@property(retain, nonatomic) NSString *pre_session_time; // @synthesize pre_session_time=_pre_session_time;
@property(retain, nonatomic) NSString *cur_session_time; // @synthesize cur_session_time=_cur_session_time;
@property(retain, nonatomic) NSString *fst_session_time; // @synthesize fst_session_time=_fst_session_time;
@property(nonatomic) long long pre_sequence; // @synthesize pre_sequence=_pre_sequence;
@property(nonatomic) long long pre_session; // @synthesize pre_session=_pre_session;
@property(nonatomic) long long visit_times; // @synthesize visit_times=_visit_times;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
- (void).cxx_destruct;
- (void)archiverSessionInfo;
- (id)getCookiesWithKey:(id)arg1;
- (void)updateUTMInfomations:(id)arg1;
- (void)updateCurrentSequence;
- (void)startAppSession;
- (void)initData;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

