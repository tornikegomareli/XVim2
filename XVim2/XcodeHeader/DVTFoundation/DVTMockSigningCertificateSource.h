//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTSigningCertificateSource.h>

@class NSMutableSet;

@interface DVTMockSigningCertificateSource : DVTSigningCertificateSource
{
    NSMutableSet *_allSigningCertificates;
}

- (void).cxx_destruct;
- (void)triggerUnknownEvent;
- (void)triggerDidAddOrRemovePrivateKeys;
- (void)triggerRemoveForSigningCertificate:(id)arg1;
- (void)triggerAddForSigningCertificate:(id)arg1;
- (id)allSigningCertificates;
- (void)_stopListeningForKeychainEvents;
- (void)_startListeningForKeychainEvents;
- (id)initWithDictionary:(id)arg1 logAspect:(id)arg2;
- (id)initWithPlist:(id)arg1 logAspect:(id)arg2;
- (id)initWithInitialSigningCertificates:(id)arg1 logAspect:(id)arg2;
- (id)initWithLogAspect:(id)arg1;

@end

