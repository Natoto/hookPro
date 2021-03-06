//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MPTVBParser : NSObject
{
}

+ (id)sharedParser;
- (void)configFilter:(id *)arg1 withClass:(Class)arg2 vshPath:(id)arg3 fashPath:(id)arg4 outputSize:(struct CGSize)arg5 enable4xMSAA:(_Bool)arg6;
- (id)subMovieInTimeRange:(CDStruct_e83c9415)arg1 ofMovie:(id)arg2;
- (void)appendSourceWithInfo:(id)arg1 array:(id)arg2 start:(double)arg3 end:(double)arg4 duration:(double)arg5 loopStart:(double)arg6 loopEnd:(double)arg7 sourceVideo:(id)arg8;
- (id)parsingProgramsForCurrentFilter:(id)arg1;
- (id)parsingSourcesForCurrentFilter:(id)arg1 withStart:(double)arg2 end:(double)arg3 loopStart:(double)arg4 loopEnd:(double)arg5 sourceVideo:(id)arg6;
- (id)customFontWithPath:(id)arg1 size:(double)arg2;
- (id)labelWithLabelInfo:(id)arg1;
- (id)getShaderSourceFromFile:(id)arg1;
- (id)createVideoCompostionInstructionWithCompositionTrack:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (_Bool)buildVideoCompositionWithAsset:(id)arg1 composition:(id)arg2 videoComposition:(id)arg3 duration:(double)arg4 withStart:(double)arg5 andEnd:(double)arg6;
- (id)buildUIElementWithText:(id)arg1 inputSize:(struct CGSize)arg2 labelFrame:(struct CGRect)arg3;
- (id)buildVideoWithAssetPath:(id)arg1 duration:(double)arg2 loopStart:(double)arg3 loopEnd:(double)arg4;
- (id)filtersByParseConfiguration:(id)arg1 withSourceVideo:(id)arg2;

@end

