//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

@class NSView;
@protocol IDEFindNavigatorLayoutViewDelegate;

@interface IDEFindNavigatorLayoutView : DVTLayoutView_ML
{
    NSView *_headerView;
    NSView *_summaryView;
    NSView *_contentView;
    id <IDEFindNavigatorLayoutViewDelegate> _delegate;
}

@property __weak id <IDEFindNavigatorLayoutViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSView *summaryView; // @synthesize summaryView=_summaryView;
@property(retain, nonatomic) NSView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)setView:(id *)arg1 toValue:(id)arg2;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (BOOL)isFlipped;
- (void)willLayoutSubview:(id)arg1;
- (void)awakeFromNib;

@end

