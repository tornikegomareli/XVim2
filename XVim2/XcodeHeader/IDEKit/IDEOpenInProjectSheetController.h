//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTFilePath, DVTStackBacktrace, IDEOpenInProjectViewController, NSString, NSURL;
@protocol IDEOpenInProjectViewControllerDataSource;

@interface IDEOpenInProjectSheetController : NSWindowController <DVTInvalidation>
{
    NSString *_openLogDescription;
    id <IDEOpenInProjectViewControllerDataSource> _dataSource;
    IDEOpenInProjectViewController *_openInProjectViewController;
    DVTFilePath *_projectFilePath;
}

+ (void)initialize;
@property(retain) DVTFilePath *projectFilePath; // @synthesize projectFilePath=_projectFilePath;
@property(retain) IDEOpenInProjectViewController *openInProjectViewController; // @synthesize openInProjectViewController=_openInProjectViewController;
@property(retain) id <IDEOpenInProjectViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *openLogDescription; // @synthesize openLogDescription=_openLogDescription;
- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)windowDidLoad;
@property(readonly) NSURL *projectURL;
- (void)primitiveInvalidate;
- (id)initWithOpenLogDescription:(id)arg1 dataSource:(id)arg2;
- (id)initWithOpenLogDescription:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

