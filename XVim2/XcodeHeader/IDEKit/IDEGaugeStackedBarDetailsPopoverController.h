//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTBorderedView, DVTStackView_AppKitAutolayout, NSLayoutConstraint, NSMutableArray, NSPopover;

@interface IDEGaugeStackedBarDetailsPopoverController : DVTViewController
{
    DVTBorderedView *_separator;
    NSLayoutConstraint *_bottomDetailsViewToSuperviewTopConstraint;
    NSMutableArray *_topLabelControllers;
    NSMutableArray *_bottomLabelControllers;
    BOOL _invalidateAfterClose;
    NSPopover *_popover;
    DVTStackView_AppKitAutolayout *_topDetailsView;
    DVTStackView_AppKitAutolayout *_bottomDetailsView;
}

@property __weak DVTStackView_AppKitAutolayout *bottomDetailsView; // @synthesize bottomDetailsView=_bottomDetailsView;
@property __weak DVTStackView_AppKitAutolayout *topDetailsView; // @synthesize topDetailsView=_topDetailsView;
@property __weak NSPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (void)addLabelViewsToBottomDetailsView:(id)arg1;
- (void)addLabelViewsToTopDetailsView:(id)arg1;
- (void)hideTopDetailsView;
- (void)_removeFromSuperviewAndInvalidate;
- (void)closePopoverAndInvalidate;
- (void)viewDidInstall;

@end

