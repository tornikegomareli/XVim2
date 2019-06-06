//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@class DVTObservingToken;

@interface IDEIssueGroupNavigableItem : IDEKeyDrivenNavigableItem
{
    DVTObservingToken *_fileGroupsObservingToken;
    DVTObservingToken *_issuesWithoutFilesObservingToken;
    DVTObservingToken *_typeGroupsObservingToken;
    unsigned long long _compressionValue;
    BOOL _showsCompressedStackFrames;
    long long _showChildrenByType;
}

+ (id)keyPathsForValuesAffectingSubtitle;
@property(nonatomic) long long showChildrenByType; // @synthesize showChildrenByType=_showChildrenByType;
@property(nonatomic) BOOL showsCompressedStackFrames; // @synthesize showsCompressedStackFrames=_showsCompressedStackFrames;
- (void).cxx_destruct;
- (void)_changeThreadNavigableItem:(id)arg1;
- (id)subtitle;
- (id)childRepresentedObjects;
- (void)primitiveInvalidate;
- (BOOL)isLeaf;
- (id)initWithRepresentedObject:(id)arg1;

@end

