//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTAnnotationProvider.h>

#import <IDEKit/DVTTextAnnotationDelegate-Protocol.h>

@class DVTObservingToken, IDEAnnotationContext, NSString;

@interface IDEUIRecordingAnnotationProvider : DVTAnnotationProvider <DVTTextAnnotationDelegate>
{
    IDEAnnotationContext *_context;
    DVTObservingToken *_uiRecordingHeadObserver;
    DVTObservingToken *_uiRecordingSessionObserver;
    BOOL _useMultiLineAnnotations;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(retain) IDEAnnotationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)providerWillUninstall;
- (BOOL)_doesURLResolveToContextURL:(id)arg1;
- (void)_invalidateAnnotation:(id)arg1;
- (void)_handleUIRecordingHeadLocationChanged:(id)arg1;
- (id)_initWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

