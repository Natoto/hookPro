//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YuvPreProcessor : NSObject
{
    id <YuvPreProcessorProtocol> _delegate;
    struct ExtYuvPreProcessor *_enhancer;
}

@property(nonatomic) struct ExtYuvPreProcessor *enhancer; // @synthesize enhancer=_enhancer;
@property(nonatomic) __weak id <YuvPreProcessorProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)turnOff;
- (void)turnOn;
- (void)dealloc;
- (id)init;

@end
