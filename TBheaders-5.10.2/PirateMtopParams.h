//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PirateMtopParams : NSObject
{
    _Bool _needEcodeSign;	// 8 = 0x8
    NSMutableDictionary *_businessParams;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
}

@property(nonatomic) _Bool needEcodeSign; // @synthesize needEcodeSign=_needEcodeSign;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableDictionary *businessParams; // @synthesize businessParams=_businessParams;
- (void).cxx_destruct;
- (void)addBusinessParam:(id)arg1 withKey:(id)arg2;
- (id)init;

@end
