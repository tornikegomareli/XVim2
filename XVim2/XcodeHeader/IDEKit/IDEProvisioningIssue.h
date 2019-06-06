//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSError, NSString;

@interface IDEProvisioningIssue : NSObject <DVTInvalidation>
{
    BOOL _hasSubTitleAction;
    NSString *_title;
    NSString *_subtitle;
    NSError *_underlyingError;
}

+ (id)issueWithUserAction:(id)arg1 errorProvider:(id)arg2;
+ (id)issueWithError:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(nonatomic) BOOL hasSubTitleAction; // @synthesize hasSubTitleAction=_hasSubTitleAction;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)didSelectSubtitleAction:(id)arg1;
- (void)_performEnableDevleopmentSigningAction;
- (void)_performTrustSettingsRepair:(id)arg1;
- (void)_performManageCertificatesAction:(id)arg1;
- (void)_performSignInAction:(id)arg1;
- (void)_performAddAccountAction;
- (void)_performViewAccountsAction;
- (void)_performTryAgainAction;
- (void)didSelectIssueAction:(id)arg1;
@property(readonly) BOOL requiresAdditionalUserInteraction;
@property(readonly) NSString *buttonTitle;
- (BOOL)_canManageCertificates;
- (id)_errorPlatform;
- (id)_errorCertificate;
- (id)_errorTeam;
- (id)_errorAccount;
- (long long)_errorAction;
- (id)initWithError:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

