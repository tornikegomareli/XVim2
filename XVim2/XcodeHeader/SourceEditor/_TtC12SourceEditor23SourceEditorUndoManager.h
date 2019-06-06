//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUndoManager.h>

@class NSString;

@interface _TtC12SourceEditor23SourceEditorUndoManager : NSUndoManager
{
    // Error parsing type: , name: undoStack
    // Error parsing type: , name: redoStack
    // Error parsing type: , name: pendingUndoOperations
    // Error parsing type: , name: pendingRedoOperations
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: newSelection
    // Error parsing type: , name: multiEditNestingCount
    // Error parsing type: , name: ancillaryNestingCount
    // Error parsing type: , name: isTyping
    // Error parsing type: , name: postingCheckpoint
    // Error parsing type: , name: initialSelection
    // Error parsing type: , name: _undoGroupingLevel
    // Error parsing type: , name: _redoGroupingLevel
    // Error parsing type: , name: undoLevel
    // Error parsing type: , name: redoLevel
}

//- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) BOOL redoActionIsDiscardable;
@property(nonatomic, readonly) BOOL undoActionIsDiscardable;
- (void)setActionIsDiscardable:(BOOL)arg1;
- (void)setActionName:(id)arg1;
@property(nonatomic, readonly) NSString *redoActionName;
@property(nonatomic, readonly) NSString *undoActionName;
- (void)removeAllActionsWithTarget:(id)arg1;
- (void)removeAllActions;
- (BOOL)isRedoing;
- (BOOL)isUndoing;
@property(nonatomic) long long groupingLevel;
- (void)endUndoGrouping;
- (void)beginUndoGrouping;
- (void)redo;
- (void)undoNestedGroup;
- (void)undo;
@property(nonatomic, readonly) BOOL canRedo;
@property(nonatomic, readonly) BOOL canUndo;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

// Remaining properties
@property(nonatomic, readonly) BOOL redoing;
@property(nonatomic, readonly) BOOL undoing;

@end

