//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MsgPreloadVideoRecord : NSObject <PBCoding>
{
    NSString *m_nsChatName;
    unsigned int m_uiLocalID;
    unsigned int m_uiAccessTime;
    _Bool m_bNonAutoClean;
    unsigned int m_uiHasPreloadSize;
}

+ (void)initialize;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (_Bool)isChatRoom;
@property(nonatomic) _Bool m_bNonAutoClean; // @synthesize m_bNonAutoClean;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(nonatomic) unsigned int m_uiAccessTime; // @synthesize m_uiAccessTime;
@property(nonatomic) unsigned int m_uiHasPreloadSize; // @synthesize m_uiHasPreloadSize;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
- (id)pathForPreloadVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
