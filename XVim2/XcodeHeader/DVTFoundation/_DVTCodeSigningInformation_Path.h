//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTCodeSigningInformation.h>

@class DVTCodeSignatureValidity, DVTFilePath, NSNumber;

@interface _DVTCodeSigningInformation_Path : DVTCodeSigningInformation
{
    NSNumber *_appleSigned;
    DVTCodeSignatureValidity *_validity;
    DVTFilePath *_path;
}

+ (id)codeSigningDictionaryForFilePath:(id)arg1 architecture:(id)arg2 additionalCSFlags:(unsigned int)arg3 error:(id *)arg4;
@property(readonly) DVTFilePath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)architecturesWithError:(id *)arg1;
- (id)validity;
- (id)codeSigningDictionaryWithAdditionalCSFlags:(unsigned int)arg1 architecture:(id)arg2 error:(id *)arg3;
- (BOOL)isAppleSigned;
- (id)initWithFilePath:(id)arg1 error:(id *)arg2;

@end

