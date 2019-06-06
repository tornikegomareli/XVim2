//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEVariablesViewQuickLookProvider-Protocol.h>

@class NSString, NSURL, NSView;

@interface IDEDummyQuickLookProvider : NSObject <IDEVariablesViewQuickLookProvider>
{
    NSView *_quickLookView;
}

@property(retain) NSView *quickLookView; // @synthesize quickLookView=_quickLookView;
- (void).cxx_destruct;
- (void)cancelLoading;
@property(readonly) int loadedState;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

