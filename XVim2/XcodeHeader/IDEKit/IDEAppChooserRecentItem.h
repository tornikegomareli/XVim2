//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface IDEAppChooserRecentItem : NSObject
{
    NSURL *_url;
    NSString *_displayName;
    NSString *_bundleIdentifier;
}

@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)uniqueByBundleID;
- (id)initWithDefaultDictionary:(id)arg1;

@end

