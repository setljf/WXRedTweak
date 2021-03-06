//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString, UIButton, UIImage, UIImageView;

@interface WACameraMediaPreview : UIView
{
    _Bool _bShowActionButton;
    _Bool _isPlaying;
    CDUnknownBlockType _didClickRetakeBlock;
    CDUnknownBlockType _didClickDoneBlock;
    UIImage *_image;
    NSString *_videoPath;
    UIView *_backgrounView;
    UIView *_previewView;
    UIImageView *_imageView;
    UIView *_bottomView;
    UIButton *_retakeButton;
    UIView *_retakeBgView;
    UIButton *_confirmButton;
    UIImageView *_m_topBkgView;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bShowActionButton; // @synthesize bShowActionButton=_bShowActionButton;
@property(retain, nonatomic) UIView *backgrounView; // @synthesize backgrounView=_backgrounView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
- (void)continuePlayVideo;
- (void)dealloc;
- (void)didClickDone;
@property(copy, nonatomic) CDUnknownBlockType didClickDoneBlock; // @synthesize didClickDoneBlock=_didClickDoneBlock;
- (void)didClickRetake;
@property(copy, nonatomic) CDUnknownBlockType didClickRetakeBlock; // @synthesize didClickRetakeBlock=_didClickRetakeBlock;
- (void)didEnterBackground;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) UIImageView *m_topBkgView; // @synthesize m_topBkgView=_m_topBkgView;
- (void)pauseVideo;
- (void)playButtonAnimation;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
- (void)playerItemDidReachEnd:(id)arg1;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIView *retakeBgView; // @synthesize retakeBgView=_retakeBgView;
@property(retain, nonatomic) UIButton *retakeButton; // @synthesize retakeButton=_retakeButton;
- (id)setImage:(id)arg1 Orientation:(long long)arg2 isFrontCamera:(_Bool)arg3;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
- (void)setVideoPath:(id)arg1 withOrientation:(long long)arg2;
- (void)setupBottomView;
- (void)setupPreviewView;
- (void)setupTopView;
- (void)stopVideo;
- (void)willEnterForeground;

@end

