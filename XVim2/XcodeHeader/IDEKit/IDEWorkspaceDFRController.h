//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDEWorkspaceDFRDebugBarItemFactoryControlDelegate-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDEWorkspaceDFRDebugBarItemFactory, IDEWorkspaceWindowController, NSButton, NSPointerArray, NSPopoverTouchBarItem, NSSegmentedControl, NSString;

@interface IDEWorkspaceDFRController : NSObject <IDEWorkspaceDFRDebugBarItemFactoryControlDelegate, DVTInvalidation>
{
    BOOL _stopProcessChooserEnabled;
    IDEWorkspaceWindowController *_workspaceWindowController;
    unsigned long long _debugBarFactoryType;
    CDUnknownBlockType _stopHandler;
    NSPopoverTouchBarItem *_stopPopoverItem;
    NSPopoverTouchBarItem *_runPopoverItem;
    DVTObservingToken *_workspaceFinishedLoadingObserver;
    DVTObservingToken *_toolbarButtonImageObserver;
    DVTObservingToken *_gpuTraceObserverToken;
    IDEWorkspaceDFRDebugBarItemFactory *_debugBarItemFactory;
    NSButton *_continueOrPauseButton;
    NSPointerArray *_trackedDebugSteppingControls;
    NSPointerArray *_trackedStopButtons;
    CDUnknownBlockType _debugSessionStateObservationHandler;
    CDUnknownBlockType _traceInferiorSessionObservationHandler;
    CDUnknownBlockType _lastActiveEditorObservationHandler;
    CDUnknownBlockType _simpleFilesFocusedObservationHandler;
    DVTObservingToken *_breakpointsActivatedObservingToken;
    DVTObservingToken *_debugSessionStateObservingToken;
    DVTObservingToken *_debugSessionObservingToken;
    DVTObservingToken *_executionTrackersObservingToken;
    DVTObservingToken *_lastActiveEditorObservingToken;
    DVTObservingToken *_traceInferiorSessionObservingToken;
    DVTObservingToken *_simpleFilesFocusedObservingToken;
    DVTObservingToken *_stackFrameObservingToken;
    DVTObservingToken *_workspaceIdleObservingToken;
    NSSegmentedControl *_debugExtrasControl;
}

