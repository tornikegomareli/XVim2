//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@interface NSBlockOperation (DVTNSOperationAdditions)
+ (id)dvt_blockOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)__DVTMainThreadLatencyChecker__blockOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)dvt_addExecutionBlock:(CDUnknownBlockType)arg1;
- (void)__DVTMainThreadLatencyChecker__addExecutionBlock:(CDUnknownBlockType)arg1;
@end

