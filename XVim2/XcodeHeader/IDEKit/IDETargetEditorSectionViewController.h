//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDECapsuleViewController-Protocol.h>

@class NSColor, NSImage, NSString;

@interface IDETargetEditorSectionViewController : IDEViewController <IDECapsuleViewController>
{
    id _targetViewController;
}

@property(retain) id targetViewController; // @synthesize targetViewController=_targetViewController;
- (void).cxx_destruct;
@property(readonly) BOOL canDrag;
@property(readonly) BOOL canSelect;
@property(readonly) BOOL disclosedByDefault;
@property(readonly, copy) NSString *titleForDisplay;
- (void)loadView;

// Remaining properties
@property(retain) NSColor *backgroundColor;
@property BOOL canAddItems;
@property(readonly) BOOL canRemove;
@property BOOL canRemoveItems;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canUndisclose;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(readonly) Class superclass;
@property(readonly) BOOL wantsDisclosureButtonHidden;

@end

