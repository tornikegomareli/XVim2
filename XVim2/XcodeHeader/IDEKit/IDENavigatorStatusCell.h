//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@class NSAttributedString, NSImage, NSString;

@interface IDENavigatorStatusCell : NSActionCell
{
    unsigned long long _imageScaling;
    struct CGSize _baseImageSize;
    NSImage *_image;
    NSAttributedString *_attributedStringValue;
    int _statusCellType;
}

+ (void)initialize;
@property(readonly) int statusCellType; // @synthesize statusCellType=_statusCellType;
@property(retain) NSImage *image; // @synthesize image=_image;
@property struct CGSize baseImageSize; // @synthesize baseImageSize=_baseImageSize;
@property unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
- (void).cxx_destruct;
- (struct CGRect)scaledRectForDrawingImageWithSize:(struct CGSize)arg1 inFrame:(struct CGRect)arg2;
- (struct CGSize)cellSize;
- (struct CGSize)_cellTextSize;
- (id)attributedStringValue;
@property(copy) NSString *title; // @dynamic title;
- (void)setHighlighted:(BOOL)arg1;
- (void)_validateCachedAttributedStringValue;
- (void)_clearAttributedStringValue;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawImageAndTextStatusWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawImageStatusWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawCharacterStatusWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawTextStatusWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawStatusStringInPathRect:(struct CGRect)arg1 view:(id)arg2;
- (id)initWithType:(int)arg1;
- (id)dvt_extraBindings;

@end

