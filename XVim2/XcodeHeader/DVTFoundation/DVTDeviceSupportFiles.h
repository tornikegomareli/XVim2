//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTDeviceSupportFiles : NSObject
{
}

+ (id)exactSymbolsDirectoryForPlatform:(id)arg1 version:(id)arg2 build:(id)arg3;
+ (id)exactSymbolsDirectoryForVersion:(id)arg1 andBuild:(id)arg2;
+ (id)exactSymbolsDirectoryForModel:(id)arg1 architecture:(id)arg2 version:(id)arg3 build:(id)arg4;
+ (id)exactSymbolsDirectoryForPlatform:(id)arg1 preferringPlatformForModel:(id)arg2 architecture:(id)arg3 version:(id)arg4 build:(id)arg5;
+ (id)exactSymbolsDirectoryForPlatform:(id)arg1 model:(id)arg2 architecture:(id)arg3 version:(id)arg4 build:(id)arg5;
+ (id)_exactSymbolsDirectoryForPlatform:(id)arg1 model:(id)arg2 architecture:(id)arg3 version:(id)arg4 build:(id)arg5;
+ (id)idealExistingSymbolsDirectoryForModel:(id)arg1 version:(id)arg2 build:(id)arg3;
+ (id)_exactDeveloperDiskImageForPlatform:(id)arg1 version:(id)arg2 build:(id)arg3;
+ (id)_idealDeveloperDiskImageForPlatform:(id)arg1 version:(id)arg2 build:(id)arg3;
+ (id)idealDeveloperDiskImageForModel:(id)arg1 version:(id)arg2 build:(id)arg3;
+ (id)idealDeveloperDiskImageForPlatform:(id)arg1 model:(id)arg2 version:(id)arg3 build:(id)arg4;
+ (id)idealDeveloperDiskImageForPlatform:(id)arg1 version:(id)arg2 build:(id)arg3 allowFallback:(_Bool)arg4;

@end

