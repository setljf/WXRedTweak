//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class UIImage;

@interface LocationMessageViewModel : CommonMessageViewModel
{
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)additionalAccessibilityDescription;
- (id)cellViewClassName;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) UIImage *locationThumbImage;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;

@end
