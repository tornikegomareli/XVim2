//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTSimpleSerialization-Protocol.h>

@class NSArray;

@interface NSObject (DVTXMLArchiving) <DVTSimpleSerialization>
+ (void)dvt_synthesizeInvalidationWithDeallocAssertionBehavior:(unsigned long long)arg1 multipleInvalidationAssertionBehavior:(unsigned long long)arg2;
+ (void)dvt_synthesizeInvalidation;
+ (BOOL)__classIsDVTInvalidation;
+ (id)_dvt_invalidatableClasses;
+ (void)__DVTMainThreadLatencyChecker__cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (void)synthesizeMutableSetProperty:(id)arg1 withInstanceVariable:(id)arg2;
+ (void)synthesizeMutableArrayProperty:(id)arg1 withInstanceVariable:(id)arg2;
+ (id)descriptionForAssertionMessage;
+ (Class)dvt_class;
+ (id)dvt_creationBacktracesOfObservingTokensForObservedObject:(id)arg1;
+ (void)dvt_cancelAllObservingTokensForOwner:(id)arg1;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_broadcast:(id)arg1 userInfo:(id)arg2;
- (void)dvt_broadcast:(id)arg1;
- (id)dvt_subscribeToBroadcast:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)dvt_subscribeToBroadcast:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)dvt_subscribeToBroadcast:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)dvt_subscribeToBroadcast:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dvt_performAdditionalInvalidation;
- (BOOL)__isKVOInvalidationZombie;
- (BOOL)__isInvalidationZombie;
- (BOOL)__isDVTInvalidation;
- (void)_dvt_removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)_dvt_removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)_dvt_addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (BOOL)dvt_requiresWeakIntercession;
- (void)dvt_logReferenceTree;
@property(setter=dvt_setLeakingFatal:) BOOL dvt_isLeakingFatal;
- (void)dvt_shouldDeallocate;
- (id)dvt_performAfterDelay:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)dvt_performAfterDelay:(double)arg1 inModes:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)dvt_performOnRunLoop:(id)arg1 inModes:(id)arg2 order:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_DVTRunLoopToken_perform:(id)arg1;
- (void)__DVTMainThreadLatencyChecker__performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4 modes:(id)arg5;
- (void)__DVTMainThreadLatencyChecker__performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (id)dvt_performNonOwnershipTransferingSelector:(SEL)arg1 withObject:(id)arg2;
- (id)dvt_performNonOwnershipTransferingSelector:(SEL)arg1;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (void)dvt_setProperty:(id)arg1 fromUTF8String:(const char *)arg2 fromXMLUnarchiver:(id)arg3;
- (id)dvt_extraArchiveData;
- (void)dvt_setExtraArchiveData:(id)arg1;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (id)descriptionForAssertionMessage;
- (void)_dvt_treeDescription:(id)arg1 ofKeyPathsAffectingValueForKey:(id)arg2 depth:(int)arg3;
- (id)dvt_treeDescriptionOfKeyPathsAffectingValueForKey:(id)arg1;
- (id)dvt_observationInfoSummary;
- (void)dvt_changeValueForKeys:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dvt_changeValueForKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)dvt_newSharedObserverForKeyPath:(id)arg1 observeInitial:(BOOL)arg2 withHandlerBlock:(CDUnknownBlockType)arg3;
- (id)dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 withHandlerBlock:(CDUnknownBlockType)arg3;
- (id)dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 withHandlerBlock:(CDUnknownBlockType)arg4;
- (id)_dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 creationBacktrace:(id)arg4 withHandlerBlock:(CDUnknownBlockType)arg5;
- (void)dvt_addObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 withHandlerBlock:(CDUnknownBlockType)arg4;
- (void)dvt_unregisterValueChangedCallbackForKeyPath:(id)arg1;
- (void)dvt_unregisterValueChangedCallbackForKeyPath:(id)arg1 ofObject:(id)arg2;
- (void)dvt_registerValueChangedCallback:(SEL)arg1 forKeyPath:(id)arg2;
- (void)dvt_registerValueChangedCallback:(SEL)arg1 forKeyPath:(id)arg2 ofObject:(id)arg3;
- (void)_dvt_setObserverTokensForKeyPath:(id)arg1;
- (id)_dvt_observerTokensForKeyPath;
- (void)dvt_removeSharedObserverForKeyPath:(id)arg1;
- (id)dvt_sharedObserverForKeyPath:(id)arg1;
- (void)_dvt_removeObserverFromSharedObserver:(id)arg1 withTrackingIndex:(unsigned int)arg2 fromKeyPath:(id)arg3;
- (id)_dvt_addSharedObserverForKeyPath:(id)arg1 observeInitial:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
@property(nonatomic, readonly) NSArray *dvt_reflectingDebugDescriptionKeyPaths;
@end

