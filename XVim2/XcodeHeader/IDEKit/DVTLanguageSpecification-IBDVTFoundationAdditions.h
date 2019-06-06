//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTLanguageSpecification.h>

@interface DVTLanguageSpecification (IBDVTFoundationAdditions)
+ (id)objCCategoryNameSpecification;
+ (id)objCClassNameSpecification;
+ (id)objCCategoryClauseSpecification;
+ (id)objCCategoryOpenParenSpecification;
+ (id)objCAtDynamicSpecification;
+ (id)objCAtSynthesizeSpecification;
+ (id)objCBracketExpressionSpecification;
+ (id)objCParenthesisExpressionSpecification;
+ (id)objCClassMethodImplementationSpecification;
+ (id)objCClassMethodDeclarationSpecification;
+ (id)objCInstanceMethodImplementationSpecification;
+ (id)objCInstanceMethodDeclarationSpecification;
+ (id)objCPropertyDeclarationSpecification;
+ (id)objCIdentifierSpecification;
+ (id)objCBlockSpecification;
+ (id)objCImplementationDeclaratorSpecification;
+ (id)objCImplementationSpecification;
+ (id)objCInterfaceDeclaratorSpecification;
+ (id)objCInterfaceSpecification;
- (id)specificationLineage;
- (BOOL)isObjCGenericClassMethodSpecification;
- (BOOL)isObjCGenericInstanceMethodSpecification;
- (BOOL)isObjCGenericMethodSpecification;
- (BOOL)conformsToAnySpecificationInSet:(id)arg1;
- (BOOL)conformsToSpecificationForIdentifier:(id)arg1;
- (BOOL)conformsToSpecification:(id)arg1;
@end

