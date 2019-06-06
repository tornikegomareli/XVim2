//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTObservingToken, DVTStackBacktrace, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface IDEGeniusResultsGraphNode : NSObject <IDEKeyDrivenNavigableItemRepresentedObject, DVTInvalidation>
{
    DVTObservingToken *_manualDomainRootChildItemsObservingToken;
    BOOL _singleResultsCategory;
    BOOL _hideSubItemCount;
    BOOL _showHierarchyForSingleResultsCategory;
    int _type;
    NSString *_identifier;
    NSImage *_image;
    NSString *_name;
    NSArray *_subitems;
}

+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
+ (id)keyPathsForValuesAffectingNavigableItem_isLeaf;
+ (id)_rootNodeForGeniusResults:(id)arg1 editor:(id)arg2 includeJumpToCounterpartCategory:(BOOL)arg3 emptyCategoriesNavigateToEmptyEditor:(BOOL)arg4;
+ (void)initialize;
@property(readonly, nonatomic) BOOL showHierarchyForSingleResultsCategory; // @synthesize showHierarchyForSingleResultsCategory=_showHierarchyForSingleResultsCategory;
@property(readonly, nonatomic) BOOL hideSubItemCount; // @synthesize hideSubItemCount=_hideSubItemCount;
@property(copy, nonatomic) NSArray *subitems; // @synthesize subitems=_subitems;
@property(readonly, nonatomic) BOOL singleResultsCategory; // @synthesize singleResultsCategory=_singleResultsCategory;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property int type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
- (unsigned long long)navigableItem_indexOfRepresentedObjectForIdentifier:(id)arg1 inRelationshipKeyPath:(id)arg2;
- (id)navigableItem_identifierForRepresentedObjectAtIndex:(unsigned long long)arg1 inRelationshipKeyPath:(id)arg2;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (id)nameWithSubitemCount;
- (id)ideModelObjectTypeIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL enabled;
- (void)primitiveInvalidate;
- (id)initWithType:(int)arg1 identifier:(id)arg2 image:(id)arg3 name:(id)arg4 subitems:(id)arg5 singleResultsCategory:(BOOL)arg6 showHierarchyForSingleResultsCategory:(BOOL)arg7 hideSubItemCount:(BOOL)arg8;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

