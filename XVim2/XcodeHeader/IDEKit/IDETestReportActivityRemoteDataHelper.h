//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSURLSessionDownloadDelegate-Protocol.h>

@class NSString, NSURL, NSURLSessionDownloadTask;
@protocol IDETestReport_RemoteAsset, IDETestReport_Test, IDETestReport_TestActivity;

@interface IDETestReportActivityRemoteDataHelper : NSObject <NSURLSessionDownloadDelegate>
{
    id <IDETestReport_RemoteAsset> _asset;
    CDUnknownBlockType _progressBlock;
    id <IDETestReport_TestActivity> _activity;
    id <IDETestReport_Test> _test;
    NSURLSessionDownloadTask *_downloadTask;
    NSURL *_destinationDirectory;
}

@property(copy, nonatomic) NSURL *destinationDirectory; // @synthesize destinationDirectory=_destinationDirectory;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancel;
- (void)downloadRemoteAsset:(id)arg1 forActivity:(id)arg2 inTest:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (void)copyDownloadedRemoteAssetFromTmpLocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

