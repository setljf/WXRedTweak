//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavAudioInfo, FavoritesItemDataField, MMMusicInfo, NSMutableArray, NSString;

@protocol RecordNodeDataSource <NSObject>
- (_Bool)CanbeForwardToChat;
- (_Bool)CanbeForwardToWC;
- (FavAudioInfo *)GetAudioInfo;
- (unsigned int)GetDataIndex;
- (FavoritesItemDataField *)GetDataItem;
- (NSString *)GetDataSrcName;
- (NSString *)GetFileExt;
- (NSString *)GetFileName;
- (NSString *)GetFilePath;
- (int)GetImageDataDownloadStatus;
- (unsigned int)GetImageIndex;
- (NSString *)GetImageLocalID;
- (NSString *)GetImagePath;
- (NSString *)GetImageSourcePath;
- (NSMutableArray *)GetImgArray;
- (unsigned int)GetImgCount;
- (MMMusicInfo *)GetMusicInfo;
- (id)GetParent;
- (int)GetParentDownloadStatus;
- (unsigned int)GetParentLocalID;
- (double)GetRecordNodeContentHeight;
- (NSString *)GetSightPath;
- (NSString *)GetThumbPath;
- (unsigned int)GetVideoDuration;
- (NSString *)GetVideoTitle;
- (unsigned int)GetVoiceFormat;
- (NSString *)GetWebPageDomin;
- (_Bool)IsUrlMusicThumbPath:(id *)arg1;
- (_Bool)IsUrlVideoThumbPath:(id *)arg1;
- (_Bool)IsUrlWebPageThumbPath:(id *)arg1;
- (_Bool)StartDownload;
@end
