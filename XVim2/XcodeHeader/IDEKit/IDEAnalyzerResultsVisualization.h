//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTextVisualization.h>

@class IDEAnalyzerResultsExplorer, NSArray, NSMapTable, NSView;

@interface IDEAnalyzerResultsVisualization : DVTTextVisualization
{
    NSMapTable *_controlFlowPathsByStep;
    struct CGRect _cachedBounds;
    IDEAnalyzerResultsExplorer *_explorer;
    NSView *_hostingView;
}

@property __weak NSView *hostingView; // @synthesize hostingView=_hostingView;
@property __weak IDEAnalyzerResultsExplorer *explorer; // @synthesize explorer=_explorer;
- (void).cxx_destruct;
- (id)drawablesInRect:(struct CGRect)arg1;
- (void)drawOverTextInRect:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)setOpacity:(double)arg1;
- (void)refresh;
@property(readonly) NSArray *allControlFlowPaths;
- (id)initWithExplorer:(id)arg1;

@end

