//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IDEDistributionMethod, NSDictionary, NSString;
@protocol IDEDistributable;

@protocol IDEDistributionArchiveReformatter
- (id <IDEDistributable>)reformattedArchive:(id <IDEDistributable>)arg1 distributionMethod:(IDEDistributionMethod *)arg2 error:(id *)arg3;
- (BOOL)wantsReformattingForArchive:(id <IDEDistributable>)arg1 distributionMethod:(IDEDistributionMethod *)arg2;
- (BOOL)isAppStoreContainerAppInfoDictionary:(NSDictionary *)arg1;
- (NSString *)inspectablePropertyValueForArchive:(id <IDEDistributable>)arg1;
- (NSString *)inspectablePropertyName;
@end

