//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTGraphLayerSelectionDetails : NSObject
{
    NSString *_description;
    struct CGPoint _modelAnchorPoint;
}

@property(readonly) struct CGPoint modelAnchorPoint; // @synthesize modelAnchorPoint=_modelAnchorPoint;
@property(readonly) NSString *description; // @synthesize description=_description;
- (void).cxx_destruct;
- (id)initWithDescriptionString:(id)arg1 anchorPoint:(struct CGPoint)arg2;

@end

