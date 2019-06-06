//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEEditor, IDENavigableItemCoordinator;
@protocol IDEEditorHistoryControllerItem;

@protocol IDEEditorContextProtocol <NSObject>
@property(readonly, nonatomic) IDEEditor *editor;
@property(readonly) IDENavigableItemCoordinator *navigableItemCoordinator;
- (BOOL)_openEmptyEditor;
- (void)_giveEditorFocusIfNeeded;
- (BOOL)_openEditorHistoryItem:(id <IDEEditorHistoryControllerItem>)arg1 updateHistory:(BOOL)arg2;
- (id <IDEEditorHistoryControllerItem>)currentHistoryItem;
@end

