//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEToyViewController.h>

@class NSImageView;

@interface IDEValueHistoryImageViewController : IDEToyViewController
{
    BOOL _playgroundIsExecuting;
    BOOL _playgroundDidCompleteLastExecution;
    NSImageView *_imageView;
}

+ (id)displayableReflectionTags;
@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)image;
- (void)renderResultsForceRedraw:(BOOL)arg1;
- (void)playgroundExecutionEndedAndCompleted:(BOOL)arg1;
- (void)playgroundExecutionStarted;
- (id)toolTip;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (unsigned long long)representationType;
- (void)viewDidLoad;

@end

