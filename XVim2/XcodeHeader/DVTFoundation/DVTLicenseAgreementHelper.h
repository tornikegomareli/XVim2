//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTLicenseAgreementHelper : NSObject
{
    int _installedLicenseType;
    NSString *_installedLicenseID;
}

+ (BOOL)shouldShowLicenseAgreementForInstalledXcodeLicenseID:(id)arg1 lastAgreedToLicenseID:(id)arg2 installedXcodeVersion:(id)arg3 xcodeVersionForLastAgreedToLicense:(id)arg4;
@property(readonly) NSString *installedLicenseID; // @synthesize installedLicenseID=_installedLicenseID;
@property(readonly) int installedLicenseType; // @synthesize installedLicenseType=_installedLicenseType;
- (void).cxx_destruct;
- (BOOL)shouldShowLicenseAgreement;
@property(readonly) NSString *installedLicensePlistPath;
- (BOOL)agreeToLicense;
- (BOOL)_isLicensePlistImmutable;
- (id)_getLoggedInUserName;
- (BOOL)_isRunningAsSuperUser;
- (id)initWithLicenseInfoPath:(id)arg1;

@end

