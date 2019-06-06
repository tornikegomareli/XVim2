//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDESourceControlWorkspaceMonitor, NSArray, NSError, NSString;

@protocol IDESourceControlWorkspaceUIHandlerProtocol <NSObject>
- (void)requestOperationConfirmationForOperationName:(NSString *)arg1 workingCopyName:(NSArray *)arg2 completionBlock:(void (^)(BOOL))arg3;
- (void)workspaceMonitorDidFinishScanning:(IDESourceControlWorkspaceMonitor *)arg1;
- (void)warnAboutNewerRepositoryVersionWithError:(NSError *)arg1;
@end

