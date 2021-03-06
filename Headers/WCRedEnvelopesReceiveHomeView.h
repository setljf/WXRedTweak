//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class ContactUpdateHelper, MMWebImageView, NSDictionary, UIButton, UIImageView, UIView;

@interface WCRedEnvelopesReceiveHomeView : MMUIView
{
    id <WCRedEnvelopesReceiveHomeViewDelegate> m_delegate;
    UIImageView *m_backgroundView;
    UIButton *openRedEnvelopesButton;
    UIImageView *openAnimationImageView;
    struct CGRect m_frame;
    NSDictionary *m_dicBaseInfo;
    _Bool m_bSuccessAnmation;
    UIView *oRedView;
    UIView *oTopHeaderView;
    UIView *imageView;
    MMWebImageView *maskImageView;
    ContactUpdateHelper *_m_nickNameHelper;
    ContactUpdateHelper *_m_successOpenNickNameHelper;
}

- (void).cxx_destruct;
- (void)OnCancelButtonDone;
- (void)OnOpenList;
- (void)OnOpenRedEnvelopes;
- (_Bool)accessibilityPerformEscape;
- (void)endAnimation;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
@property(retain, nonatomic) ContactUpdateHelper *m_nickNameHelper; // @synthesize m_nickNameHelper=_m_nickNameHelper;
@property(retain, nonatomic) ContactUpdateHelper *m_successOpenNickNameHelper; // @synthesize m_successOpenNickNameHelper=_m_successOpenNickNameHelper;
- (void)refreshViewWithData:(id)arg1;
- (void)removeView;
- (_Bool)shouldShowBottomDescriptionWithType:(int)arg1 envelopeStutus:(int)arg2;
- (_Bool)shouldShowDetailButtonWithIsSender:(_Bool)arg1 Type:(int)arg2 ReceiveStutus:(int)arg3 envelopeStutus:(int)arg4 data:(id)arg5;
- (void)showAnimation;
- (void)showSuccessOpenAnimation;
- (void)startReceiveAnimation;
- (void)stopReceiveAnimation;

@end

