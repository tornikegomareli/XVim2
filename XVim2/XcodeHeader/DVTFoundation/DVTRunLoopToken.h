//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTCancellable-Protocol.h>

@class DVTStackBacktrace, NSRunLoop, NSString;

@interface DVTRunLoopToken : NSObject <DVTCancellable>
{
    id _target;
    DVTStackBacktrace *_creationBacktrace;
    DVTStackBacktrace *_invalidationBacktrace;
    CDUnknownBlockType _block;
    NSRunLoop *_cancellationRunLoop;
}

+ (void)initialize;
@property(retain) NSRunLoop *cancellationRunLoop; // @synthesize cancellationRunLoop=_cancellationRunLoop;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain) DVTStackBacktrace *invalidationBacktrace; // @synthesize invalidationBacktrace=_invalidationBacktrace;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
@property(retain) id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (id)initWithCancellationRunLoop:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

