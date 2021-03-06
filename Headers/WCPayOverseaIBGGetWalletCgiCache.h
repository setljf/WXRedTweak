//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString, WCPayOverseaGrayArea, WCPayOverseaThreePointArea, WCPayOverseaWalletNotice, WCPayOverseaWalletTitle;

@interface WCPayOverseaIBGGetWalletCgiCache : NSObject <PBCoding>
{
    _Bool canSwitchWallet;
    unsigned int walletRegion;
    WCPayOverseaWalletTitle *walletTitle;
    WCPayOverseaWalletNotice *walletNotice;
    WCPayOverseaGrayArea *walletGrayArea;
    WCPayOverseaThreePointArea *walletThreePointArea;
    NSString *walletRegionDesc;
    NSMutableArray *walletRegionDescArray;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool canSwitchWallet; // @synthesize canSwitchWallet;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(retain, nonatomic) WCPayOverseaGrayArea *walletGrayArea; // @synthesize walletGrayArea;
@property(retain, nonatomic) WCPayOverseaWalletNotice *walletNotice; // @synthesize walletNotice;
@property(nonatomic) unsigned int walletRegion; // @synthesize walletRegion;
@property(retain, nonatomic) NSString *walletRegionDesc; // @synthesize walletRegionDesc;
@property(retain, nonatomic) NSMutableArray *walletRegionDescArray; // @synthesize walletRegionDescArray;
@property(retain, nonatomic) WCPayOverseaThreePointArea *walletThreePointArea; // @synthesize walletThreePointArea;
@property(retain, nonatomic) WCPayOverseaWalletTitle *walletTitle; // @synthesize walletTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

