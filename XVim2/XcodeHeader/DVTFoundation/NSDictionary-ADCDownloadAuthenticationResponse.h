//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

#import <DVTFoundation/DVTDiffHashing-Protocol.h>
#import <DVTFoundation/DVTPropertyListValue-Protocol.h>

@class NSArray, NSData, NSDate, NSNumber, NSString;

@interface NSDictionary (ADCDownloadAuthenticationResponse) <DVTPropertyListValue, DVTDiffHashing>
+ (id)dvt_dictionaryWithObjects:(id)arg1 groupedIntoOrderedSetsByKeyPath:(id)arg2 makeGroupsImmutable:(BOOL)arg3;
+ (id)dvt_dictionaryWithObjects:(id)arg1 groupedIntoSetsByKeyPath:(id)arg2 makeGroupsImmutable:(BOOL)arg3;
+ (id)dvt_dictionaryWithObjects:(id)arg1 groupedIntoArraysByKeyPath:(id)arg2 makeGroupsImmutable:(BOOL)arg3;
+ (id)dvt_dictionaryWithTuples:(id)arg1;
+ (id)dvt_strictDictionaryWithKeysAndObjects:(id)arg1;
+ (id)dvt_dictionaryWithKeysAndValues:(id)arg1;
- (id)adc_userString;
- (id)adc_resultString;
- (id)adc_resultCode;
- (id)dvt_dictionaryByApplyingBlock:(CDUnknownBlockType)arg1;
- (BOOL)dvt_areAnyEntriesPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)dvt_areAllEntriesPassingTest:(CDUnknownBlockType)arg1;
- (id)dvt_entriesPassingTest:(CDUnknownBlockType)arg1;
- (struct CGRect)dvt_rectForKey:(id)arg1 defaultValue:(struct CGRect)arg2;
- (struct CGSize)dvt_sizeForKey:(id)arg1 defaultValue:(struct CGSize)arg2;
- (struct CGPoint)dvt_pointForKey:(id)arg1 defaultValue:(struct CGPoint)arg2;
- (double)dvt_doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (float)dvt_floatForKey:(id)arg1 defaultValue:(float)arg2;
- (BOOL)dvt_boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (id)dvt_stringForKey:(id)arg1 defaultValue:(id)arg2;
- (long long)dvt_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)dvt_numberOrNilForKey:(id)arg1;
- (id)dvt_dateOrNilForKey:(id)arg1;
- (id)dvt_arrayOrNilForKey:(id)arg1;
- (id)dvt_dictionaryOrNilForKey:(id)arg1;
- (id)dvt_dataOrNilForKey:(id)arg1;
- (id)dvt_stringOrNilForKey:(id)arg1;
- (BOOL)dvt_isNonEmpty;
- (id)dvt_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)dvt_dictionaryBySettingObject:(id)arg1 forKey:(id)arg2;
- (id)dvt_dictionaryByRemovingObjectsForKeys:(id)arg1;
- (id)dvt_dictionaryByExpandingKeysAndValuesWithMacroExpansionScope:(id)arg1;
- (id)dvt_dictionaryByExpandingValuesWithMacroExpansionScope:(id)arg1;
- (id)dvt_decodePlistArrayForKey:(id)arg1 objectsOfClass:(Class)arg2 error:(id *)arg3;
- (id)dvt_decodePlistObjectForKey:(id)arg1 ofClass:(Class)arg2 error:(id *)arg3;
- (id)dvt_plistDictionaryForKey:(id)arg1 error:(id *)arg2;
- (id)dvt_plistArrayForKey:(id)arg1 error:(id *)arg2;
- (id)dvt_dataForKey:(id)arg1 error:(id *)arg2;
- (id)dvt_dateForKey:(id)arg1 error:(id *)arg2;
- (id)dvt_numberForKey:(id)arg1 error:(id *)arg2;
- (id)dvt_stringForKey:(id)arg1 error:(id *)arg2;
@property(readonly) NSDictionary *dictionaryValue;
@property(readonly) NSArray *arrayValue;
@property(readonly) NSDate *dateValue;
@property(readonly) NSNumber *numberValue;
@property(readonly) NSData *dataValue;
@property(readonly) NSString *stringValue;
- (unsigned long long)dvt_diffHashForDataSource:(id)arg1;
- (void)dvt_getStrongObjects:(id *)arg1 andStrongKeys:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

