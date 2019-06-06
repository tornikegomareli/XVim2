//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

//#import <IDEKit/NSUserInterfaceValidations-Protocol.h>
#import <AppKit/AppKit.h>

@class DVTFindBar, DVTNotificationToken, DVTObservingToken, DVTScopeBarsManager, IDEAuxiliaryEditor, IDEAuxiliaryEditorContext, IDEEditorContext, IDEEditorDocument, IDEFileTextSettings, NSScrollView, NSSet;
@protocol DVTTextFindable, IDEEditorDelegate;

@interface IDEEditor : IDEViewController <NSUserInterfaceValidations>
{
    DVTFindBar *_findBar;
    DVTNotificationToken *_documentDidChangeNotificationToken;
    DVTNotificationToken *_documentForNavBarStructureDidChangeNotificationToken;
    DVTObservingToken *_documentFileURLObservingToken;
    BOOL _discardsFindResultsWhenContentChanges;
    id <IDEEditorDelegate> _delegate;
    IDEEditorDocument *_document;
    IDEEditorDocument *_documentForNavBarStructure;
    id <DVTTextFindable> _findableObject;
    IDEFileTextSettings *_fileTextSettings;
    IDEAuxiliaryEditor *_auxiliaryEditor;
    IDEAuxiliaryEditorContext *_auxiliaryEditorContext;
    IDEEditorContext *_editorContext;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (BOOL)canProvideCurrentSelectedItems;
@property(retain) IDEEditorContext *editorContext; // @synthesize editorContext=_editorContext;
@property(retain, nonatomic) IDEAuxiliaryEditorContext *auxiliaryEditorContext; // @synthesize auxiliaryEditorContext=_auxiliaryEditorContext;
@property(retain, nonatomic) IDEAuxiliaryEditor *auxiliaryEditor; // @synthesize auxiliaryEditor=_auxiliaryEditor;
@property(retain, nonatomic) IDEFileTextSettings *fileTextSettings; // @synthesize fileTextSettings=_fileTextSettings;
@property(retain, nonatomic) id <DVTTextFindable> findableObject; // @synthesize findableObject=_findableObject;
@property BOOL discardsFindResultsWhenContentChanges; // @synthesize discardsFindResultsWhenContentChanges=_discardsFindResultsWhenContentChanges;
@property(retain, nonatomic) IDEEditorDocument *documentForNavBarStructure; // @synthesize documentForNavBarStructure=_documentForNavBarStructure;
@property(retain) IDEEditorDocument *document; // @synthesize document=_document;
@property(retain) id <IDEEditorDelegate> delegate; // @synthesize delegate=_delegate;
//- (void).cxx_destruct;
@property(readonly) NSSet *applicableLibraryExtensionIDs;
- (void)shouldNavigateAway:(CDUnknownBlockType)arg1;
- (BOOL)shouldCloseDocumentWhenClosingEditor;
- (BOOL)hideGeniusCategory:(id)arg1 results:(id)arg2;
- (void)didSetupEditor;
- (void)navigateToAnnotationWithRepresentedObject:(id)arg1 wantsIndicatorAnimation:(BOOL)arg2 exploreAnnotationRepresentedObject:(id)arg3;
- (void)selectDocumentLocations:(id)arg1;
- (id)representedObjectForGeniusResultsPreviousDocumentLocation:(id)arg1;
- (id)navigableItemArchivableRepresentationForRepresentedObject:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)primitiveInvalidate;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
@property(readonly) NSScrollView *mainScrollView;
@property(readonly) DVTScopeBarsManager *scopeBarsManager;
- (void)applyStateDictionaryFromPreviousEditor:(id)arg1;
@property(readonly, getter=isPrimaryEditor) BOOL primaryEditor;
- (void)setupContextMenuWithMenu:(id)arg1 withContext:(id)arg2;
- (void)setupNavigateMenu:(id)arg1;
- (void)setupEditorMenu:(id)arg1;
- (void)takeFocus;
- (void)invalidateFindBarResults;
@property(readonly) DVTFindBar *findBar; // @synthesize findBar=_findBar;
- (void)editorContextDidHideFindBar;
- (id)createFindBar;
@property(readonly) BOOL providesOwnFindBar;
@property(readonly) BOOL findBarSupported;
- (id)_getUndoManager:(BOOL)arg1;
- (id)undoManager;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (int)editorMode;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (id)_initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initUsingDefaultNib;
- (BOOL)wantsToSuppressEditorAreaFunctionBar;

@end

