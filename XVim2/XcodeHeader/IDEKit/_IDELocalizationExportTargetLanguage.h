//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _IDELocalizationExportTargetLanguage : NSObject
{
    BOOL _included;
    BOOL _canSetIncluded;
    BOOL _developmentRegion;
    NSString *_displayName;
    NSString *_localeIdentifier;
}

+ (id)keyPathsForValuesAffectingFormattedDisplayName;
@property(getter=isDevelopmentRegion) BOOL developmentRegion; // @synthesize developmentRegion=_developmentRegion;
@property(copy) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property BOOL canSetIncluded; // @synthesize canSetIncluded=_canSetIncluded;
@property(nonatomic, getter=isIncluded) BOOL included; // @synthesize included=_included;
- (void).cxx_destruct;
@property(readonly, copy) NSString *formattedDisplayName;

@end

