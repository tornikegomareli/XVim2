//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorModeViewController.h>

@interface IDEEditorBasicMode : IDEEditorModeViewController
{
}

+ (id)stateSavingIdentifiers;
- (void)discardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (id)editorContexts;
- (void)_setPersistentRepresentation:(id)arg1 forIdentifier:(id)arg2;
- (id)_persistentRepresentationForIdentifier:(id)arg1;
- (void)_stampEditorLayoutConfiguration:(id)arg1 forIdentifier:(id)arg2;
- (id)_liftEditorLayoutConfigurationForIdentifier:(id)arg1;
- (id)_stealPrimaryEditorContext;
- (BOOL)canCreateSplitForNavigationHUD;
- (void)loadView;

@end

