//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTDocumentLocation, DVTFilePath, NSURL;
@protocol IDEIndexSymbol;

@protocol IDEIndexSymbolOccurrence <NSObject>
- (id <IDEIndexSymbol>)containingSymbol;
- (id <IDEIndexSymbol>)correspondingSymbol;
@property(nonatomic, readonly) DVTDocumentLocation *location;
@property(nonatomic, readonly) NSURL *moduleURL;
@property(nonatomic, readonly) DVTFilePath *file;
@property(nonatomic, readonly) long long role;
@end

