//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionOptionCheckboxViewController.h>

@class IDEDistributionOptionUploadBitcodeState, NSError;

@interface IDEDistributionOptionUploadBitcodeViewController : IDEDistributionOptionCheckboxViewController
{
    IDEDistributionOptionUploadBitcodeState *_state;
    NSError *_stateError;
}

+ (id)keyPathsForValuesAffectingCheckboxValue;
@property(retain, nonatomic) NSError *stateError; // @synthesize stateError=_stateError;
@property(retain, nonatomic) IDEDistributionOptionUploadBitcodeState *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)loadContent;
- (void)setCheckboxValue:(BOOL)arg1;
- (BOOL)checkboxValue;
- (id)checkboxTitle;
- (BOOL)checkboxEnabled;
- (id)checkboxDescription;
- (BOOL)needsInteraction;
- (id)initWithOption:(id)arg1;

@end

