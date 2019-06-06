//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEResultBundleEditor.h>

#import <IDEKit/IDETestReport_RootObject-Protocol.h>

@class DVTObservingToken, DVTReplacementView, IDESchemeActionsInvocationRecord, NSArray, NSString;

@interface IDETestReportEditor : IDEResultBundleEditor <IDETestReport_RootObject>
{
    DVTReplacementView *_replacementView;
    NSArray *_performanceMetricsForDisplay;
    NSArray *_currentSelectedDocumentLocations;
    NSArray *_currentSelectedItems;
    double _totalDuration;
    DVTObservingToken *_invocationFinishedObserver;
}

+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
@property(retain) DVTObservingToken *invocationFinishedObserver; // @synthesize invocationFinishedObserver=_invocationFinishedObserver;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(copy, nonatomic) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(copy, nonatomic) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
@property(copy, nonatomic) NSArray *performanceMetricsForDisplay; // @synthesize performanceMetricsForDisplay=_performanceMetricsForDisplay;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void).cxx_destruct;
- (void)selectDocumentLocations:(id)arg1;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *ide_testReport_rootObject_schemeActionsInvocationRecord;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_attachmentsHaveBeenPruned;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_canRevealActivityAssetsLocally;
@property(readonly, nonatomic) BOOL ide_testReport_test_fetchesTestRunsLazily;
- (BOOL)ide_testReport_shouldEnableBaselineUpdatingUIForWorkspace:(id)arg1;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_supportsDurationColumn;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_allTestClasses;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_perfMetricNames;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_devices;
@property(readonly, copy, nonatomic) NSString *ide_testReport_rootObject_identifier;
@property(readonly, nonatomic) double ide_testReport_rootObject_duration;
- (void)installReport;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (id)testReport;
- (id)reportDocument;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

