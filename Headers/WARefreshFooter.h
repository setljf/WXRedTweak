//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WARefreshComponent.h"

@interface WARefreshFooter : WARefreshComponent
{
    double _ignoredScrollViewContentInsetBottom;
}

+ (id)footerWithRefreshingBlock:(CDUnknownBlockType)arg1;
- (void)endRefreshingWithNoMoreData;
@property(nonatomic) double ignoredScrollViewContentInsetBottom; // @synthesize ignoredScrollViewContentInsetBottom=_ignoredScrollViewContentInsetBottom;
- (void)noticeNoMoreData;
- (void)prepare;
- (void)resetNoMoreData;

@end

