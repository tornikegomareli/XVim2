//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>
#import <IDEKit/NSValidatedUserInterfaceItem-Protocol.h>

@class IDEKeyBindingSet, NSArray, NSMutableArray, NSString;

@interface IDEKeyBinding : NSObject <NSCopying, NSValidatedUserInterfaceItem>
{
    IDEKeyBindingSet *_keyBindingSet;
    NSString *_title;
    NSString *_parentTitle;
    NSString *_group;
    NSArray *_actions;
    NSMutableArray *_keyboardShortcuts;
    unsigned long long _maxNumberOfShortcuts;
    struct _IDEKeyBindingFlags _kbFlags;
}

+ (id)keyPathsForValuesAffectingIsModified;
+ (id)keyBindingWithTitle:(id)arg1 parentTitle:(id)arg2 group:(id)arg3 actions:(id)arg4 keyboardShortcuts:(id)arg5;
+ (id)_stringFromModifierMask:(unsigned long long)arg1;
+ (unsigned long long)_defaultMaxNumberOfShortcuts;
@property unsigned long long maxNumberOfShortcuts; // @synthesize maxNumberOfShortcuts=_maxNumberOfShortcuts;
@property(copy, nonatomic) NSArray *keyboardShortcuts; // @synthesize keyboardShortcuts=_keyboardShortcuts;
@property(readonly) NSArray *actions; // @synthesize actions=_actions;
@property(readonly) NSString *group; // @synthesize group=_group;
@property(readonly) NSString *parentTitle; // @synthesize parentTitle=_parentTitle;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(retain) IDEKeyBindingSet *keyBindingSet; // @synthesize keyBindingSet=_keyBindingSet;
- (void).cxx_destruct;
@property(readonly) long long tag;
@property(readonly) SEL action;
@property(setter=setControlModifierMaskLocked:) BOOL isControlModifierMaskLocked;
@property(setter=setCommandModifierMaskLocked:) BOOL isCommandModifierMaskLocked;
@property(setter=setOptionModifierMaskLocked:) BOOL isOptionModifierMaskLocked;
@property(setter=setShiftModifierMaskLocked:) BOOL isShiftModifierMaskLocked;
@property(setter=setConflictedWithHotKey:) BOOL isConflictedWithHotKey;
@property(setter=setConflicted:) BOOL isConflicted;
@property(readonly) BOOL isModified;
@property(setter=setNavigation:) BOOL isNavigation;
@property(setter=setGroupedAlternate:) BOOL isGroupedAlternate;
@property(setter=setAlternate:) BOOL isAlternate;
@property(readonly, copy) NSString *commandIdentifier;
- (void)removePrefixFromKeyboardShortcut:(id)arg1;
- (id)addPrefixKeyboardShortcut:(id)arg1 toKeyboardShortcut:(id)arg2;
- (void)removeObjectFromKeyboardShortcutsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inKeyboardShortcutsAtIndex:(unsigned long long)arg2;
@property(readonly) NSMutableArray *mutableKeyboardShortcuts;
- (void)_disablePostingKeyboardShortcutsDidChangeNotification;
- (void)_reenablePostingKeyboardShortcutsDidChangeNotification;
- (id)description;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToKeyBinding:(id)arg1;
- (id)initWithTitle:(id)arg1 parentTitle:(id)arg2 group:(id)arg3 actions:(id)arg4 keyboardShortcuts:(id)arg5;
- (id)displayTitle;

@end

