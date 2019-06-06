//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEEditorArea, IDEEditorMultipleSplit, NSArray;

@protocol IDEEditorMultipleSplitItem <NSObject>
@property(nonatomic, readonly) struct CGSize minimumContentViewFrameSize;
@property(nonatomic, readonly) NSArray *editorAreaSplits;
@property(nonatomic, readonly) IDEEditorArea *editorArea;
@property(nonatomic, readonly) IDEEditorMultipleSplit *parentEditorMultipleSplit;
- (void)resetEditorSizes;
- (BOOL)canResetEditorSizes;
@end

