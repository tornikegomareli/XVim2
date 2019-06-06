//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEKit/NSTextViewDelegate-Protocol.h>

@class IDEProvisioningSliceConfiguration, NSButton, NSString, NSTextView;
@protocol IDEProvisioningIssueSliceViewDelegate, NSTextAttachmentCell;

@interface IDEProvisioningIssueSliceView : NSView <NSTextViewDelegate>
{
    BOOL _wantsSubtitleButton;
    NSString *_title;
    NSString *_subtitle;
    NSString *_buttonTitle;
    NSTextView *_textView;
    NSButton *_button;
    double _bottomSpace;
    id <NSTextAttachmentCell> _textAttachmentCell;
    id <IDEProvisioningIssueSliceViewDelegate> _delegate;
    IDEProvisioningSliceConfiguration *_configuration;
}

@property(retain, nonatomic) IDEProvisioningSliceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <IDEProvisioningIssueSliceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <NSTextAttachmentCell> textAttachmentCell; // @synthesize textAttachmentCell=_textAttachmentCell;
@property(nonatomic) double bottomSpace; // @synthesize bottomSpace=_bottomSpace;
@property(retain, nonatomic) NSButton *button; // @synthesize button=_button;
@property(retain, nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) BOOL wantsSubtitleButton; // @synthesize wantsSubtitleButton=_wantsSubtitleButton;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)clickedSubtitleButton:(id)arg1;
- (void)clickedIssueButton:(id)arg1;
- (id)attributedStringForTitle:(id)arg1 subtitle:(id)arg2 wantsSubtitleButton:(BOOL)arg3;
- (unsigned long long)_controlSize;
- (void)addConstraints;
- (BOOL)translatesAutoresizingMaskIntoConstraints;
- (id)initWithButtonTitle:(id)arg1 sliceViewDelegate:(id)arg2 configuration:(id)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 wantsSubtitleButton:(BOOL)arg3 sliceViewDelegate:(id)arg4 configuration:(id)arg5;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

