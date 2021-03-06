//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface FFFile : NSObject
{
    struct AVFormatContext *formatContext;
    NSArray *streams;
    NSString *_path;
    NSDictionary *_options;
}

@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSArray *streams; // @synthesize streams;
@property(nonatomic) struct AVFormatContext *formatContext; // @synthesize formatContext;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 options:(id)arg2;

@end

