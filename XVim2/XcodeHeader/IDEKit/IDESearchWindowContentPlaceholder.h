//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEKit/DVTEmptyContentPlaceholderContainer-Protocol.h>

@class NSFont, NSString;

@interface IDESearchWindowContentPlaceholder : NSView <DVTEmptyContentPlaceholderContainer>
{
    BOOL _hasRunEmptyContentPlaceholderLayout;
    BOOL _hasContent;
    NSString *_emptyContentString;
    NSString *_emptyContentSubtitle;
    long long _emptyContentStringStyle;
    NSFont *_emptyContentFont;
}

@property(nonatomic) BOOL hasContent; // @synthesize hasContent=_hasContent;
@property(copy, nonatomic) NSFont *emptyContentFont; // @synthesize emptyContentFont=_emptyContentFont;
@property(nonatomic) long long emptyContentStringStyle; // @synthesize emptyContentStringStyle=_emptyContentStringStyle;
@property(copy, nonatomic) NSString *emptyContentSubtitle; // @synthesize emptyContentSubtitle=_emptyContentSubtitle;
@property(copy, nonatomic) NSString *emptyContentString; // @synthesize emptyContentString=_emptyContentString;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) BOOL followsFontAndColorTheme;

@end

