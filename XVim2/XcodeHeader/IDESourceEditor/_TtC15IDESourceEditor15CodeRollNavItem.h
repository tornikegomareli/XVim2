//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceEditor/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, NSArray, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface _TtC15IDESourceEditor15CodeRollNavItem : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    // Error parsing type: , name: url
    // Error parsing type: , name: children
}

+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(nonatomic, readonly) DVTFileDataType *navigableItem_documentType;
@property(nonatomic, readonly) NSArray *navigableItem_childRepresentedObjects;
@property(nonatomic, readonly) BOOL navigableItem_isLeaf;
@property(nonatomic, readonly) NSImage *navigableItem_image;
@property(nonatomic, readonly) NSString *navigableItem_name;
@property(nonatomic, copy) NSArray *children;

@end

