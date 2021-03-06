//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WATemplateMsgManagerExt.h"
#import "WATemplateMsgMngReacceptCellActionDelegate.h"
#import "WATemplateMsgMngSwitchCellDelegate.h"
#import "WCActionSheetDelegate.h"

@class NSArray, NSMutableArray, NSString, UITableView, WAContactGetter, WATemplateMsgBanWrap;

@interface WATemplateMsgMngViewController : MMUIViewController <WCActionSheetDelegate, WATemplateMsgManagerExt, UITableViewDelegate, UITableViewDataSource, WATemplateMsgMngReacceptCellActionDelegate, WATemplateMsgMngSwitchCellDelegate>
{
    UITableView *m_tableView;
    NSArray *m_trimedBanList;
    WATemplateMsgBanWrap *m_operatingBanWrap;
    NSMutableArray *m_reacceptArray;
    unsigned long long m_switchStatusOperation;
    WAContactGetter *m_contactGetter;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)initTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onReaccept:(id)arg1;
- (void)onSwitch:(_Bool)arg1;
- (void)onTemplateMsgMgrInfoChanged;
- (void)registerExtension;
- (void)reloadTableView;
- (void)syncUnmuteWeapp;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateTrimedBanList;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

