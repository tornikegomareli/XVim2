//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

#import <IDEKit/DVTFilterControlBarTarget-Protocol.h>
#import <IDEKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class DVTFilterControlBar, DVTOutlineViewWithCustomGridDrawing, DVTPopUpButtonCell, IDEMigrationTargetChooserStatePersistence, NSArray, NSMenu, NSMutableIndexSet, NSString, NSTreeController, NSView;

@interface IDESwiftMigrationOptionChooserAssistant : IDEAssistant <NSOutlineViewDataSource, NSOutlineViewDelegate, DVTFilterControlBarTarget>
{
    NSArray *_optionItems;
    NSString *_searchString;
    NSMutableIndexSet *_expandedRowIndexes;
    NSArray *_selectedOptionItems;
    IDEMigrationTargetChooserStatePersistence *_statePersistence;
    DVTFilterControlBar *_filterControlBar;
    DVTOutlineViewWithCustomGridDrawing *_outlineView;
    NSTreeController *_optionItemsController;
}

+ (BOOL)automaticallyNotifiesObserversOfSearchString;
+ (id)keyPathsForValuesAffectingArrangedOptionItems;
+ (id)keyPathsForValuesAffectingCanGoForward;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy) NSArray *optionItems; // @synthesize optionItems=_optionItems;
- (void).cxx_destruct;
- (id)currentUIState;
- (void)loadUIState:(id)arg1;
- (id)stateRepositoryFilePath;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)_attributedStringByHighlightingFindResults:(id)arg1;
- (id)_findResultAttributes;
- (BOOL)validateMenuItem:(id)arg1;
- (void)uncheckSelection:(id)arg1;
- (void)checkSelection:(id)arg1;
- (BOOL)canUncheckSelection;
- (BOOL)canCheckSelection;
- (unsigned long long)_numberOfCheckedItemsAtIndexes:(id)arg1;
- (void)_setChecked:(BOOL)arg1 forOptionItemAtIndexes:(id)arg2;
- (id)_effectiveSelectedRowIndexes;
@property(readonly) DVTPopUpButtonCell *valuePopUpButtonCellTemplate;
@property(readonly, nonatomic) NSString *filterButtonAccessibilityDescription;
@property(readonly, nonatomic) NSString *filterButtonToolTip;
@property(readonly, nonatomic) NSMenu *filterButtonMenu;
@property(readonly, nonatomic) NSString *filterDefinitionIdentifier;
- (void)_restoreSelectedOptionItemsAndExpandedRows;
- (void)_saveSelectedOptionItemsAndExpandedRows;
@property(readonly, copy) NSArray *arrangedOptionItems;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)filterControlBar;
- (void)willGoNextOrFinish;
- (id)nextAssistantIdentifier;
- (BOOL)canGoForward;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSView *view;

@end

