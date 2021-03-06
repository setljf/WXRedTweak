//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "ICdnComMgrExt.h"
#import "WCPayQRCodeRewardGenCodeCgiDelegate.h"
#import "WCPayQRCodeRewardGetCodeCgiDelegate.h"
#import "WCPayQRCodeRewardReceiverDetailViewControllerDelegate.h"
#import "WCPayQRCodeRewardSetPhotoOrWordCgiDelegate.h"
#import "WCPayQRCodeRewardSetupViewControllerDelegate.h"

@class NSString, WCPayQRCodeRewardGenCodeCgi, WCPayQRCodeRewardGetCodeCgi, WCPayQRCodeRewardReceiverDetailViewController, WCPayQRCodeRewardSetPhotoOrWordCgi;

@interface WCPayQRCodeRewardLaunchControlLogic : WCPayControlLogic <WCPayQRCodeRewardSetupViewControllerDelegate, WCPayQRCodeRewardGenCodeCgiDelegate, WCPayQRCodeRewardReceiverDetailViewControllerDelegate, WCPayQRCodeRewardGetCodeCgiDelegate, WCPayQRCodeRewardSetPhotoOrWordCgiDelegate, ICdnComMgrExt>
{
    WCPayQRCodeRewardGetCodeCgi *_getRewardCodeCgi;
    WCPayQRCodeRewardGenCodeCgi *_genRewardCodeCgi;
    WCPayQRCodeRewardSetPhotoOrWordCgi *_setPhotoOrWordCgi;
    WCPayQRCodeRewardReceiverDetailViewController *_detailViewController;
    NSString *_currentSettingWord;
    NSString *_currentCdnClientID;
    long long _downloadCodeImgScene;
}

- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
@property(retain, nonatomic) NSString *currentCdnClientID; // @synthesize currentCdnClientID=_currentCdnClientID;
@property(nonatomic) NSString *currentSettingWord; // @synthesize currentSettingWord=_currentSettingWord;
- (void)dealloc;
@property(retain, nonatomic) WCPayQRCodeRewardReceiverDetailViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
- (void)downloadCodeImageView;
@property(nonatomic) long long downloadCodeImgScene; // @synthesize downloadCodeImgScene=_downloadCodeImgScene;
@property(retain, nonatomic) WCPayQRCodeRewardGenCodeCgi *genRewardCodeCgi; // @synthesize genRewardCodeCgi=_genRewardCodeCgi;
- (id)getCodeViewCdnDownloadClientId;
@property(retain, nonatomic) WCPayQRCodeRewardGetCodeCgi *getRewardCodeCgi; // @synthesize getRewardCodeCgi=_getRewardCodeCgi;
- (void)handleEventAfterDownloadCodeImage;
- (_Bool)hasLocalCodeImageCache;
- (id)initWithData:(id)arg1;
- (void)onGetQRCodeRewardGetCodeResp:(id)arg1;
- (void)onGetQRCodeRewardSetCodeResp:(id)arg1;
- (void)onGetQRCodeRewardSetPhotoOrWordCgiResp:(id)arg1;
- (void)onReceiverDetailViewControllerBack;
- (void)onReceiverDetailViewControllerClickRewardSettingBtn;
- (void)onReceiverDetailViewControllerUserRemovePhotoWording;
- (void)onReceiverDetailViewControllerUserSetPhotoWording:(id)arg1;
- (void)onRecevierDetailViewControllerClickSetupBtn;
- (void)onSetupViewControllerBack;
- (void)onSetupViewControllerConfirmGenCodeWithAmountList:(id)arg1 rewardDesc:(id)arg2 hasChangeDefaultAmount:(_Bool)arg3;
- (void)saveGetQRCodeRewardCacheToFile;
- (void)sendGetCodeCgi;
@property(retain, nonatomic) WCPayQRCodeRewardSetPhotoOrWordCgi *setPhotoOrWordCgi; // @synthesize setPhotoOrWordCgi=_setPhotoOrWordCgi;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

