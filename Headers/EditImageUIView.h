//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIImageView;

@interface EditImageUIView : MMUIView
{
    UIImageView *_imageView;
    int _toolType;
}

- (void).cxx_destruct;
@property(nonatomic) int _toolType; // @synthesize _toolType;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withToolType:(int)arg2;
- (void)renderImageWithBlankView:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end
