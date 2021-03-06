//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSMBaseViewController.h"

#import "MMSafeModeMgrExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIButton, UITableView;

@interface MMSMUploadFileViewController : MMSMBaseViewController <MMSafeModeMgrExt, UITableViewDelegate, UITableViewDataSource>
{
    UIButton *m_uploadButton;
    UIButton *m_uploadListButton;
    UIButton *m_nextButton;
    UITableView *m_uploadListTableView;
    _Bool m_isShowUploadList;
    NSArray *m_uploadList;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (id)init;
- (void)layoutNextButton:(int *)arg1;
- (void)layoutUploadButtonAndTips:(int *)arg1;
- (void)layoutUploadListTableView:(int *)arg1;
- (void)layoutViews;
- (void)onNextButtonClicked:(id)arg1;
- (void)onUploadButtonClicked:(id)arg1;
- (void)onUploadFilesFail;
- (void)onUploadFilesFinished;
- (void)onUploadFilesProgress:(double)arg1;
- (void)onUploadListButtonClicked:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

