//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <IDEKit/IDEActivityThemeableLayer-Protocol.h>

@class IDEActivityPopUpReportLayer, NSArray, NSMutableArray, NSString;
@protocol IDEActivityPopUpContentLayerDelegate;

@interface IDEActivityPopUpContentLayer : CALayer <IDEActivityThemeableLayer>
{
    NSMutableArray *_orderedReportLayers;
    NSMutableArray *_lineLayers;
    BOOL _issuesAreVisible;
    BOOL _makeSpaceForIndeterminateProgressIndicator;
    NSMutableArray *_orderedVisibleReportLayers;
    NSArray *_issueCategories;
    NSString *_issuesContainerTypeString;
    IDEActivityPopUpReportLayer *_layerToHide;
    double _spaceNeededForMultiActionIndicator;
}

@property(nonatomic) BOOL makeSpaceForIndeterminateProgressIndicator; // @synthesize makeSpaceForIndeterminateProgressIndicator=_makeSpaceForIndeterminateProgressIndicator;
@property(nonatomic) double spaceNeededForMultiActionIndicator; // @synthesize spaceNeededForMultiActionIndicator=_spaceNeededForMultiActionIndicator;
@property(retain, nonatomic) IDEActivityPopUpReportLayer *layerToHide; // @synthesize layerToHide=_layerToHide;
@property(copy) NSString *issuesContainerTypeString; // @synthesize issuesContainerTypeString=_issuesContainerTypeString;
@property(copy) NSArray *issueCategories; // @synthesize issueCategories=_issueCategories;
@property BOOL issuesAreVisible; // @synthesize issuesAreVisible=_issuesAreVisible;
- (void).cxx_destruct;
- (void)updateTheme;
- (void)layoutSublayers;
@property(readonly) NSMutableArray *orderedVisibleReportLayers; // @synthesize orderedVisibleReportLayers=_orderedVisibleReportLayers;
- (void)addActivityReportLayer:(id)arg1;
- (void)_addStandardLineLayer;
- (void)removeActivityReportLayer:(id)arg1;
- (void)_recalculateVisibleReportAndLineLayers;
@property(readonly) double preferredHeight;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property id <IDEActivityPopUpContentLayerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

