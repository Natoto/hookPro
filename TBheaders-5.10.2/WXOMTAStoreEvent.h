//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WXOMTAStoreEvent : NSObject
{
    unsigned int _eventId;	// 8 = 0x8
    unsigned int _status;	// 12 = 0xc
    unsigned int _sendCount;	// 16 = 0x10
    unsigned int _ts;	// 20 = 0x14
    NSString *_content;	// 24 = 0x18
}

@property unsigned int ts; // @synthesize ts=_ts;
@property unsigned int sendCount; // @synthesize sendCount=_sendCount;
@property unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property unsigned int eventId; // @synthesize eventId=_eventId;
- (void)dealloc;

@end
