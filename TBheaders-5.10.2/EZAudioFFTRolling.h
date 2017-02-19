//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EZAudioFFT.h"

@interface EZAudioFFTRolling : EZAudioFFT
{
    unsigned long long _windowSize;	// 40 = 0x28
    CDStruct_3bcacdbf *_historyInfo;	// 48 = 0x30
}

+ (id)fftWithWindowSize:(unsigned long long)arg1 historyBufferSize:(unsigned long long)arg2 sampleRate:(float)arg3 delegate:(id)arg4;
+ (id)fftWithWindowSize:(unsigned long long)arg1 historyBufferSize:(unsigned long long)arg2 sampleRate:(float)arg3;
+ (id)fftWithWindowSize:(unsigned long long)arg1 sampleRate:(float)arg2 delegate:(id)arg3;
+ (id)fftWithWindowSize:(unsigned long long)arg1 sampleRate:(float)arg2;
@property(nonatomic) CDStruct_3bcacdbf *historyInfo; // @synthesize historyInfo=_historyInfo;
@property(nonatomic) unsigned long long windowSize; // @synthesize windowSize=_windowSize;
@property(readonly, nonatomic) float *timeDomainData;
@property(readonly, nonatomic) unsigned int timeDomainBufferSize;
- (float *)computeFFTWithBuffer:(float *)arg1 withBufferSize:(unsigned int)arg2;
- (id)initWithWindowSize:(unsigned long long)arg1 historyBufferSize:(unsigned long long)arg2 sampleRate:(float)arg3 delegate:(id)arg4;
- (id)initWithWindowSize:(unsigned long long)arg1 historyBufferSize:(unsigned long long)arg2 sampleRate:(float)arg3;
- (id)initWithWindowSize:(unsigned long long)arg1 sampleRate:(float)arg2 delegate:(id)arg3;
- (id)initWithWindowSize:(unsigned long long)arg1 sampleRate:(float)arg2;
- (void)dealloc;

@end
