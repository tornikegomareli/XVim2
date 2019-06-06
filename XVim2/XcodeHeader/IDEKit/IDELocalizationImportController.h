//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDEComparisonEditorDataSource-Protocol.h>
#import <IDEKit/IDELocalizationController-Protocol.h>
#import <IDEKit/IDEReviewFilesDataSource-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DVTStackBacktrace, IDELocalizationImportAction, IDELocalizationImporter, IDENavigableItem, IDENavigableItemAsyncFilteringCoordinator, IDEReviewFilesViewController, NSMutableDictionary, NSString;

@interface IDELocalizationImportController : NSWindowController <IDEComparisonEditorDataSource, IDEReviewFilesDataSource, IDELocalizationController, DVTInvalidation>
{
    DVTBorderedView *layoutView;
    IDENavigableItemAsyncFilteringCoordinator *_issueNavItemCoordinator;
    IDENavigableItemAsyncFilteringCoordinator *_fileNavItemCoordinator;
    IDEReviewFilesViewController *_reviewFilesViewController;
    DVTObservingToken *_comparisonEditorObservingToken;
    NSMutableDictionary *_filesToTempDocuments;
    BOOL _complete;
    IDELocalizationImportAction *_action;
    IDELocalizationImporter *_worker;
    IDENavigableItem *_workspaceNavigableItem;
    IDENavigableItem *_fileSystemNavigableItem;
    IDENavigableItem *_flatNavigableItem;
    IDENavigableItem *_issueNavigableItem;
}

+ (void)initialize;
@property(retain) IDENavigableItem *issueNavigableItem; // @synthesize issueNavigableItem=_issueNavigableItem;
@property(retain) IDENavigableItem *flatNavigableItem; // @synthesize flatNavigableItem=_flatNavigableItem;
@property(retain) IDENavigableItem *fileSystemNavigableItem; // @synthesize fileSystemNavigableItem=_fileSystemNavigableItem;
@property(retain) IDENavigableItem *workspaceNavigableItem; // @synthesize workspaceNavigableItem=_workspaceNavigableItem;
@property BOOL complete; // @synthesize complete=_complete;
@property(retain) IDELocalizationImporter *worker; // @synthesize worker=_worker;
@property(retain, nonatomic) IDELocalizationImportAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (double)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 rowHeightForNavigableItem:(id)arg3;
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
- (id)workspace;
- (BOOL)shouldSelectFirstDiff;
- (id)documentForSecondaryDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)documentForPrimaryDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_documentForLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)import:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_beginReviewFiles:(id)arg1 continueBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (void)cancel;
- (void)startLocalizationOperationForWorkspace:(id)arg1 buildParameters:(id)arg2;
- (id)_configuredOpenPanel;
- (void)primitiveInvalidate;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

