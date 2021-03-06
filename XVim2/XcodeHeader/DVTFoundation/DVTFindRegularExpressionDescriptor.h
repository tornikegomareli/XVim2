//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTFindDescriptor.h>

@class NSRegularExpression;

@interface DVTFindRegularExpressionDescriptor : DVTFindDescriptor
{
    NSRegularExpression *_regularExpression;
}

- (void).cxx_destruct;
@property(readonly) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
- (id)firstMatchingResultInString:(id)arg1 backwards:(BOOL)arg2 inRange:(struct _NSRange)arg3 withWordFindingBlock:(CDUnknownBlockType)arg4 passingTest:(CDUnknownBlockType)arg5 docLocationCreationBlock:(CDUnknownBlockType)arg6;
- (BOOL)caseSensitive;
- (id)displayString;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRegularExpression:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

