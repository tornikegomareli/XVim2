//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

__attribute__((visibility("hidden")))
@interface _TtC6IDEKit26IDENavigationOverlayWindow : NSWindow
{
    // Error parsing type: , name: internallyAdjustingFrame
    // Error parsing type: , name: navigationAccessibilityElement
}

- (void).cxx_destruct;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (id)accessibilityChildren;
- (void)selectPreviousTab:(id)arg1;
- (void)selectNextTab:(id)arg1;
- (void)newWindowForTab:(id)arg1;
- (void)newTab:(id)arg1;
- (void)newWindow:(id)arg1;
- (void)handlePressGesture:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
@property(nonatomic, retain) NSWindow *parentWindow;
@property(nonatomic, readonly) BOOL canBecomeKeyWindow;

@end

