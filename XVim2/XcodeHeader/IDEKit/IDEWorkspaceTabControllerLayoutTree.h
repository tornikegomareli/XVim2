//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCoding-Protocol.h>

@class IDEWorkspaceTabControllerLayoutTreeNode, NSMapTable;

@interface IDEWorkspaceTabControllerLayoutTree : NSObject <NSCoding>
{
    IDEWorkspaceTabControllerLayoutTreeNode *_primaryEditorContextNode;
    IDEWorkspaceTabControllerLayoutTreeNode *_geniusEditorContextNode;
    IDEWorkspaceTabControllerLayoutTreeNode *_rootLayoutTreeNode;
    NSMapTable *_strongEditorContextOrMultipleContextToStrongObservationTokenMap;
    NSMapTable *_strongEditorMultipleContextToStrongLayoutTreeNodeMap;
    NSMapTable *_strongLayoutTreeNodeToStrongEditorMultipleContextMap;
    NSMapTable *_strongEditorContextToStrongLayoutTreeNodeMap;
    NSMapTable *_strongLayoutTreeNodeToStrongEditorContextMap;
}

@property(readonly) IDEWorkspaceTabControllerLayoutTreeNode *rootLayoutTreeNode; // @synthesize rootLayoutTreeNode=_rootLayoutTreeNode;
@property(readonly) IDEWorkspaceTabControllerLayoutTreeNode *treeNodeRepresentingGeniusEditorContextArea; // @synthesize treeNodeRepresentingGeniusEditorContextArea=_geniusEditorContextNode;
@property(readonly) IDEWorkspaceTabControllerLayoutTreeNode *treeNodeRepresentingPrimaryEditorContextArea; // @synthesize treeNodeRepresentingPrimaryEditorContextArea=_primaryEditorContextNode;
- (void).cxx_destruct;
- (void)_removeEditorMultipleContext:(id)arg1;
- (void)_setEditorMultipleContext:(id)arg1 forRepresentedLayoutTreeNode:(id)arg2;
- (void)_removeEditorContext:(id)arg1;
- (void)_setEditorContext:(id)arg1 forRepresentedLayoutTreeNode:(id)arg2;
- (id)editorMultipleContextForRepresentedLayoutTreeNode:(id)arg1;
- (id)editorContextForRepresentedLayoutTreeNode:(id)arg1;
- (id)representedLayoutTreeNodeForEditorMultipleContext:(id)arg1;
- (id)representedLayoutTreeNodeForEditorContextOrPrimaryEditorNodeIfNil:(id)arg1;
- (id)representedLayoutTreeNodeForEditorContext:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initUsingEditorContextsOfWorkspaceTabController:(id)arg1;

@end

