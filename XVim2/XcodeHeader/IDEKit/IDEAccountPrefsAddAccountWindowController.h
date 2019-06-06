//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/NSTableViewDataSource-Protocol.h>
#import <IDEKit/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, NSArray, NSButton, NSImage, NSString, NSTableView, NSURL, NSWindow;

@interface IDEAccountPrefsAddAccountWindowController : NSWindowController <NSTableViewDelegate, NSTableViewDataSource>
{
    CDUnknownBlockType _completion;
    IDEAccountPrefsAddAccountWindowController *_currentWindowController;
    NSURL *_filterAccountsURL;
    NSImage *_cachedRepositoryImage;
    BOOL _hostedAccountsOnly;
    NSWindow *_hostWindow;
    long long _accountType;
    NSString *_endpointIdentifier;
    NSTableView *_table;
    NSButton *_continueButton;
    DVTBorderedView *_accountTypeListBorderView;
    NSArray *_accountTypesSnapshot;
}

@property(retain, nonatomic) NSArray *accountTypesSnapshot; // @synthesize accountTypesSnapshot=_accountTypesSnapshot;
@property(retain) DVTBorderedView *accountTypeListBorderView; // @synthesize accountTypeListBorderView=_accountTypeListBorderView;
@property __weak NSButton *continueButton; // @synthesize continueButton=_continueButton;
@property __weak NSTableView *table; // @synthesize table=_table;
@property(retain, nonatomic) NSString *endpointIdentifier; // @synthesize endpointIdentifier=_endpointIdentifier;
@property(nonatomic) long long accountType; // @synthesize accountType=_accountType;
@property(nonatomic) __weak NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(nonatomic) BOOL hostedAccountsOnly; // @synthesize hostedAccountsOnly=_hostedAccountsOnly;
- (void).cxx_destruct;
- (void)cancelClick:(id)arg1;
- (void)_endSheet:(long long)arg1;
- (void)continueClick:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)accountTypeFromEndpoint:(id)arg1;
- (id)accountType:(id)arg1 identifier:(id)arg2 icon:(id)arg3 status:(long long)arg4;
- (id)sourceControlAccountTypes;
- (id)accountTypes;
- (void)displayAccountsValidForURL:(id)arg1;
- (void)beginSheet:(id)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)windowNibName;
- (void)reloadTableData;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

