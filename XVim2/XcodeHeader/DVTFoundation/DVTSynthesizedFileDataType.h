//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTFileDataType.h>

@class DVTPrimitiveFileDataType, NSSet;

@interface DVTSynthesizedFileDataType : DVTFileDataType
{
    DVTPrimitiveFileDataType *_primaryType;
    NSSet *_secondaryTypes;
}

- (void).cxx_destruct;
- (id)description;
- (id)stringRepresentation;
- (id)displayName;
- (id)secondaryFileDataTypes;
- (id)primaryFileDataType;
- (id)init;
- (id)initWithPrimaryType:(id)arg1 secondaryTypes:(id)arg2;

@end

