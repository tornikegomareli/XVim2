//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSIndexSet, NSSet;

@protocol IDEStructureEditingRemoveSubitemsTarget <NSObject>
- (BOOL)structureEditingRemoveSubitemsAtIndexes:(NSIndexSet *)arg1 error:(id *)arg2;
- (NSSet *)structureEditingFilePathsForGroupSubitemsFilteringOutNonProjectItemsAtIndexes:(NSIndexSet *)arg1;
- (NSSet *)structureEditingFileURLsForSubitemsAtIndexes:(NSIndexSet *)arg1;
- (BOOL)structureEditingCanRemoveSubitemsAtIndexes:(NSIndexSet *)arg1;
@end

