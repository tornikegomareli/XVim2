//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTToolbarViewController.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>

@class DVTObservingToken, IDEEditorArea, NSString;

@interface IDEEditorMaximizedComparisonModeToolbarViewController : DVTToolbarViewController <NSMenuDelegate>
{
    DVTObservingToken *_sourceControlManagerObserver;
    DVTObservingToken *_outputSelectionObserver;
    IDEEditorArea *_observedEditorArea;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)editorDocumentSupportsCodeReview;
- (void)computeButtonEnabledState;
- (id)codeReviewAvailableImage;
- (id)initWithToolbarItemIdentifier:(id)arg1 window:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

