//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SearchQueueItem : NSObject
{
    unsigned int voiceId;
    unsigned int offset;
    unsigned int length;
    unsigned int endflag;
    unsigned int trycount;
}

@property(nonatomic) unsigned int endflag; // @synthesize endflag;
@property(nonatomic) unsigned int length; // @synthesize length;
@property(nonatomic) unsigned int offset; // @synthesize offset;
@property(nonatomic) unsigned int trycount; // @synthesize trycount;
@property(nonatomic) unsigned int voiceId; // @synthesize voiceId;

@end
