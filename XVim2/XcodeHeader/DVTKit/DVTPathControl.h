//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPathControl.h>

#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface DVTPathControl : NSPathControl <DVTInvalidation>
{
}

+ (double)iconTitleSpacing;
+ (struct CGSize)iconSize;
+ (Class)cellClass;
+ (unsigned long long)defaultFocusRingType;
+ (void)initialize;
- (id)accessibilityPopUpMenuParent:(id)arg1;
@property(readonly) struct CGSize sizeWanted;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)popUpMenuForComponentCell:(id)arg1;
- (void)_popUpMenuForComponentCell:(id)arg1;
- (void)rightMouseDown:(id)arg1;
@property unsigned long long preferredNavigationPopoverEdge;
@property(readonly) struct CGRect grabRect;
- (void)setFont:(id)arg1;
@property BOOL lastComponentFillsWidth;
@property int gradientStyle;
- (void)primitiveInvalidate;
@property long long navigationPresentationStyle;
- (void)updateBoundContent;
- (void)updateBoundSelectedItem;
- (void)setDelegate:(id)arg1;
- (id)dvt_extraBindings;
- (void)setCell:(id)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

