//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSNSShopShowCaseFeatureStoreItem : TBJSONModel
{
    NSString *_logo;	// 8 = 0x8
    NSString *_serviceName;	// 16 = 0x10
    NSString *_disDesc;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *disDesc; // @synthesize disDesc=_disDesc;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
- (void).cxx_destruct;

@end
