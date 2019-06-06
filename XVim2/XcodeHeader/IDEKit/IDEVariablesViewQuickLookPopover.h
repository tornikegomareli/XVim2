//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEKit/NSPopoverDelegate-Protocol.h>

@class DVTObservingToken, NSButton, NSImageView, NSLayoutConstraint, NSPopover, NSProgressIndicator, NSString, NSTextField, NSView;
@protocol IDEDataValue, IDEVariablesViewQuickLookProvider;

@interface IDEVariablesViewQuickLookPopover : NSViewController <NSPopoverDelegate>
{
    id <IDEVariablesViewQuickLookProvider> _quickLookProvider;
    DVTObservingToken *_quickLookProviderIsReadyObserver;
    id <IDEDataValue> _dataValue;
    BOOL _popoverIsAnimatingIn;
    BOOL _quickLookProviderDidFinishLoadingWasDeferred;
    int _openWithExternalEditorSupport;
    NSPopover *_popover;
    NSView *_defaultQuickLookView;
    NSImageView *_defaultQuickLookIcon;
    NSViewController *_quickLookProviderViewController;
    NSImageView *_quickLookViewIcon;
    NSTextField *_quickLookViewTitle;
    NSButton *_quickLookOpenWithEditorButton;
    NSView *_quickLookViewContainer;
    NSView *_quickLookTitleView;
    NSProgressIndicator *_progressIndicator;
    NSLayoutConstraint *_quickLookViewContainerDefaultWidth;
    NSLayoutConstraint *_quickLookViewContainerDefaultHeight;
    NSLayoutConstraint *_quickLookContainerViewTopSpaceConstraint;
    NSView *_errorView;
    NSImageView *_errorViewWarningIcon;
    NSImageView *_errorViewVariableTypeIcon;
    NSTextField *_errorViewVariableName;
    NSTextField *_errorMessageLabel;
}

@property(retain) NSTextField *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
@property(retain) NSTextField *errorViewVariableName; // @synthesize errorViewVariableName=_errorViewVariableName;
@property(retain) NSImageView *errorViewVariableTypeIcon; // @synthesize errorViewVariableTypeIcon=_errorViewVariableTypeIcon;
@property(retain) NSImageView *errorViewWarningIcon; // @synthesize errorViewWarningIcon=_errorViewWarningIcon;
@property(retain) NSView *errorView; // @synthesize errorView=_errorView;
@property(retain) NSLayoutConstraint *quickLookContainerViewTopSpaceConstraint; // @synthesize quickLookContainerViewTopSpaceConstraint=_quickLookContainerViewTopSpaceConstraint;
@property(retain) NSLayoutConstraint *quickLookViewContainerDefaultHeight; // @synthesize quickLookViewContainerDefaultHeight=_quickLookViewContainerDefaultHeight;
@property(retain) NSLayoutConstraint *quickLookViewContainerDefaultWidth; // @synthesize quickLookViewContainerDefaultWidth=_quickLookViewContainerDefaultWidth;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSView *quickLookTitleView; // @synthesize quickLookTitleView=_quickLookTitleView;
@property(retain) NSView *quickLookViewContainer; // @synthesize quickLookViewContainer=_quickLookViewContainer;
@property(retain) NSButton *quickLookOpenWithEditorButton; // @synthesize quickLookOpenWithEditorButton=_quickLookOpenWithEditorButton;
@property(retain) NSTextField *quickLookViewTitle; // @synthesize quickLookViewTitle=_quickLookViewTitle;
@property(retain) NSImageView *quickLookViewIcon; // @synthesize quickLookViewIcon=_quickLookViewIcon;
@property(retain) NSViewController *quickLookProviderViewController; // @synthesize quickLookProviderViewController=_quickLookProviderViewController;
@property(retain) NSImageView *defaultQuickLookIcon; // @synthesize defaultQuickLookIcon=_defaultQuickLookIcon;
@property(retain) NSView *defaultQuickLookView; // @synthesize defaultQuickLookView=_defaultQuickLookView;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
@property(retain) id <IDEDataValue> dataValue; // @synthesize dataValue=_dataValue;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)_cancelLoadingOfCurrentQuickLookProviderIfNecessary;
- (id)_createNonExistentFilePath;
- (void)_openURLInExternalEditor:(id)arg1;
- (void)_writeToTemporaryURLThenOpenIt;
- (void)openWithEditor:(id)arg1;
- (void)_useErrorMessage:(id)arg1 forDataValueNamed:(id)arg2 usingIcon:(id)arg3;
- (void)useMessageFromError:(id)arg1 forDataValueNamed:(id)arg2 usingIcon:(id)arg3;
- (void)useDefaultQuickLookForDataValue:(id)arg1 usingIcon:(id)arg2;
- (id)_externalApplicationURL;
- (void)_setupOpenWithExternalEditorButton;
- (struct CGRect)_maxContentSizeForQuickLookProvider;
- (void)_quickLookProviderDidFinishLoading;
- (void)_useQuickLookProvider:(id)arg1 forDataValue:(id)arg2 usingIcon:(id)arg3 showTitleView:(BOOL)arg4;
- (void)useQuickLookProvider:(id)arg1 forDataValue:(id)arg2 usingIcon:(id)arg3;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

