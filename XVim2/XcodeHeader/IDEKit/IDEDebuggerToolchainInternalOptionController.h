//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDELaunchActionOptionViewController.h>

@class DVTDelayedInvocation, DVTObservingToken, NSPopUpButton;

@interface IDEDebuggerToolchainInternalOptionController : IDELaunchActionOptionViewController
{
    DVTObservingToken *_toolchainStateToken;
    DVTDelayedInvocation *_popupCoalescer;
    NSPopUpButton *_toolchainPopup;
}

+ (BOOL)availableForScheme:(id)arg1;
@property __weak NSPopUpButton *toolchainPopup; // @synthesize toolchainPopup=_toolchainPopup;
- (void).cxx_destruct;
- (void)toolchainSelected:(id)arg1;
- (void)updateToolchainsPopup;
- (void)loadView;
- (void)primitiveInvalidate;

@end

