//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTGradientImageButton.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSImage, NSString;

@interface IDEStepGradientImageButton : DVTGradientImageButton <DVTInvalidation>
{
    id _optionMonitor;
    BOOL _onlyAllowAllStepByInstructionBehavior;
    NSImage *_stepImage;
    NSImage *_stepSuspendingOtherThreadsImage;
    NSImage *_stepByInstructionImage;
    SEL _stepAction;
    SEL _stepSuspendingOtherThreadsAction;
    SEL _stepByInstructionAction;
}

+ (BOOL)_areOnlyControlShiftKeysPressed:(id)arg1;
+ (BOOL)_isOnlyTheControlKeyPressed:(id)arg1;
+ (void)initialize;
@property SEL stepByInstructionAction; // @synthesize stepByInstructionAction=_stepByInstructionAction;
@property(copy) NSImage *stepByInstructionImage; // @synthesize stepByInstructionImage=_stepByInstructionImage;
@property SEL stepSuspendingOtherThreadsAction; // @synthesize stepSuspendingOtherThreadsAction=_stepSuspendingOtherThreadsAction;
@property(copy) NSImage *stepSuspendingOtherThreadsImage; // @synthesize stepSuspendingOtherThreadsImage=_stepSuspendingOtherThreadsImage;
@property SEL stepAction; // @synthesize stepAction=_stepAction;
@property(copy) NSImage *stepImage; // @synthesize stepImage=_stepImage;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_onlyAllowAllStepByInstructionBehavior:(BOOL)arg1;
- (void)_changeToStepByInstructionButton;
- (void)_changeToStepSuspendingOtherThreadsButton;
- (void)_changeToStepButton;
- (void)_updateButtonImageAndAction:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

