//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSWindow, _TtC6IDEKit20IDENavigationOverlay;
@protocol _TtP6IDEKit26IDENavigationOverlayTarget_, _TtP6IDEKit28IDENavigationOverlayDelegate_;

@protocol _TtP6IDEKit28IDENavigationOverlayDelegate_
- (id <_TtP6IDEKit26IDENavigationOverlayTarget_>)navigationOverlay:(_TtC6IDEKit20IDENavigationOverlay *)arg1 nextTargetInDirection:(long long)arg2 from:(id <_TtP6IDEKit26IDENavigationOverlayTarget_>)arg3 candidateTargets:(NSArray *)arg4 parentWindow:(NSWindow *)arg5 fallbackDelegate:(id <_TtP6IDEKit28IDENavigationOverlayDelegate_>)arg6 considerInsertionTargets:(BOOL)arg7;
@end

