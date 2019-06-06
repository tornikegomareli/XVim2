//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <DVTFoundation/DVTDiffHashing-Protocol.h>
#import <DVTFoundation/DVTPropertyListValue-Protocol.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface NSArray (DVTInvalidationZombie_Private) <DVTPropertyListValue, DVTDiffHashing>
+ (id)dvt_arrayWithObjectIfNonNil:(id)arg1;
+ (id)dvt_arrayWithRepetitions:(long long)arg1 ofObject:(id)arg2;
- (void)_dvt_removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3;
- (void)_dvt_removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void *)arg4;
- (void)_dvt_addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void *)arg5;
- (id)dvt_stringByConcatenatingAsShellCommandArguments;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (id)dvt_stringForm;
- (BOOL)dvt_isLiteral;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_arrayByExpandingEntriesWithMacroExpansionScope:(id)arg1;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (id)dvt_decodeObjectsOfClass:(Class)arg1 error:(id *)arg2;
@property(readonly) NSDictionary *dictionaryValue;
@property(readonly) NSArray *arrayValue;
@property(readonly) NSDate *dateValue;
@property(readonly) NSNumber *numberValue;
@property(readonly) NSData *dataValue;
@property(readonly) NSString *stringValue;
- (id)dvt_objectBeforeFirstOccurenceOfObject:(id)arg1;
- (id)dvt_objectAtWrappedIndex:(long long)arg1;
- (id)dvt_objectAtIndexIfInBounds:(long long)arg1;
- (BOOL)dvt_isIndexInBounds:(long long)arg1;
- (id)dvt_secondToLastObject;
- (long long)dvt_lastIndex;
- (id)dvt_flatMap:(CDUnknownBlockType)arg1;
- (id)dvt_componentsJoinedByString:(id)arg1 finalComponentJoinString:(id)arg2;
- (id)dvt_arrayByRemovingDuplicatesFromBack;
- (id)dvt_arrayByRemovingDuplicates;
- (BOOL)dvt_isNonEmpty;
- (BOOL)dvt_hasPrefix:(id)arg1;
- (id)dvt_stringByConcatenatingAsCommandLineArguments;
- (id)dvt_arrayByAddingObjects:(id)arg1;
- (id)dvt_arrayByAddingObjectIfNonNil:(id)arg1;
- (id)dvt_subarrayFromIndex:(long long)arg1;
- (id)dvt_subarrayAfterIndex:(long long)arg1;
- (id)dvt_arrayByRemovingNSNulls;
- (id)dvt_arrayByReversingObjects;
- (id)dvt_arrayByRemovingObjectsInArray:(id)arg1;
- (id)dvt_arrayByRemovingObject:(id)arg1;
- (BOOL)dvt_areAnyObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)dvt_onlyObjectPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)dvt_areAllObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)dvt_objectsPassingTest:(CDUnknownBlockType)arg1;
- (id)dvt_objectsOfClass:(Class)arg1;
- (id)dvt_objectByFoldingWithBlock:(CDUnknownBlockType)arg1;
- (id)dvt_dictionaryWithEntriesAsValuesAndKeysFromBlock:(CDUnknownBlockType)arg1;
- (id)dvt_dictionaryWithEntriesAsKeysAndValuesFromBlock:(CDUnknownBlockType)arg1;
- (id)dvt_onlyObject;
- (id)dvt_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)dvt_unorderedArrayByGroupingObjectsUsingKeyPaths:(id)arg1;
- (id)dvt_arrayByGroupingAdjacentObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)dvt_arrayByApplyingBlockStrictly:(CDUnknownBlockType)arg1;
- (id)dvt_arrayByApplyingBlockWithIndex:(CDUnknownBlockType)arg1;
- (id)dvt_arrayByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)dvt_arrayByApplyingSelector:(SEL)arg1;
- (id)dvt_arrayByFilteringUsingBlock:(CDUnknownBlockType)arg1;
- (struct _NSRange)dvt_rangeOfArray:(id)arg1;
- (struct _NSRange)dvt_rangeOfArray:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 withHandlerBlock:(CDUnknownBlockType)arg3;
- (id)dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 withHandlerBlock:(CDUnknownBlockType)arg4;
- (void)dvt_addObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 withHandlerBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)dvt_diffHashForDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

