//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString, VideoUploadStatInfo;

__attribute__((visibility("hidden")))
@interface SightDraft : MMObject <PBCoding>
{
    int draftID;
    int date;
    int _sourceForSNSUploadStat;
    NSMutableArray *itemAry;
    VideoUploadStatInfo *_uploadStatInfo;
}

+ (id)draftWithVideoURL:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) VideoUploadStatInfo *uploadStatInfo; // @synthesize uploadStatInfo=_uploadStatInfo;
@property(nonatomic) int sourceForSNSUploadStat; // @synthesize sourceForSNSUploadStat=_sourceForSNSUploadStat;
@property(nonatomic) int date; // @synthesize date;
@property(retain, nonatomic) NSMutableArray *itemAry; // @synthesize itemAry;
@property(nonatomic) int draftID; // @synthesize draftID;
- (void).cxx_destruct;
- (id)getItem:(int)arg1;
- (void)addItem:(id)arg1;
- (void)dealloc;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (void)saveToPhotoLibraryWithTips:(_Bool)arg1;
- (void)saveToPhotoLibrary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
