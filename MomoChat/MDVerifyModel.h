//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface MDVerifyModel : NSObject <NSCoding>
{
    NSString *_app_secret;
    NSString *_bundleid;
    NSString *_client_id;
    NSString *_advanced_scope;
    NSString *_scope;
    NSString *_redirect_uri;
}

@property(copy, nonatomic) NSString *redirect_uri; // @synthesize redirect_uri=_redirect_uri;
@property(copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(copy, nonatomic) NSString *advanced_scope; // @synthesize advanced_scope=_advanced_scope;
@property(copy, nonatomic) NSString *client_id; // @synthesize client_id=_client_id;
@property(copy, nonatomic) NSString *bundleid; // @synthesize bundleid=_bundleid;
@property(copy, nonatomic) NSString *app_secret; // @synthesize app_secret=_app_secret;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

