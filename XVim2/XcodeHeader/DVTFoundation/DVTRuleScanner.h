//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTSourceScanner.h>

@class NSMutableArray;

@interface DVTRuleScanner : DVTSourceScanner
{
    NSMutableArray *_rules;
    unsigned short _startChar;
    unsigned int _isVolatile:1;
}

- (void).cxx_destruct;
- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(struct _NSRange)arg5 dirtyRange:(struct _NSRange *)arg6;
- (long long)nextToken:(id)arg1 withItemArray:(id)arg2 inTree:(id)arg3 withContext:(id)arg4 initialToken:(long long)arg5 range:(struct _NSRange)arg6 dirtyRange:(struct _NSRange *)arg7;
- (BOOL)predictsRule:(long long)arg1 inputStream:(id)arg2;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;

@end

