/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, SSProtocolConditionalContext;

@interface SSProtocolConditionalEvaluator : NSObject  {
    SSProtocolConditionalContext *_context;
    NSDictionary *_dictionary;
}

+ (void)setDefaultConditionalContext:(id)arg1;
+ (id)defaultConditionalContext;

- (id)dictionaryByRemovingConditions;
- (id)dictionaryByEvaluatingConditions;
- (void)dealloc;
- (id)init;
- (id)_dictionaryByEvaluatingChildrenOfDictionary:(id)arg1 withForcedValue:(int)arg2;
- (BOOL)_checkConditions:(id)arg1 withOperator:(id)arg2;
- (int)_logicalOperatorForString:(id)arg1;
- (id)_arrayByEvaluatingChildrenOfArray:(id)arg1 withForcedValue:(int)arg2;
- (id)_dictionaryByEvaluatingDictionary:(id)arg1 withForcedValue:(int)arg2;
- (id)_dictionaryByEvaluatingWithForcedValue:(int)arg1;
- (id)initWithDictionary:(id)arg1 conditionalContext:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end
