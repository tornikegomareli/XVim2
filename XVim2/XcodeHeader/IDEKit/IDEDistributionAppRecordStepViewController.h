//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTReplacementView;

@interface IDEDistributionAppRecordStepViewController : IDEDistributionStepViewController
{
    BOOL _loadingRecords;
    DVTReplacementView *_replacementView;
}

+ (id)keyPathsForValuesAffectingCanGoNext;
@property(nonatomic) BOOL loadingRecords; // @synthesize loadingRecords=_loadingRecords;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void).cxx_destruct;
- (void)selectAppRecord:(id)arg1;
- (void)_loadAppRecords;
- (void)viewDidInstall;
- (id)_installAndReturnProgressView;
- (BOOL)canGoNext;
- (id)title;
- (id)nibName;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (void)primitiveInvalidate;

@end

