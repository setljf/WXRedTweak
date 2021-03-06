//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WKProxyHelper : NSObject
{
}

+ (void)checkProxyActionState;
+ (void)checkProxyInfoWithCompletion:(CDUnknownBlockType)arg1;
+ (void)cleanupCrashState;
+ (void)clearProxyMemory;
+ (void)crashProtectionBegin;
+ (void)crashProtectionEnd;
+ (void)downloadProxyInfo;
+ (void)downloadProxyInfoIfNecessary;
+ (void)downloadWKProxyInfoWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)enableWKProxy:(id *)arg1;
+ (void)finishActionWithResult:(long long)arg1;
+ (id)generateMemory;
+ (const struct mach_header *)getWebkitHeader;
+ (void)initialize;
+ (_Bool)isCrashHasReported;
+ (_Bool)isDetectedCrash;
+ (_Bool)isDetectedCrashWithTimes:(long long)arg1;
+ (_Bool)isProxyAvailable;
+ (_Bool)isProxyInfoValid:(id)arg1;
+ (_Bool)isReportEnabled;
+ (_Bool)isReportWithMemCmpEnabled;
+ (id)phoneID;
+ (long long)proxyActionState;
+ (long long)proxyResult;
+ (void)registerMttSchemePrivate;
+ (void)resetStateWhenAppEnterBackground;
+ (void)setCrashReported:(_Bool)arg1;
+ (void)setProxyActionState:(long long)arg1;
+ (_Bool)setProxyInfoLocallyWithError:(id *)arg1;
+ (void)setProxyResult:(long long)arg1;
+ (void)setReportEnabled:(_Bool)arg1;
+ (_Bool)setWithProxyInfo:(id)arg1;
+ (_Bool)shouldDownloadWKProxy;
- (id)init;

@end

