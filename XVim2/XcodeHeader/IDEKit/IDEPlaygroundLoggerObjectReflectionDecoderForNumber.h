//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEPlaygroundLoggerObjectReflectionDecoder-Protocol.h>

@class NSString;

@interface IDEPlaygroundLoggerObjectReflectionDecoderForNumber : NSObject <IDEPlaygroundLoggerObjectReflectionDecoder>
{
}

- (id)_stringFromDataWithoutNullTerminator:(id)arg1;
- (id)createAttributedSummaryForObjectReflection:(id)arg1;
- (id)decodeFloatingPointObjectReflection:(id)arg1;
- (id)decodeIntegerObjectReflection:(id)arg1;
- (id)decodeObjectReflection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

