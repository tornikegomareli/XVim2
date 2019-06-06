//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEKit/IDETestsInTestableObserver-Protocol.h>
#import <IDEKit/NSTextFieldDelegate-Protocol.h>

@class IDETestPerformanceMetricBaselineRecord, IDETestReportPerfMetricIterationsGraphView, NSArray, NSAttributedString, NSButton, NSDictionary, NSPopUpButton, NSString, NSTextField, NSView, NSWindow;
@protocol IDETestReport_PerfMetric, IDETestReport_TestRun, IDETestable;

@interface IDETestReportPerfMetricBadgePopoverViewController : NSViewController <NSTextFieldDelegate, IDETestsInTestableObserver>
{
    id <IDETestable> _testable;
    NSAttributedString *_baselineValueBeforeEditing;
    NSAttributedString *_rstdValueBeforeEditing;
    BOOL _enableUpdating;
    NSArray *_testPerfMetrics;
    id <IDETestReport_TestRun> _testRun;
    NSWindow *_hostWindow;
    CDUnknownBlockType _updateBaselineCallback;
    NSString *_testIdentifier;
    NSString *_deviceIdentifier;
    NSDictionary *_baselineRecords;
    id <IDETestReport_PerfMetric> _selectedTestPerfMetric;
    long long _selectedTestPerfMetricIndex;
    IDETestPerformanceMetricBaselineRecord *_selectedTestPerfMetricBaselineRecord;
    NSTextField *_previousFailureField;
    double _previousFailureFieldHeight;
    NSPopUpButton *_metricNamePopUpButton;
    NSTextField *_metricLabelTextField;
    NSTextField *_resultValueTextField;
    NSTextField *_resultLabelTextField;
    NSTextField *_baselineAverageValueTextField;
    NSTextField *_baselineLabelTextField;
    NSTextField *_stdDevValueTextField;
    NSTextField *_stdDevLabelTextField;
    NSTextField *_averageValueTextField;
    NSTextField *_averageLabelTextField;
    IDETestReportPerfMetricIterationsGraphView *_graphView;
    NSView *_iterationsHostView;
    NSButton *_saveButton;
    NSButton *_cancelButton;
    NSButton *_editButton;
    NSButton *_acceptButton;
    NSButton *_setBaselineButton;
    NSButton *_jumpToReportButton;
    NSView *_labelsHostView;
    NSTextField *_titleField;
}

@property __weak NSTextField *titleField; // @synthesize titleField=_titleField;
@property __weak NSView *labelsHostView; // @synthesize labelsHostView=_labelsHostView;
@property __weak NSButton *jumpToReportButton; // @synthesize jumpToReportButton=_jumpToReportButton;
@property __weak NSButton *setBaselineButton; // @synthesize setBaselineButton=_setBaselineButton;
@property __weak NSButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property __weak NSButton *editButton; // @synthesize editButton=_editButton;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain) NSView *iterationsHostView; // @synthesize iterationsHostView=_iterationsHostView;
@property __weak IDETestReportPerfMetricIterationsGraphView *graphView; // @synthesize graphView=_graphView;
@property __weak NSTextField *averageLabelTextField; // @synthesize averageLabelTextField=_averageLabelTextField;
@property __weak NSTextField *averageValueTextField; // @synthesize averageValueTextField=_averageValueTextField;
@property __weak NSTextField *stdDevLabelTextField; // @synthesize stdDevLabelTextField=_stdDevLabelTextField;
@property __weak NSTextField *stdDevValueTextField; // @synthesize stdDevValueTextField=_stdDevValueTextField;
@property __weak NSTextField *baselineLabelTextField; // @synthesize baselineLabelTextField=_baselineLabelTextField;
@property __weak NSTextField *baselineAverageValueTextField; // @synthesize baselineAverageValueTextField=_baselineAverageValueTextField;
@property __weak NSTextField *resultLabelTextField; // @synthesize resultLabelTextField=_resultLabelTextField;
@property __weak NSTextField *resultValueTextField; // @synthesize resultValueTextField=_resultValueTextField;
@property __weak NSTextField *metricLabelTextField; // @synthesize metricLabelTextField=_metricLabelTextField;
@property __weak NSPopUpButton *metricNamePopUpButton; // @synthesize metricNamePopUpButton=_metricNamePopUpButton;
@property(nonatomic) double previousFailureFieldHeight; // @synthesize previousFailureFieldHeight=_previousFailureFieldHeight;
@property(retain, nonatomic) NSTextField *previousFailureField; // @synthesize previousFailureField=_previousFailureField;
@property(retain, nonatomic) IDETestPerformanceMetricBaselineRecord *selectedTestPerfMetricBaselineRecord; // @synthesize selectedTestPerfMetricBaselineRecord=_selectedTestPerfMetricBaselineRecord;
@property(nonatomic) long long selectedTestPerfMetricIndex; // @synthesize selectedTestPerfMetricIndex=_selectedTestPerfMetricIndex;
@property(retain, nonatomic) id <IDETestReport_PerfMetric> selectedTestPerfMetric; // @synthesize selectedTestPerfMetric=_selectedTestPerfMetric;
@property(retain, nonatomic) NSDictionary *baselineRecords; // @synthesize baselineRecords=_baselineRecords;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSString *testIdentifier; // @synthesize testIdentifier=_testIdentifier;
@property(copy, nonatomic) CDUnknownBlockType updateBaselineCallback; // @synthesize updateBaselineCallback=_updateBaselineCallback;
@property(retain, nonatomic) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(retain, nonatomic) id <IDETestReport_TestRun> testRun; // @synthesize testRun=_testRun;
@property(retain, nonatomic) NSArray *testPerfMetrics; // @synthesize testPerfMetrics=_testPerfMetrics;
@property(nonatomic) BOOL enableUpdating; // @synthesize enableUpdating=_enableUpdating;
- (void).cxx_destruct;
- (void)refreshUI;
- (double)baselineAverageValueFromTextField;
- (id)precisionFormatter;
- (id)valueAttributedString:(id)arg1 color:(id)arg2;
- (id)attributesDictionaryForColor:(id)arg1;
- (void)setUpdatedRSTDForTest:(double)arg1;
- (id)updatedRSTDForTest;
- (void)setUpdatedBaselineValueForTest:(double)arg1;
- (id)updatedBaselineValueForTest;
- (id)identifierForBaselineValueCache;
- (id)abbreviatedUnitFromUnit:(id)arg1;
- (void)setTestPerfMetrics:(id)arg1 andSelectMetricAtIndex:(unsigned long long)arg2;
- (void)updateBaselineAction:(id)arg1;
- (void)_updateBaseline:(double)arg1;
- (void)accept:(id)arg1;
- (void)save:(id)arg1;
- (void)cancel:(id)arg1;
- (void)edit:(id)arg1;
- (void)setBaseline:(id)arg1;
- (void)popUpButtonChanged:(id)arg1;
- (void)testablesChanged:(id)arg1;
- (void)allTestablesChanged;
- (void)testsChanged:(id)arg1;
- (void)jumpToReport:(id)arg1;
- (void)suppressJumpToReportButton;
- (void)updateFailures;
- (id)attributesForFailures;
- (id)failureForRepresentedPerfMetric;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

