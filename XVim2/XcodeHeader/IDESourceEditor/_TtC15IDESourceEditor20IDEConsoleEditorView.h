//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/_TtC15IDESourceEditor19IDESourceEditorView.h>

#import <IDESourceEditor/DVTConsoleTextViewProtocol-Protocol.h>
#import <IDESourceEditor/SourceEditorScrollViewScrollerMoved-Protocol.h>

@protocol IDEConsoleTextViewObjectiveCExpressionRangeDelegate, IDEConsoleTextViewStandardIODelegate;

@interface _TtC15IDESourceEditor20IDEConsoleEditorView : _TtC15IDESourceEditor19IDESourceEditorView <DVTConsoleTextViewProtocol, SourceEditorScrollViewScrollerMoved>
{
    // Error parsing type: , name: viewController
    // Error parsing type: , name: $__lazy_storage_$_standardIODelegate
    // Error parsing type: , name: $__lazy_storage_$_openingBracketLocationDelegate
    // Error parsing type: , name: _debuggerPromptTextAttributes
    // Error parsing type: , name: _debuggerInputTextAttributes
    // Error parsing type: , name: _debuggerOutputTextAttributes
    // Error parsing type: , name: _debuggedTargetInputTextAttributes
    // Error parsing type: , name: _debuggedTargetOutputTextAttributes
    // Error parsing type: , name: _IDEDebuggerPromptTextAttribute
    // Error parsing type: , name: _IDEDebuggerInputTextAttribute
    // Error parsing type: , name: _IDEDebuggerOutputTextAttribute
    // Error parsing type: , name: _IDEExecutableInputTextAttribute
    // Error parsing type: , name: _IDEExecutableOutputTextAttribute
    // Error parsing type: , name: _currentConsoleTextAttributes
    // Error parsing type: , name: _insertTextKind
    // Error parsing type: , name: textAttributesArray
    // Error parsing type: , name: _itemsToAppendAfterDelay
    // Error parsing type: , name: _itemsToAppendTimerScheduled
    // Error parsing type: , name: _lastItemTime
    // Error parsing type: , name: _promptString
    // Error parsing type: , name: currentPromptRange
    // Error parsing type: , name: textInsertionPoint
    // Error parsing type: , name: _scrollToBottom
    // Error parsing type: , name: _appendItemsLock
    // Error parsing type: , name: logMode
    // Error parsing type: , name: shouldDisableCloseBracket
    // Error parsing type: , name: scrollToBottomBufferHeight
    // Error parsing type: , name: consoleTextPreferences
    // Error parsing type: , name: autoCompletionToken
    // Error parsing type: , name: tryClosingBracket
    // Error parsing type: , name: _isClearingConsole
    // Error parsing type: , name: _appendInterval
}

- (void).cxx_destruct;
- (id)contextForCompletionStrategiesAtWordStartLocation:(unsigned long long)arg1;
- (void)setViewController:(id)arg1;
- (void)setCompletionStrategies:(id)arg1;
- (struct _NSRange)rangeForUserTextChange;
- (void)insertNewline:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)repeatInput:(id)arg1;
- (void)appendConsoleItemsImmediatelyWithoutScrolling:(id)arg1;
- (void)appendConsoleItemsAfterDelay:(id)arg1;
- (void)clearConsoleItems;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)userDidScroll:(id)arg1;
- (void)scrollViewDidEndLiveScrolling;
- (void)scrollViewDidLiveScrolling;
- (void)scrollViewDidStartLiveScrolling;
- (id)textStorage;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveToBeginningOfLine:(id)arg1;
- (void)moveToBeginningOfText:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)themeFontsAndColorsUpdates;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) int logMode; // @synthesize logMode;
@property(nonatomic, readonly) BOOL shouldSuppressTextCompletion;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, retain) id <IDEConsoleTextViewObjectiveCExpressionRangeDelegate> openingBracketLocationDelegate;
@property(nonatomic, retain) id <IDEConsoleTextViewStandardIODelegate> standardIODelegate;

@end

