//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class IDEIssue, NSArray, NSString;
@protocol IDENoteAnnotationExplorableItem;

@protocol IDENoteAnnotationExplorableItem <NSObject>
@property(nonatomic, readonly) IDEIssue *exploredIssue;
- (BOOL)isValid;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) NSArray *locations;
@property(nonatomic, readonly) BOOL isNoteSeverity;
@property(nonatomic, readonly) NSArray *childExplorableItems;
@property(nonatomic, readonly) id <IDENoteAnnotationExplorableItem> parentExplorableItem;

// Remaining properties
@property(nonatomic, readonly) BOOL valid;
@end

