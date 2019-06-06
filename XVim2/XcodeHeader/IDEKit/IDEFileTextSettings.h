//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEFileReference, NSMapTable, NSMutableArray, NSString;

@interface IDEFileTextSettings : NSObject <DVTInvalidation>
{
    IDEFileReference *_fileReference;
    unsigned long long _textEncoding;
    long long _tabWidth;
    long long _indentWidth;
    unsigned long long _lineEndings;
    BOOL _usesTabs;
    BOOL _wrapsLines;
    NSMutableArray *_fileReferenceObservingTokens;
    NSMutableArray *_textPreferencesObservingTokens;
    BOOL _trimTrailingWhitespace;
    BOOL _trimWhitespaceOnlyLines;
    NSMapTable *_sourceTextViewToObservingTokensMapTable;
}

+ (void)initialize;
@property(retain) NSMapTable *sourceTextViewToObservingTokensMapTable; // @synthesize sourceTextViewToObservingTokensMapTable=_sourceTextViewToObservingTokensMapTable;
@property BOOL trimWhitespaceOnlyLines; // @synthesize trimWhitespaceOnlyLines=_trimWhitespaceOnlyLines;
@property BOOL trimTrailingWhitespace; // @synthesize trimTrailingWhitespace=_trimTrailingWhitespace;
@property BOOL wrapsLines; // @synthesize wrapsLines=_wrapsLines;
@property long long indentWidth; // @synthesize indentWidth=_indentWidth;
@property long long tabWidth; // @synthesize tabWidth=_tabWidth;
@property BOOL usesTabs; // @synthesize usesTabs=_usesTabs;
@property unsigned long long textEncoding; // @synthesize textEncoding=_textEncoding;
@property unsigned long long lineEndings; // @synthesize lineEndings=_lineEndings;
@property(retain, nonatomic) IDEFileReference *fileReference; // @synthesize fileReference=_fileReference;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)updateTrimWhitespaceOnlyLines;
- (void)updateTrimTrailingWhitespace;
- (void)updateWrapLines;
- (void)updateIndentWidth;
- (void)updateTabWidth;
- (void)updateUsesTabs;
- (void)updateTextEncoding;
- (void)updateLineEndings;
- (id)_textPreferences;
- (void)primitiveInvalidate;
- (id)init;
- (void)unregisterObserversWithSourceTextView:(id)arg1 textStorage:(id)arg2;
- (void)registerObserversWithSourceTextView:(id)arg1 textStorage:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

