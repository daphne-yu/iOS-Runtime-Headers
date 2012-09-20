/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISObjectiveLinearExpression : NSObject <NSISRowBody> {
    struct __CFDictionary { } *_priorityMap;
    struct __CFArray { } *_sortedPriorityVectors;
    struct __CFArray { } *_constant;
}


- (id)description;
- (void)dealloc;
- (id)init;
- (void)incrementConstantWithPriorityVector:(struct __CFArray { }*)arg1;
- (void)setPriorityVector:(struct __CFArray { }*)arg1 forVariable:(id)arg2;
- (struct __CFArray { }*)priorityVectorForVariable:(id)arg1;
- (void)incrementConstantWithPriority:(float)arg1 value:(float)arg2;
- (void)addVariable:(id)arg1 priority:(float)arg2 times:(float)arg3;
- (id)allVariables;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(float)arg2;
- (BOOL)constantTermIsZero;
- (id)initWithLinearExpression:(id)arg1 priority:(float)arg2;
- (void)leadingPriority:(float*)arg1 andValue:(float*)arg2 forVariable:(id)arg3;
- (void)verifyInternalIntegrity;
- (id)restrictedVariableWithCoefficientOfLargestNegativeMagnitude;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(float)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(id)arg4 processVariableDroppedFromReceiver:(id)arg5;
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(id)arg3 processVariableDroppedFromReceiver:(id)arg4;
- (void)addExpression:(id)arg1 priority:(float)arg2 times:(float)arg3 processVariableNewToReceiver:(id)arg4 processVariableDroppedFromReceiver:(id)arg5;
- (void)addVariable:(id)arg1 priority:(float)arg2 times:(float)arg3 processVariableNewToReceiver:(id)arg4 processVariableDroppedFromReceiver:(id)arg5;
- (void)removeVariable:(id)arg1;
- (void)enumerateVariables:(id)arg1;

@end
