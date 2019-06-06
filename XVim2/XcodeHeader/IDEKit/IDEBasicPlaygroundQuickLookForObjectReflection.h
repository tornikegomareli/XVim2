//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEKit/IDEPlaygroundQuickLookProvider-Protocol.h>

@class IDEPlaygroundLoggerObjectReflection, IDEPlaygroundQuickLookSingleLineView, NSAttributedString, NSString, NSView;

@interface IDEBasicPlaygroundQuickLookForObjectReflection : NSViewController <IDEPlaygroundQuickLookProvider>
{
    NSView *_iconView;
    IDEPlaygroundQuickLookSingleLineView *_naturalSizeView;
    IDEPlaygroundLoggerObjectReflection *_objectReflection;
}

@property(readonly) IDEPlaygroundLoggerObjectReflection *objectReflection; // @synthesize objectReflection=_objectReflection;
@property(readonly) NSView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (id)quickLookViewForResultsView;
- (id)quickLookViewForNaturalSize;
@property(readonly, copy) NSAttributedString *attributedTitle;
- (id)initWithObjectReflection:(id)arg1 nibName:(id)arg2 iconView:(id)arg3;
- (id)initWithObjectReflection:(id)arg1 nibName:(id)arg2;
- (id)initWithObjectReflection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

