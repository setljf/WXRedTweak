//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, NSString;

@interface BatchAddMsgInfo : NSObject
{
    _Bool _isCanAddDB;
    _Bool _addDBResult;
    _Bool _isNotify;
    _Bool _isNeedChangeDisplay;
    _Bool _isInsertNew;
    unsigned int _uiDes;
    CMessageWrap *_wrapMsg;
    NSString *_chatName;
    unsigned long long _addMsgType;
    NSString *_clusterType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool addDBResult; // @synthesize addDBResult=_addDBResult;
@property(nonatomic) unsigned long long addMsgType; // @synthesize addMsgType=_addMsgType;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) NSString *clusterType; // @synthesize clusterType=_clusterType;
@property(nonatomic) _Bool isCanAddDB; // @synthesize isCanAddDB=_isCanAddDB;
@property(nonatomic) _Bool isInsertNew; // @synthesize isInsertNew=_isInsertNew;
@property(nonatomic) _Bool isNeedChangeDisplay; // @synthesize isNeedChangeDisplay=_isNeedChangeDisplay;
@property(nonatomic) _Bool isNotify; // @synthesize isNotify=_isNotify;
@property(nonatomic) unsigned int uiDes; // @synthesize uiDes=_uiDes;
@property(retain, nonatomic) CMessageWrap *wrapMsg; // @synthesize wrapMsg=_wrapMsg;

@end

