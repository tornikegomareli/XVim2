//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface DVTHUDPopUpView : NSView
{
    double _arrowHeight;
    double _arrowPoint;
    unsigned long long _arrowEdge;
    BOOL _hidesArrow;
}

+ (void)initialize;
@property(nonatomic) BOOL hidesArrow; // @synthesize hidesArrow=_hidesArrow;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) double arrowPoint; // @synthesize arrowPoint=_arrowPoint;
@property(nonatomic) unsigned long long arrowEdge; // @synthesize arrowEdge=_arrowEdge;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)backgroundPathInRect:(struct CGRect)arg1;
- (struct CGRect)highlightRect;
@property(readonly) struct CGRect contentRect;
@property(readonly) struct CGPoint maximumArrowPoint;
@property(readonly) struct CGPoint minimumArrowPoint;
@property(readonly) struct CGPoint arrowCoordinates;
- (struct CGPoint)arrowCoordinatesForArrowPoint:(double)arg1;
- (double)adjustedArrowPointForArrowPoint:(double)arg1;
- (void)setArrowPointWithTargetPoint:(struct CGPoint)arg1;
- (BOOL)isValidTargetPoint:(struct CGPoint)arg1;
- (double)edgeDistance;
- (BOOL)arrowOnTopOrBottomEdge;
- (BOOL)arrowOnLeftOrRightEdge;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

@end

