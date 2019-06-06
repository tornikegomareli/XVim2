//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionOptionViewController.h>

@class NSArray, NSLayoutConstraint, NSPopUpButton, NSString;

@interface IDEDistributionOptionODRViewController : IDEDistributionOptionViewController
{
    NSLayoutConstraint *_popupLeading;
    NSLayoutConstraint *_popupWidth;
    NSLayoutConstraint *_comboBoxWidth;
    NSPopUpButton *_popup;
    NSArray *_manifestPaths;
    NSString *_inputValue;
    NSArray *_inputHistory;
}

+ (id)keyPathsForValuesAffectingCanGoNext;
@property(retain) NSArray *inputHistory; // @synthesize inputHistory=_inputHistory;
@property(retain) NSString *inputValue; // @synthesize inputValue=_inputValue;
@property(readonly) NSArray *manifestPaths; // @synthesize manifestPaths=_manifestPaths;
@property(retain) NSPopUpButton *popup; // @synthesize popup=_popup;
@property(retain) NSLayoutConstraint *comboBoxWidth; // @synthesize comboBoxWidth=_comboBoxWidth;
@property(retain) NSLayoutConstraint *popupWidth; // @synthesize popupWidth=_popupWidth;
@property(retain) NSLayoutConstraint *popupLeading; // @synthesize popupLeading=_popupLeading;
- (void).cxx_destruct;
- (void)willGoNext;
- (BOOL)canGoNext;
- (BOOL)canAppendPathComponentToBaseURL:(id)arg1;
- (BOOL)needsInteraction;
- (void)hostResources:(id)arg1;
- (void)embedResources:(id)arg1;
- (void)viewDidLoad;
- (id)initWithOption:(id)arg1;

@end

