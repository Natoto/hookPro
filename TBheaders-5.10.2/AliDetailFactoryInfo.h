//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol AliDetailFactoryProtocol;

@interface AliDetailFactoryInfo : NSObject
{
    int _priority;	// 8 = 0x8
    id <AliDetailFactoryProtocol> _factory;	// 16 = 0x10
}

@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) id <AliDetailFactoryProtocol> factory; // @synthesize factory=_factory;
- (void).cxx_destruct;
- (id)initWithFactory:(id)arg1 priority:(int)arg2;

@end

