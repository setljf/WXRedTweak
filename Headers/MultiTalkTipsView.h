//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CContact, MMBorderView, MMUIView, MultiTalkBannerItem, NSArray, NSString, UIButton, UIImageView, UILabel;

@interface MultiTalkTipsView : UIView
{
    CContact *_contact;
    _Bool _isUnfold;
    _Bool _isAnimating;
    UIImageView *_bgView;
    UIImageView *_iconView;
    UIImageView *_iconHLView;
    UILabel *_foldTipsLabel;
    UIImageView *_arrowView;
    UILabel *_unfoldTitleLabel;
    UIButton *_enterButton;
    UIButton *_cancelButton;
    NSString *_wxGroupId;
    MultiTalkBannerItem *_bannerInfo;
    unsigned int _startTalkTimestamp;
    _Bool _isTimerStart;
    NSArray *_userList;
    MMUIView *_headImgContainerView;
    MMBorderView *_bannerBottomLine;
    MMBorderView *_buttonTopLine;
    MMBorderView *_buttonBottomLine;
    MMBorderView *_buttonMiddleLine;
}

- (void).cxx_destruct;
- (_Bool)checkTouchPoint:(struct CGPoint)arg1 IfInView:(id)arg2;
- (void)dealloc;
- (void)doFoldAnimation;
- (void)doIconDarkAnimation;
- (void)doIconHighlightAnimation;
- (void)doUnfoldAnimation;
- (id)genTimeStr;
- (void)initView;
- (id)initWithContact:(id)arg1;
- (void)joinCurrentBannerMultiTalk;
- (void)layoutSubviews;
- (void)onCancelButtonPress;
- (void)onEnterButtonPress;
- (void)resetTipsView;
- (void)setTipsTitle:(id)arg1;
- (void)startIconChangeAnimation;
- (void)stopIconChangeAnimation;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)unfold;
- (void)unfoldAnimationFinish;
- (void)updateHeadViews;
- (void)updateTipsView:(id)arg1;

@end
