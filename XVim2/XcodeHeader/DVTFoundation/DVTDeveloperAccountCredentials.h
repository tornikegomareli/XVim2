//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@class AKAppleIDSession, NSDictionary, NSString, NSURLCredential;

@interface DVTDeveloperAccountCredentials : NSObject <NSCopying>
{
    BOOL __optOutOfTokenRequirement;
    NSString *_username;
    NSURLCredential *_URLCredential;
}

+ (BOOL)deleteUsername:(id)arg1 keychain:(id)arg2 error:(id *)arg3;
+ (id)accountCredentialsFromUsername:(id)arg1 alternateDSID:(id)arg2 token:(id)arg3;
+ (id)accountCredentialsFromUsername:(id)arg1 password:(id)arg2 error:(id *)arg3;
+ (id)_accountCredentialsFromUsername:(id)arg1 alternateDSID:(id)arg2 token:(id)arg3 keychain:(id)arg4 wantsAllApplicationsToAccessKeychainItems:(BOOL)arg5 successfullyPersisted:(char *)arg6 error:(id *)arg7;
+ (id)_accountCredentialsFromUsername:(id)arg1 password:(id)arg2 keychain:(id)arg3 wantsAllApplicationsToAccessKeychainItems:(BOOL)arg4 successfullyPersisted:(char *)arg5 error:(id *)arg6;
+ (id)_accountCredentialsForUsername:(id)arg1 keychain:(id)arg2 error:(id *)arg3;
+ (id)_keychainServiceAccountCredentialsForUsername:(id)arg1 keychain:(id)arg2 error:(id *)arg3;
+ (id)_legacyAccountCredentialsForUsername:(id)arg1 keychain:(id)arg2 error:(id *)arg3;
@property BOOL _optOutOfTokenRequirement; // @synthesize _optOutOfTokenRequirement=__optOutOfTokenRequirement;
@property(readonly, nonatomic) NSURLCredential *URLCredential; // @synthesize URLCredential=_URLCredential;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)applyAuthenticationHeadersToRequest:(id)arg1;
@property(readonly, nonatomic) NSDictionary *authenticationHeaders;
- (id)authenticationHeadersForRequest:(id)arg1;
- (id)_manuallyProvidedAuthenticationHeaders;
@property(readonly, nonatomic) AKAppleIDSession *appleIDSession;
- (BOOL)_deleteFromKeychain:(id)arg1 error:(id *)arg2;
- (BOOL)saveToKeychain:(id)arg1 wantsAllApplicationsToAccessKeychainItems:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_saveUsingKeychainServiceToKeychain:(id)arg1 error:(id *)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLCredential:(id)arg1 username:(id)arg2;
- (id)initWithURLCredential:(id)arg1;
- (id)_accountCredentialsWithPassword:(id)arg1 keychain:(id)arg2 wantsAllApplicationsToAccessKeychainItems:(BOOL)arg3 successfullyPersisted:(char *)arg4 error:(id *)arg5;

@end

