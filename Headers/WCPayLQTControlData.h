//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OnClickRedeemRes, QryPurchaseResultRes, QryUsrFundDetailRes;

@interface WCPayLQTControlData : NSObject
{
    unsigned int _lqtCurrentTransMoney;
    unsigned long long _lqtMoneyScene;
    QryUsrFundDetailRes *_userDetailFundResp;
    QryPurchaseResultRes *_qrypurchaseResultResp;
    OnClickRedeemRes *_clickRedeemResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OnClickRedeemRes *clickRedeemResp; // @synthesize clickRedeemResp=_clickRedeemResp;
@property(nonatomic) unsigned int lqtCurrentTransMoney; // @synthesize lqtCurrentTransMoney=_lqtCurrentTransMoney;
@property(nonatomic) unsigned long long lqtMoneyScene; // @synthesize lqtMoneyScene=_lqtMoneyScene;
@property(retain, nonatomic) QryPurchaseResultRes *qrypurchaseResultResp; // @synthesize qrypurchaseResultResp=_qrypurchaseResultResp;
@property(retain, nonatomic) QryUsrFundDetailRes *userDetailFundResp; // @synthesize userDetailFundResp=_userDetailFundResp;

@end
