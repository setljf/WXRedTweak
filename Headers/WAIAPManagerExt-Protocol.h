//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WAIAPError, WAIAPPayRequset;

@protocol WAIAPManagerExt <NSObject>
- (void)onWAIAPFail:(WAIAPPayRequset *)arg1 errInfo:(WAIAPError *)arg2;
- (void)onWAIAPPaySuccess:(WAIAPPayRequset *)arg1;
@end

