//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSRunLoop.h>

@interface NSRunLoop (DVTNSRunLoopAdditions)
+ (void)dvt_initializeRunLoopAdditions;
- (void)dvt_spinRunLoopInMode:(id)arg1 waitingForGroup:(id)arg2;
- (void)dvt_spinRunLoopInMode:(id)arg1 waitingForSemaphore:(id)arg2;
- (void)dvt_spinRunLoopInMode:(id)arg1 whileBlockExecutesConcurrently:(CDUnknownBlockType)arg2;
- (void)dvt_spinRunLoopInMode:(id)arg1 whileQueue:(id)arg2 executesAsynchronously:(CDUnknownBlockType)arg3;
- (void)dvt_spinRunLoopInMode:(id)arg1 until:(CDUnknownBlockType)arg2;
- (id)dvt_performInModes:(id)arg1 withOrder:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)__DVTMainThreadLatencyChecker__cancelPerformSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;
- (void)__DVTMainThreadLatencyChecker__performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 order:(unsigned long long)arg4 modes:(id)arg5;
@end

