//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSString;

@interface BeaconSearchMgr : MMService <PBMessageObserverDelegate, MMService>
{
    double startSearchTime;
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnNetworkError:(unsigned int)arg1;
- (id)getBeaconsFromResponse:(id)arg1;
- (id)getJsonStringFor:(id)arg1 location:(id)arg2;
- (void)reportUserOpenBeacon:(id)arg1;
@property(nonatomic) double startSearchTime; // @synthesize startSearchTime;
- (id)sortBeaconsByDistance:(id)arg1;
- (void)startSearchWithLocation:(id)arg1;
- (void)stopSearch;
- (void)uploadBeacons:(id)arg1 location:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

