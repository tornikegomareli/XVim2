//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
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

