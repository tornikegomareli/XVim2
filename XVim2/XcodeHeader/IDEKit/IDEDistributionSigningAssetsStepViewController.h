//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@interface IDEDistributionSigningAssetsStepViewController : IDEDistributionStepViewController
{
    IDEDistributionStepViewController *_actualViewController;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
+ (id)keyPathsForValuesAffectingAdditionalActionTitle;
+ (id)keyPathsForValuesAffectingWantsPreviousAction;
+ (id)keyPathsForValuesAffectingCanGoPrevious;
+ (id)keyPathsForValuesAffectingWantsNextAction;
+ (id)keyPathsForValuesAffectingCanGoNext;
+ (id)keyPathsForValuesAffectingTitle;
+ (Class)actualViewControllerClassForContext:(id)arg1;
@property(retain, nonatomic) IDEDistributionStepViewController *actualViewController; // @synthesize actualViewController=_actualViewController;
- (void).cxx_destruct;
- (void)takeAdditionalAction;
- (id)additionalActionTitle;
- (void)takePreviousAction;
- (BOOL)wantsPreviousAction;
- (BOOL)canGoPrevious;
- (void)takeNextAction;
- (BOOL)wantsNextAction;
- (BOOL)canGoNext;
- (id)title;
- (void)loadView;
- (void)primitiveInvalidate;

@end

