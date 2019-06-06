//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTFindResult.h>

#import <DVTFoundation/NSCoding-Protocol.h>
#import <DVTFoundation/NSCopying-Protocol.h>

@class NSRegularExpression, NSString, NSTextCheckingResult;

@interface DVTFindRegularExpressionResult : DVTFindResult <NSCoding, NSCopying>
{
    NSString *_wholeContextString;
    NSRegularExpression *_regularExpression;
    NSTextCheckingResult *_match;
}

@property(readonly) NSTextCheckingResult *match; // @synthesize match=_match;
@property(readonly) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
- (void).cxx_destruct;
- (id)stringForReplacementString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFoundLocation:(id)arg1 withRange:(struct _NSRange)arg2 inContext:(id)arg3 regularExpression:(id)arg4 andRegexMatch:(id)arg5;

@end

