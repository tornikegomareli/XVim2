//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEToy, NSDate, NSString;
@protocol IDEToyViewControllerDelegate;

@interface IDEToyViewController : IDEViewController
{
    IDEToy *_toy;
    NSString *_titleForDisplay;
    NSDate *_resultDisplayDate;
    id <IDEToyViewControllerDelegate> _delegate;
}

+ (BOOL)shouldBeLayerBacked;
@property(retain, nonatomic) id <IDEToyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSDate *resultDisplayDate; // @synthesize resultDisplayDate=_resultDisplayDate;
@property(copy) NSString *titleForDisplay; // @synthesize titleForDisplay=_titleForDisplay;
@property(retain) IDEToy *toy; // @synthesize toy=_toy;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)toolTip;
- (id)alternateIconImage;
- (id)iconImage;
- (double)preferredVerticalInset;
- (double)preferredHorizontalInset;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (unsigned long long)representationType;
- (void)playgroundExecutionEndedAndCompleted:(BOOL)arg1;
- (void)playgroundExecutionStarted;
- (void)renderResultsForceRedraw:(BOOL)arg1;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithToy:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

