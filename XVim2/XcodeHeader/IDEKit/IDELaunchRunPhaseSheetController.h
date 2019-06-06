//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDELaunchTestRunPhaseSheetController.h>

@class DVTBorderedView, DVTStackView_AppKitAutolayout, IDEDebuggerSpecifier, IDELaunchSchemeAction, NSButton, NSButtonCell, NSColor, NSMatrix, NSPopUpButton, NSTextField, NSTextView, NSView;

@interface IDELaunchRunPhaseSheetController : IDELaunchTestRunPhaseSheetController
{
    DVTBorderedView *_optionsBorderedView;
    NSMatrix *_debugProcessAsMatrix;
    NSButtonCell *_debugProcessAsMeButtonCell;
    NSMatrix *_launchStyleMatrix;
    NSButtonCell *_waitForAppToLaunchButtonCell;
    NSTextView *_customLaunchCommandsTextView;
    NSButton *_debugExecutableCheckbox;
    DVTStackView_AppKitAutolayout *_infoStackView;
    NSView *_executable_buildConfiguration;
    NSView *_executable_runnable;
    NSView *_executable_user;
    NSView *_executable_launchStyle;
    NSView *_watchLaunchSettingsView;
    NSPopUpButton *_watchInterfacePopup;
    NSPopUpButton *_notificationPayloadPopup;
    NSView *_notificationPayloadSettingsView;
    NSView *_intentExtensionQueryView;
    NSTextField *_intentExtensionQueryTextField;
    NSButton *_TSanCreateBreakpointButton;
    NSButton *_UBSanCreateBreakpointButton;
    NSButton *_MTCCreateBreakpointButton;
    NSColor *_descriptionTextColor;
    int _launchStyleWhenDebuggerSetToNil;
    BOOL _isSupportedApplicationData;
    BOOL _executableHasBeenSelected;
    BOOL _supportsDebugAsDifferentUser;
}

+ (id)keyPathsForValuesAffectingLaunchStyleIsCustomLaunchCommands;
+ (id)keyPathsForValuesAffectingExecutableHasBeenSelected;
+ (void)initialize;
@property(copy) NSColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property BOOL supportsDebugAsDifferentUser; // @synthesize supportsDebugAsDifferentUser=_supportsDebugAsDifferentUser;
@property(nonatomic) BOOL executableHasBeenSelected; // @synthesize executableHasBeenSelected=_executableHasBeenSelected;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)createSanitizerBreakpoint:(id)arg1;
- (void)_enableMallocStackLoggingLite;
- (void)_performSanitizerPauseOnIssuesMigration;
- (void)configureDiagnosticsTab;
- (id)extensionsForAllOptions;
- (void)_updateInfoTab;
- (void)_updateNotificationPopup;
- (void)_updateWatchSettings;
- (BOOL)_runnableIsWatchApp;
- (void)_addMenuItemForWatchInterfaceMenu:(id)arg1 tag:(long long)arg2;
- (void)_updateDebuggerSpecifierAndOtherOptions;
- (void)_notificationPayloadSelected:(id)arg1;
- (void)watchInterfaceSelected:(id)arg1;
- (void)_validateNotificationPopupForTag:(long long)arg1;
- (id)customLaunchCommandsFont;
- (BOOL)launchStyleIsCustomLaunchCommands;
- (void)chooseDebugProcessAs:(id)arg1;
- (void)_runnableDidUpdate;
@property(retain) IDEDebuggerSpecifier *selectedDebuggerSpecifier;
- (void)_updateDebuggerFromOldDebugger:(id)arg1;
- (void)selectDebugExecutable:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)_closeSheet;
- (void)loadView;
- (void)_setupDebugOptions;
- (void)_updateDebugCheckboxes;
- (void)_updateDebugOptionsEnablement;
- (id)selectedTabUserDefaultKey;

// Remaining properties
@property(retain) IDELaunchSchemeAction *runPhase; // @dynamic runPhase;

@end

