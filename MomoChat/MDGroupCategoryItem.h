//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class NSString;

@interface MDGroupCategoryItem : EtaModel
{
    NSString *_cg_name;
    unsigned long long _cg_categoryId;
}

+ (id)eta_dbStoreProperty;
+ (id)eta_jsonKeyPathsByProperty;
@property(nonatomic) unsigned long long cg_categoryId; // @synthesize cg_categoryId=_cg_categoryId;
@property(copy, nonatomic) NSString *cg_name; // @synthesize cg_name=_cg_name;
- (void).cxx_destruct;

@end
