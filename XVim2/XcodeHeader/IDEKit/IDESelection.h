//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSArray;

@interface IDESelection : NSObject <NSCopying>
{
    NSArray *_selectedItems;
}

+ (id)selectionWithNavigableItemArchivableRepresentations:(id)arg1;
+ (id)selectionWithNavigableItems:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedItems; // @synthesize selectedItems=_selectedItems;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *navigableItemArchivableRepresentationsForTemporaryCompatibility;
- (id)navigableItemArchivableRepresentations;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNavigableItemArchivableRepresentations:(id)arg1;

@end