+ (void)initialize;
@property(retain) NSSegmentedControl *debugExtrasControl; // @synthesize debugExtrasControl=_debugExtrasControl;
@property(retain) DVTObservingToken *workspaceIdleObservingToken; // @synthesize workspaceIdleObservingToken=_workspaceIdleObservingToken;
@property(retain) DVTObservingToken *stackFrameObservingToken; // @synthesize stackFrameObservingToken=_stackFrameObservingToken;
@property(retain) DVTObservingToken *simpleFilesFocusedObservingToken; // @synthesize simpleFilesFocusedObservingToken=_simpleFilesFocusedObservingToken;
@property(retain) DVTObservingToken *traceInferiorSessionObservingToken; // @synthesize traceInferiorSessionObservingToken=_traceInferiorSessionObservingToken;
@property(retain) DVTObservingToken *lastActiveEditorObservingToken; // @synthesize lastActiveEditorObservingToken=_lastActiveEditorObservingToken;
@property(retain) DVTObservingToken *executionTrackersObservingToken; // @synthesize executionTrackersObservingToken=_executionTrackersObservingToken;
@property(retain) DVTObservingToken *debugSessionObservingToken; // @synthesize debugSessionObservingToken=_debugSessionObservingToken;
@property(retain) DVTObservingToken *debugSessionStateObservingToken; // @synthesize debugSessionStateObservingToken=_debugSessionStateObservingToken;
@property(retain) DVTObservingToken *breakpointsActivatedObservingToken; // @synthesize breakpointsActivatedObservingToken=_breakpointsActivatedObservingToken;
@property(copy) CDUnknownBlockType simpleFilesFocusedObservationHandler; // @synthesize simpleFilesFocusedObservationHandler=_simpleFilesFocusedObservationHandler;
@property(copy) CDUnknownBlockType lastActiveEditorObservationHandler; // @synthesize lastActiveEditorObservationHandler=_lastActiveEditorObservationHandler;
@property(copy) CDUnknownBlockType traceInferiorSessionObservationHandler; // @synthesize traceInferiorSessionObservationHandler=_traceInferiorSessionObservationHandler;
@property(copy) CDUnknownBlockType debugSessionStateObservationHandler; // @synthesize debugSessionStateObservationHandler=_debugSessionStateObservationHandler;
@property(retain) NSPointerArray *trackedStopButtons; // @synthesize trackedStopButtons=_trackedStopButtons;
@property(retain) NSPointerArray *trackedDebugSteppingControls; // @synthesize trackedDebugSteppingControls=_trackedDebugSteppingControls;
@property __weak NSButton *continueOrPauseButton; // @synthesize continueOrPauseButton=_continueOrPauseButton;
@property(retain, nonatomic) IDEWorkspaceDFRDebugBarItemFactory *debugBarItemFactory; // @synthesize debugBarItemFactory=_debugBarItemFactory;
@property(retain) DVTObservingToken *gpuTraceObserverToken; // @synthesize gpuTraceObserverToken=_gpuTraceObserverToken;
@property(retain) DVTObservingToken *toolbarButtonImageObserver; // @synthesize toolbarButtonImageObserver=_toolbarButtonImageObserver;
@property(retain) DVTObservingToken *workspaceFinishedLoadingObserver; // @synthesize workspaceFinishedLoadingObserver=_workspaceFinishedLoadingObserver;
@property(retain) NSPopoverTouchBarItem *runPopoverItem; // @synthesize runPopoverItem=_runPopoverItem;
@property(retain) NSPopoverTouchBarItem *stopPopoverItem; // @synthesize stopPopoverItem=_stopPopoverItem;
@property(copy) CDUnknownBlockType stopHandler; // @synthesize stopHandler=_stopHandler;
@property BOOL stopProcessChooserEnabled; // @synthesize stopProcessChooserEnabled=_stopProcessChooserEnabled;
@property(nonatomic) unsigned long long debugBarFactoryType; // @synthesize debugBarFactoryType=_debugBarFactoryType;
@property __weak IDEWorkspaceWindowController *workspaceWindowController; // @synthesize workspaceWindowController=_workspaceWindowController;
- (void).cxx_destruct;
- (BOOL)stopActionShouldPromptToChooseProcessForDebugBarItemFactory:(id)arg1;
- (void)debugBarItemFactory:(id)arg1 stopPopoverFunctionBarItemWasCreated:(id)arg2;
- (id)stopControlForDebugBarItemFactory:(id)arg1;
- (id)debugPauseResumeControlForDebugBarItemFactory:(id)arg1;
- (id)debugSteppingSegmentedControlForDebugBarItemFactory:(id)arg1;
- (id)debugExtrasControlForDebugBarItemFactory:(id)arg1;
- (id)debugBreakpointsControlForDebugBarItemFactory:(id)arg1;
- (void)cancelExecutionTracker:(id)arg1;
- (id)_imageForExecutionTracker:(id)arg1;
- (void)_configureStopPopoverItem:(id)arg1;
- (void)_updateOnlyAllowStepByInstructionBehaviorForTrackedControls;
- (id)_activeDebugBarContentProviderWithClassName:(id)arg1;
- (void)steppingSegmentedControlAction:(id)arg1;
- (id)_makeDebugSteppingSegmentedControl;
- (void)_cancelStackFrameObserver;
- (void)_initializeStackFrameObserver;
- (id)_activeDebugBar;
- (void)_invokeExtraDebuggerAction:(id)arg1;
- (void)_updateDebugExtrasControl;
- (id)_makeDebugExtrasControl;
- (id)_appearanceOverrideItemStateForDebugBarContentProviderWithClassName:(id)arg1;
- (id)_debugBarControlButtonForContentProviderWithClassName:(id)arg1;
- (void)updateButtonsForDebugSessionState:(int)arg1;
- (void)activateBreakpointsAction:(id)arg1;
- (id)_makeDebugBreakpointsButton;
- (void)stopButtonAction:(id)arg1;
- (id)makeStopButtonWithEnabled:(BOOL)arg1;
- (id)stopItemWithIdentifier:(id)arg1;
- (id)_makeDebugPauseContinueButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)_identifierIsContained:(id)arg1 inItemsOnBar:(id)arg2;
- (void)updateDebuggerControlsGroup:(id)arg1 withIdentifier:(id)arg2;
- (id)debugControlsItemWithIdentifier:(id)arg1;
- (BOOL)isSimpleFilesFocusedObservationRegistered;
- (void)_callSimpleFilesFocusedObservationHandlerWithState:(BOOL)arg1;
- (void)registerSimpleFilesFocusedObservationForWorkspaceWindowController:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (BOOL)isTraceInferiorSessionObservationRegistered;
- (void)_callTraceInferiorSessionObservationHandlerWithController:(id)arg1;
- (void)registerTraceInferiorSessionObservationForWorkspaceWindowController:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (BOOL)isLastActiveEditorObservationRegistered;
- (void)_callLastActiveEditorObservationHandlerWithState:(id)arg1;
- (void)registerLastActiveEditorObservationForWorkspaceWindowController:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (BOOL)isDebugSessionObservationRegistered;
- (void)registerDebugSessionObservation;
- (BOOL)isDebugSessionStateObservationRegistered;
- (void)callDebugSessionStateObservationHandlerWithState:(int)arg1;
- (void)registerDebugSessionStateObservationForWorkspaceWindowController:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_configureApplicationTouchBarCustomization;
- (void)_updateControlsForWorkspaceIdleState:(BOOL)arg1;
- (void)_workspaceIdleStateNeedsUpdate;
- (void)_cancelWorkspaceIdleTracking;
- (void)_initializeWorkspaceIdleTracking;
- (BOOL)isGPUTraceForWindowController:(id)arg1;
- (id)_gpuControllerForWorkspaceWindow:(id)arg1;
- (id)_delegateForDebugBarType:(unsigned long long)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspaceWindowController:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

