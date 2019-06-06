//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDownloadableOperation.h>

@class DVTDownloadable, DVTDownloadableManager;

@interface DVTDownloadableOperationDownload : DVTDownloadableOperation
{
    DVTDownloadableManager *_manager;
    DVTDownloadable *_downloadable;
    struct AuthorizationOpaqueRef *_authRef;
}

@property(readonly) DVTDownloadable *downloadable; // @synthesize downloadable=_downloadable;
- (void).cxx_destruct;
- (void)cancel;
- (void)downloadableOperationMain;
- (void)setError:(id)arg1;
- (id)initWithDownloadable:(id)arg1 userRequested:(BOOL)arg2 authorization:(struct AuthorizationOpaqueRef *)arg3 manager:(id)arg4;

@end

