//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDESymbolNavigator, NSArray, NSImage, NSNull, NSOperationQueue, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface IDESymbolNavigatorGroup : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSOperationQueue *_queue;
    NSArray *_children;
    NSArray *_newChildren;
    NSString *_subtitle;
    unsigned long long _generation;
    IDESymbolNavigator *_navigator;
}

+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
+ (id)keyPathsForValuesAffectingNavigableItem_subtitle;
@property __weak IDESymbolNavigator *navigator; // @synthesize navigator=_navigator;
@property(readonly, copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly) NSString *symbolKindIdentifier;
- (void)fetchSymbols:(id)arg1 lastOperation:(id)arg2;
- (id)children;
- (void)refreshWithIndex:(id)arg1 generation:(unsigned long long)arg2 lastOperation:(id)arg3;
- (void)refreshWithIndex:(id)arg1 lastOperation:(id)arg2;
- (id)childrenWithIndex:(id)arg1;
- (id)_unsortedSymbolsWithIndex:(id)arg1;
- (id)unsortedSymbolsWithIndex:(id)arg1;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
- (id)calculateSubtitleWithIndex:(id)arg1;
- (unsigned long long)_userSymbolCount;
- (id)_subtitleWithUserCount:(unsigned long long)arg1 systemCount:(unsigned long long)arg2;
- (id)navigatorSymbolForIndexSymbol:(id)arg1;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_name;
@property(readonly) BOOL isInProject;
- (id)initWithOperationQueue:(id)arg1 generation:(unsigned long long)arg2 symbolNavigator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

