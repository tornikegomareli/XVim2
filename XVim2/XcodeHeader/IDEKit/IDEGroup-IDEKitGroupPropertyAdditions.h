//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEGroup.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface IDEGroup (IDEKitGroupPropertyAdditions) <IDEKeyDrivenNavigableItemRepresentedObject>
+ (id)keyPathsForValuesAffectingNavigableItem_representedURL;
+ (id)keyPathsForValuesAffectingNavigableItem_documentType;
+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
+ (id)keyPathsForValuesAffectingNavigableItem_image;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlServerStatusFlag;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlServerStatus;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlLocalStatusFlag;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlLocalStatus;
+ (id)keyPathsForValuesAffectingHandlesIdeInspectedCanClearRelativeLocation;
+ (id)keyPathsForValuesAffectingIdeInspectedIsNameEditable;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly) unsigned long long navigableItem_conflictStateForUpdateOrMerge;
- (unsigned long long)navigableItem_sourceControlServerStatusFlag;
@property(readonly) NSString *navigableItem_sourceControlServerStatus;
- (unsigned long long)navigableItem_sourceControlLocalStatusFlag;
@property(readonly) NSString *navigableItem_sourceControlLocalStatus;
- (id)ide_openQuicklySubpathImage;
- (id)ide_generateOutlineItemGivenParent:(id)arg1 root:(long long)arg2;
- (void)ide_enumerateChildrenPopulatingVisitedContainers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)ide_shouldIncludeInExploration;
- (id)ideInspectedRelativeLocationContainingFolderPlaceholder;
- (id)ideInspectedRelativeLocationPlaceholder;
- (BOOL)ideInspectedCanClearRelativeLocation;
- (BOOL)ideInspectedRelativeLocationShouldChooseDirectory;
- (BOOL)ideInspectedRelativeLocationShouldChooseFile;
- (BOOL)ideInspectedIsNameEditable;
- (id)applicableInspectorSlicesForCategory:(id)arg1 suggestedSlices:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) NSString *navigableItem_name;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end

