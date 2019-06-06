//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTProvisioningProfileManager.h>

@class DVTDispatchLock, NSError, NSMutableDictionary, NSMutableSet, NSSet;
@protocol DVTMockProvisioningProfileManagerDelegate;

@interface DVTMockProvisioningProfileManager : DVTProvisioningProfileManager
{
    NSMutableSet *_profiles;
    NSMutableSet *_certificates;
    DVTDispatchLock *_lock;
    id <DVTMockProvisioningProfileManagerDelegate> _testDelegate;
    NSError *_installProfilesError;
    NSMutableDictionary *_mockDataToProvisioningProfile;
    NSMutableDictionary *_mockDataToProvisioningProfileError;
}

+ (id)logAspect;
@property(retain, nonatomic) NSMutableDictionary *mockDataToProvisioningProfileError; // @synthesize mockDataToProvisioningProfileError=_mockDataToProvisioningProfileError;
@property(retain, nonatomic) NSMutableDictionary *mockDataToProvisioningProfile; // @synthesize mockDataToProvisioningProfile=_mockDataToProvisioningProfile;
@property(retain, nonatomic) NSError *installProfilesError; // @synthesize installProfilesError=_installProfilesError;
@property(retain, nonatomic) id <DVTMockProvisioningProfileManagerDelegate> testDelegate; // @synthesize testDelegate=_testDelegate;
- (void).cxx_destruct;
- (id)profileMatchingUUID:(id)arg1;
- (void)forceProfileLoading;
- (id)provisioningProfiles;
- (BOOL)areProfilesLoaded;
- (void)removeProfile:(id)arg1;
- (void)addProfile:(id)arg1;
- (void)setProfiles:(id)arg1;
@property(readonly) NSSet *certificates;
- (void)installProfiles:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)profileWithData:(id)arg1 platform:(id)arg2 error:(id *)arg3;
- (void)addProfile:(id)arg1 andError:(id)arg2 forData:(id)arg3;
- (id)expiringProfiles;
- (id)profilesMatchingPredicate:(id)arg1;
- (id)profileWithURL:(id)arg1 error:(id *)arg2;
- (id)expiringProfilesInExpansionContext:(id)arg1;
- (id)profilesMatchingApplicationID:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (id)initWithSource:(id)arg1;
- (id)init;

@end

