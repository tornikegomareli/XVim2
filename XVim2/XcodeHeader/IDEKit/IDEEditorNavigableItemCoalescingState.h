//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTStackBacktrace, IDEEditorHistoryItem, NSHashTable, NSNotification;

@interface IDEEditorNavigableItemCoalescingState : NSObject
{
    BOOL _isRespondingToDidForget;
    BOOL _didBeginTransactionBeforeWillForgetItems;
    DVTStackBacktrace *_creationBacktrace;
    NSNotification *_willCloseDocumentNotification;
    IDEEditorHistoryItem *_preCoalescingHistoryItem;
    NSHashTable *_didForgetItemsHashTable;
}

@property BOOL didBeginTransactionBeforeWillForgetItems; // @synthesize didBeginTransactionBeforeWillForgetItems=_didBeginTransactionBeforeWillForgetItems;
@property BOOL isRespondingToDidForget; // @synthesize isRespondingToDidForget=_isRespondingToDidForget;
@property(retain) NSHashTable *didForgetItemsHashTable; // @synthesize didForgetItemsHashTable=_didForgetItemsHashTable;
@property(retain) IDEEditorHistoryItem *preCoalescingHistoryItem; // @synthesize preCoalescingHistoryItem=_preCoalescingHistoryItem;
@property(retain) NSNotification *willCloseDocumentNotification; // @synthesize willCloseDocumentNotification=_willCloseDocumentNotification;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
- (void).cxx_destruct;

@end

