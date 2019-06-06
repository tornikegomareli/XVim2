//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class IDEPlaygroundQuickLookSingleLineView;
@protocol IDEPlaygroundQuickLookProvider;

@interface IDEPlaygroundQuickLookController : NSViewController
{
    IDEPlaygroundQuickLookSingleLineView *_singleLineView;
    BOOL _enabled;
    id <IDEPlaygroundQuickLookProvider> _quickLookProvider;
}

+ (id)createSingleLineViewUsingQuickLookProvider:(id)arg1;
@property(retain, nonatomic) id <IDEPlaygroundQuickLookProvider> quickLookProvider; // @synthesize quickLookProvider=_quickLookProvider;
- (void).cxx_destruct;
- (void)fontAndColorSourceTextSettingsChanged;
@property(getter=isEnabled) BOOL enabled;
- (id)iconOnlyViewForCollectionView;
- (id)quickLookViewForCollectionView;
- (id)quickLookViewForResultsView;
- (id)quickLookViewForNaturalSize;
- (id)quickLookViewForSingleLineSize;
@property(readonly, nonatomic) IDEPlaygroundQuickLookSingleLineView *singleLineView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

