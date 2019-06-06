//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDETemplateInstantiationAssistant.h>

#import <IDEKit/NSComboBoxDataSource-Protocol.h>

@class IDETemplateOptionsView, NSArray, NSComboBox, NSMutableDictionary, NSString, NSTextField;

@interface IDETemplateOptionsAssistant : IDETemplateInstantiationAssistant <NSComboBoxDataSource>
{
    IDETemplateOptionsView *_mainView;
    NSArray *_indexClassNames;
    BOOL _fetchedIndexClassNames;
    NSArray *_classNames;
    NSComboBox *_classComboBox;
    NSMutableDictionary *_controlsForOptionIds;
    BOOL _canGoForward;
    NSTextField *_firstTextField;
    NSArray *_sortedPrimaryOptions;
}

@property(readonly) NSArray *sortedPrimaryOptions; // @synthesize sortedPrimaryOptions=_sortedPrimaryOptions;
@property(retain) NSTextField *firstTextField; // @synthesize firstTextField=_firstTextField;
@property BOOL canGoForward; // @synthesize canGoForward=_canGoForward;
- (void).cxx_destruct;
- (id)comboBox:(id)arg1 completedString:(id)arg2;
- (unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (id)classNamesForComboBox:(id)arg1;
- (void)computeIndexClassNamesIfNeeded;
- (void)writeStateToUserDefaults;
- (void)restoreSelectionFromUserDefaults;
- (struct CGRect)_frameForControl:(id)arg1 option:(id)arg2 mainViewBounds:(struct CGRect)arg3 minLabelWidth:(double)arg4;
- (void)setupOptionViews;
@property(readonly) NSArray *additionalSortedOptions;
@property(readonly) NSArray *additionalOptions;
- (double)requiredViewSpacingForOption:(id)arg1;
- (id)createLabelForOption:(id)arg1;
- (id)createControlForOption:(id)arg1 withOptionArray:(id)arg2;
- (id)_valueProvidingOptionForOption:(id)arg1 fromOptionArray:(id)arg2;
- (void)_setControl:(id)arg1 forOptionIdentifier:(id)arg2;
- (id)controlForOptionIdentifier:(id)arg1;
- (id)assistantTitle;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)nextAssistantIdentifier;
- (void)updateOptions:(id)arg1;
- (void)setAssistantContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

