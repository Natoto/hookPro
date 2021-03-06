//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLSongsModel, NSString;

@interface MLMusicFileManager : NSObject
{
    MLSongsModel *_playingMusicModel;
    NSString *_localPath;
}

+ (id)shareInstance;
@property(copy, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(retain, nonatomic) MLSongsModel *playingMusicModel; // @synthesize playingMusicModel=_playingMusicModel;
- (void).cxx_destruct;
- (_Bool)hasEnoughFreeDiskSpace;
- (void)destoryMusicData;
- (_Bool)removeAllFile;
- (_Bool)removeItemAtPath:(id)arg1 extension:(id)arg2;
- (_Bool)checkFileIsExist:(id)arg1 extension:(id)arg2;
- (id)getLocalMusicFullPath:(id)arg1 extension:(id)arg2;
- (id)getRelativeLocalMusicPath;
- (id)getLocalMusicPath;
- (_Bool)creatMusicDirectory;

@end

