//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class WCDataItem;

@interface WCPattern : NSObject <NSCoding>
{
    WCDataItem *dataItem;
    double lastAccessTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) double lastAccessTime; // @synthesize lastAccessTime;

@end

