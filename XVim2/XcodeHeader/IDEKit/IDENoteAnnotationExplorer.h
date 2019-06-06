//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTMessageBubbleAnnotationDelegate-Protocol.h>

@class IDEEditor, NSArray, NSMutableArray, NSString;
@protocol IDELocalAnnotationHostingEditor, IDENoteAnnotationExplorableItem;

@interface IDENoteAnnotationExplorer : NSObject <DVTMessageBubbleAnnotationDelegate>
{
    IDEEditor<IDELocalAnnotationHostingEditor> *_editor;
    id <IDENoteAnnotationExplorableItem> _exploreItem;
    NSMutableArray *_noteAnnotations;
    long long _currentNoteIndex;
    NSArray *_noteItems;
}

@property(readonly) NSArray *noteItems; // @synthesize noteItems=_noteItems;
@property(nonatomic) long long currentNoteIndex; // @synthesize currentNoteIndex=_currentNoteIndex;
@property(retain, nonatomic) id <IDENoteAnnotationExplorableItem> exploreItem; // @synthesize exploreItem=_exploreItem;
@property(readonly) IDEEditor<IDELocalAnnotationHostingEditor> *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (BOOL)shouldMoveCursorForAnnotation:(id)arg1;
- (void)willBeDismissed;
- (void)setCurrentNoteItem:(id)arg1;
- (void)_clearAnnotations;
- (id)initWithEditor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

