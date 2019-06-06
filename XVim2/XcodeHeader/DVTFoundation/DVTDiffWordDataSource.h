//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDiffDataSource.h>

@class NSArray;

@interface DVTDiffWordDataSource : DVTDiffDataSource
{
    NSArray *_tokenStorage;
    BOOL _skipTokenizingNewlines;
}

@property BOOL skipTokenizingNewlines; // @synthesize skipTokenizingNewlines=_skipTokenizingNewlines;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)didChange;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (void)getDiffTokens:(CDStruct_3dd9eb72 *)arg1 inDiffDescriptor:(id)arg2 inRange:(struct _NSRange)arg3;
- (CDStruct_3dd9eb72)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (id)_tokenStorageForDescriptor:(id)arg1;

@end

