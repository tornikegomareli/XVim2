//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEIndexGeniusResultsFinder.h>

@interface IDEMultiStepIndexGeniusResultsFinder : IDEIndexGeniusResultsFinder
{
}

- (void)_updateResultsWithMostRecentFetch:(CDUnknownBlockType)arg1;
- (void)_updateGeniusResultsWithMostRecentFetch:(CDUnknownBlockType)arg1;
- (BOOL)_fetchResultsFromIndex:(id)arg1 oldResults:(id)arg2 isCancelledCallback:(CDUnknownBlockType)arg3;
- (BOOL)_fetchResultsFromIndex:(id)arg1 oldResults:(id)arg2 cancellationChecker:(CDUnknownBlockType)arg3;
- (BOOL)_shouldFetchResultsFromIndex:(CDUnknownBlockType)arg1;
- (BOOL)_shouldResultsFinderQueryIndex:(CDUnknownBlockType)arg1;
- (BOOL)_getUpdateGeniusResultsPhase1Block:(CDUnknownBlockType *)arg1 phase2Block:(CDUnknownBlockType *)arg2 phase3Block:(CDUnknownBlockType *)arg3;

@end

