//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HistoryItem : NSObject <NSCoding>
{
    unsigned long long _type;
    NSNumber *_updateTime;
    id _dataValue;
}

@property(retain, nonatomic) id dataValue; // @synthesize dataValue=_dataValue;
@property(retain, nonatomic) NSNumber *updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
