//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTBorderedView, DVTPathControl, DVTStackBacktrace, IDEControlGroup, NSString;

@interface IDENavBar : NSView <DVTInvalidation>
{
    DVTBorderedView *_pathBorderedView;
    BOOL _useControlAccentColorForBottomBorder;
    BOOL _drawsTopBorder;
    BOOL _drawsLeftBorder;
    BOOL _isGrouped;
    BOOL _isActive;
    DVTPathControl *_pathControl;
    IDEControlGroup *_leftControlGroup;
    IDEControlGroup *_rightControlGroup;
}

+ (void)initialize;
@property(nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property BOOL isGrouped; // @synthesize isGrouped=_isGrouped;
@property(retain) IDEControlGroup *rightControlGroup; // @synthesize rightControlGroup=_rightControlGroup;
@property(retain) IDEControlGroup *leftControlGroup; // @synthesize leftControlGroup=_leftControlGroup;
@property(retain) DVTPathControl *pathControl; // @synthesize pathControl=_pathControl;
@property(nonatomic) BOOL drawsLeftBorder; // @synthesize drawsLeftBorder=_drawsLeftBorder;
@property(nonatomic) BOOL drawsTopBorder; // @synthesize drawsTopBorder=_drawsTopBorder;
- (void).cxx_destruct;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (struct CGRect)grabRect;
- (void)primitiveInvalidate;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_controlGroupDidChange:(id)arg1;
@property(nonatomic) BOOL useControlAccentColorForBottomBorder;
- (void)_IDENavBarSharedInit;
- (void)layout;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

