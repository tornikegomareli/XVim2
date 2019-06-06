//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESchemeActionRunDestinationRecord.h>

#import <IDEKit/IDECoverage_Device-Protocol.h>
#import <IDEKit/IDETestReport_Device-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface IDESchemeActionRunDestinationRecord (IDECoverageReportConformance) <IDECoverage_Device, IDETestReport_Device>
@property(readonly, copy, nonatomic) NSArray *ide_coverage_devices;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_children;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePctDelta;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePct;
@property(readonly, copy, nonatomic) NSString *ide_coverage_title;
@property(readonly, nonatomic) BOOL ide_coverage_isSimulator;
@property(readonly, copy, nonatomic) NSString *ide_coverage_device_name;
@property(readonly, copy, nonatomic) NSString *ide_coverage_device_osVersion;
@property(readonly, copy, nonatomic) NSString *ide_coverage_device_modelName;
@property(readonly, copy, nonatomic) NSString *ide_coverage_deviceID;
@property(readonly, copy, nonatomic) NSString *ide_coverage_UTI;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_platformName;
@property(readonly, nonatomic) BOOL ide_testReport_device_isSimulator;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_architecture;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_osVersion;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_modelCodename;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_modelName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_UTI;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_name;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_combined_platformName_and_osVersion;
@property(readonly, copy, nonatomic) NSNumber *ide_testReport_device_isSimulator_asNumber;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_modelKind;
@property(readonly) Class superclass;
@end

