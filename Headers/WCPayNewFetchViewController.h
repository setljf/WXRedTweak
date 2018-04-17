//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "MMTipsViewControllerDelegate.h"
#import "UITableViewDelegate.h"
#import "WCPayBalanceSelectCardViewDelegate.h"
#import "WCPayNoticeBannerDelegate.h"

@class MMUIButton, MMUILabel, MMUIView, NSDictionary, NSString, UIButton, UITextField, WCPayBalanceTipsLogic, WCPayBindCardInfo, WCPayNoticeBanner;

@interface WCPayNewFetchViewController : WCPayBaseViewController <UITableViewDelegate, WCPayNoticeBannerDelegate, MMTipsViewControllerDelegate, WCPayBalanceSelectCardViewDelegate>
{
    WCPayBindCardInfo *m_oCardInfo;
    WCPayNoticeBanner *m_banner;
    MMUIView *m_containerView;
    MMUIView *m_cardBgView;
    MMUILabel *m_cardLabel;
    MMUIButton *m_bankNameBtn;
    MMUILabel *m_bankChargeFeeLabel;
    MMUIView *m_fetchBgView;
    MMUILabel *m_fetchLabel;
    MMUILabel *m_symbolLabel;
    UITextField *m_fetchMoneyFeild;
    MMUIView *m_fetchLine;
    MMUILabel *m_fetchTipLabel;
    MMUIButton *m_fetchAllBtn;
    UIButton *m_fetchNextBtn;
    WCPayBalanceTipsLogic *tipLogic;
    _Bool m_bFetchAll;
    NSDictionary *m_dicBanners;
    id <WCPayNewFetchViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)checkAndShowFirstVisitTips;
- (void)didReceiveMemoryWarning;
- (void)doNext;
- (id)genLabelWithFontSize:(int)arg1 textColor:(id)arg2;
- (id)getCardNameFrom:(id)arg1;
- (id)getFirstAvailableCard;
- (id)getNoticeBanner;
- (double)getRealtimeChargeFeeFor:(double)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)layoutAllViews;
- (void)layoutBankCardInfo;
- (void)layoutBottomView;
- (void)layoutFetchInfo;
@property(nonatomic) __weak id <WCPayNewFetchViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onCancelClick;
- (void)onClickBankName:(id)arg1;
- (void)onClickNext:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onFetchAllBtnClick:(id)arg1;
- (void)onRightBarButtonClick;
- (void)refreshViewWithData:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)selectCardView:(id)arg1 didSelectCard:(id)arg2;
- (void)selectCardViewDidSelectAddNewCard:(id)arg1;
- (void)setCardInfo:(id)arg1;
- (void)setCurrentCardInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setupNavigationBar;
- (void)setupView;
- (void)showBeyondFetchBalanceErrorTip;
- (void)showChargeFeeTip:(double)arg1;
- (void)showFetchBalanceTip;
- (void)showFetchRuleTips;
- (void)textFieldDidChange;
- (void)updateFetchTipLable:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
