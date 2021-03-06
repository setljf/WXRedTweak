//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PeopleNearByListHeaderViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class LbsContactInfoList, MMTableView, NSArray, NSMutableDictionary, NSString, PeopleNearByListHeaderView, SeePeopleNearByLogicController;

@interface PeopleNearByListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, PeopleNearByListHeaderViewDelegate>
{
    PeopleNearByListHeaderView *m_lbsHeaderView;
    LbsContactInfoList *m_lbsContactList;
    MMTableView *m_tableView;
    SeePeopleNearByLogicController *m_logicController;
    NSMutableDictionary *m_userHeaderImageCache;
    long long m_iRoomMemberCount;
    id <PeopleNearByListViewControllerDelegate> m_delegate;
    NSArray *m_lbsPoiList;
    unsigned long long m_abtestResult;
}

- (void).cxx_destruct;
- (void)adjustSubviewRects;
- (id)genLBSPeopleCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)genLBSPoiCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getCachedHeaderImageForUser:(id)arg1;
@property(nonatomic) long long iRoomMemberCount; // @synthesize iRoomMemberCount=m_iRoomMemberCount;
- (id)init;
- (_Bool)isLBSPeopleIndex:(id)arg1;
@property(retain, nonatomic) LbsContactInfoList *lbsContactList; // @synthesize lbsContactList=m_lbsContactList;
@property(retain, nonatomic) NSArray *lbsPoiList; // @synthesize lbsPoiList=m_lbsPoiList;
@property(retain, nonatomic) SeePeopleNearByLogicController *logicController; // @synthesize logicController=m_logicController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onChatRoomNearByBtnClicked;
- (void)reloadWithLbsContactInfoList:(id)arg1;
- (void)reloadWithLbsPoiList:(id)arg1;
- (void)setDelegate:(id)arg1;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=m_tableView;
@property(retain, nonatomic) NSMutableDictionary *userHeaderImageCache; // @synthesize userHeaderImageCache=m_userHeaderImageCache;
- (void)showChatRoomView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

