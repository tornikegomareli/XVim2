//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDeveloperAccount.h>

@class NSString;

@interface DVTMockDeveloperAccount : DVTDeveloperAccount
{
    NSString *_mockUsername;
    NSString *_mockPassword;
}

@property(copy) NSString *mockPassword; // @synthesize mockPassword=_mockPassword;
@property(copy) NSString *mockUsername; // @synthesize mockUsername=_mockUsername;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)password;
- (id)username;

@end

