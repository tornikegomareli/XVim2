//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSExpression, NSPredicate, NSPredicateOperator;

@protocol NSPredicateVisitor
- (void)visitPredicateOperator:(NSPredicateOperator *)arg1;
- (void)visitPredicateExpression:(NSExpression *)arg1;
- (void)visitPredicate:(NSPredicate *)arg1;
@end

