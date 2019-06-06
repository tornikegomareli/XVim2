//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTDeveloperAccountSessionProtocol-Protocol.h>

@class DVTDeveloperAccount, NSData, NSString;

@interface DVTDeveloperAccountSession : NSObject <DVTDeveloperAccountSessionProtocol>
{
    id _identity;
    DVTDeveloperAccount *_account;
    NSString *_prsID;
    NSString *_sessionID;
    NSData *_sessionData;
}

@property(copy) NSData *sessionData; // @synthesize sessionData=_sessionData;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) NSString *prsID; // @synthesize prsID=_prsID;
@property(nonatomic) __weak DVTDeveloperAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property struct __SecIdentity *identity;

@end

