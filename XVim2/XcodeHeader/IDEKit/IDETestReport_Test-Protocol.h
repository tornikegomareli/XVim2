//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDETestReport_Base-Protocol.h>
#import <IDEKit/IDETestReport_Common-Protocol.h>

@class NSArray, NSString;

@protocol IDETestReport_Test <IDETestReport_Base, IDETestReport_Common>
@property(nonatomic, readonly) NSArray *ide_testReport_test_allTestRunsAcrossDevices;
@property(nonatomic, readonly) NSString *ide_testReport_test_testClassName;
@property(nonatomic, readonly) NSString *ide_testReport_test_testName;
@property(nonatomic, readonly) NSArray *ide_testReport_test_testRunsByDevice;
@property(nonatomic, readonly) BOOL ide_testReport_test_fetchesTestRunsLazily;

@optional
@property(nonatomic, readonly) BOOL ide_testReport_test_mixedStatus;
- (void)ide_testReport_test_fetchTestsWithCompletionHandler:(void (^)(NSArray *))arg1;
@end

