//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BaseReq : NSObject
{
    int type;	// 8 = 0x8
    NSString *openID;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *openID; // @synthesize openID;
@property(nonatomic) int type; // @synthesize type;
- (void)dealloc;
- (id)init;

@end
