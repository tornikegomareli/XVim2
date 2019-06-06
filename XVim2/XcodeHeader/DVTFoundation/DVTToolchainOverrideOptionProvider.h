//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTToolchainRegistry, NSArray;

@interface DVTToolchainOverrideOptionProvider : NSObject
{
    DVTToolchainRegistry *_registry;
    BOOL _isAppleInternal;
}

+ (id)keyPathsForValuesAffectingShouldOfferOptions;
+ (id)keyPathsForValuesAffectingOptionsIncludingDoNotOverride;
+ (id)keyPathsForValuesAffectingOptionsExcludingDoNotOverride;
+ (id)defaultProvider;
@property(readonly) DVTToolchainRegistry *registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
@property(readonly) BOOL shouldOfferOptions;
@property(readonly) NSArray *optionsIncludingDoNotOverride;
@property(readonly) NSArray *optionsExcludingDoNotOverride;
- (id)initWithToolchainRegistry:(id)arg1 isAppleInternal:(BOOL)arg2;

@end

