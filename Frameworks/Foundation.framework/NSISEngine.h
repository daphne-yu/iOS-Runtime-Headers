/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSISVariable, NSMutableSet, <NSISEngineDelegate>, NSMutableArray, NSMapTable;

@interface NSISEngine : NSObject <NSISVariableDelegate> {
    NSMapTable *_rows;
    NSMapTable *_rowsCrossIndex;
    NSISVariable *_headForObjectiveRow;
    NSMutableArray *_variablesWithValueRestrictionViolations;
    int _automaticOptimizationDisabledCount;
    <NSISEngineDelegate> *_delegate;
    int _delegateCallsDisabledCount;
    NSMapTable *_brokenConstraintPositiveErrors;
    NSMapTable *_brokenConstraintNegativeErrors;
    NSMutableSet *_variablesWithIntegralizationViolations;
    struct __CFDictionary { } *_integralizationAdjustmentsForConstraintMarkers;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _unsatisfiabilityHandler;

    BOOL _shouldIntegralize;
    BOOL _revertsAfterUnsatisfiabilityHandler;
}

@property <NSISEngineDelegate> * delegate;
@property BOOL shouldIntegralize;
@property BOOL revertsAfterUnsatisfiabilityHandler;
@property(retain) NSMapTable * rows;
@property(retain) NSMapTable * rowsCrossIndex;
@property(retain) NSISVariable * headForObjectiveRow;
@property(retain) NSMutableArray * variablesWithValueRestrictionViolations;
@property(retain) NSMutableSet * variablesWithIntegralizationViolations;
@property struct __CFDictionary { }* integralizationAdjustmentsForConstraintMarkers;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)description;
- (void)dealloc;
- (id)init;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)hasValue:(float*)arg1 forVariable:(id)arg2;
- (id)constraints;
- (BOOL)exerciseAmbiguityInVariable:(id)arg1;
- (id)constraintsAffectingValueOfVariable:(id)arg1;
- (void)withAutomaticOptimizationDisabled:(id)arg1;
- (id)candidateRedundantConstraints;
- (void)setRows:(id)arg1;
- (id)rows;
- (BOOL)valueOfVariableIsAmbiguous:(id)arg1;
- (float)valueForVariable:(id)arg1;
- (void)setRevertsAfterUnsatisfiabilityHandler:(BOOL)arg1;
- (BOOL)revertsAfterUnsatisfiabilityHandler;
- (BOOL)shouldIntegralize;
- (id)variablesWithIntegralizationViolations;
- (id)variablesWithValueRestrictionViolations;
- (id)headForObjectiveRow;
- (id)rowsCrossIndex;
- (BOOL)tryToChangeConstraintSuchThatMarker:(id)arg1 isReplacedByMarkerPlusDelta:(float)arg2 undoHandler:(id)arg3;
- (void)changeVariableToBeOptimized:(id)arg1 fromPriority:(float)arg2 toPriority:(float)arg3;
- (void)removeVariableToBeOptimized:(id)arg1 priority:(float)arg2;
- (void)addVariableToBeOptimized:(id)arg1 priority:(float)arg2;
- (BOOL)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 integralizationAdjustment:(float)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (void)withDelegateCallsDisabled:(id)arg1;
- (void)performModifications:(id)arg1 withUnsatisfiableConstraintsHandler:(id)arg2;
- (void)addExpression:(id)arg1 times:(float)arg2 toRowWithHead:(id)arg3 body:(id)arg4;
- (id)allRowHeads;
- (struct __CFDictionary { }*)integralizationAdjustmentsForConstraintMarkers;
- (BOOL)incoming:(id*)arg1 andOutgoing:(id*)arg2 rowHeadsThatMakeValueAmbiguousForVariable:(id)arg3;
- (BOOL)bodyVarIsAmbiguous:(id)arg1 withPivotOfOutgoingRowHead:(id*)arg2;
- (void)enumerateOriginalConstraints:(id)arg1;
- (void)enumerateRowsCrossIndex:(id)arg1;
- (void)enumerateRows:(id)arg1;
- (id)tryToOptimizeReturningMutuallyExclusiveConstraints;
- (void)_coreReplaceMarker:(id)arg1 withMarkerPlusDelta:(float)arg2;
- (id)negativeErrorVarForBrokenConstraintWithMarker:(id)arg1;
- (id)positiveErrorVarForBrokenConstraintWithMarker:(id)arg1;
- (id)outgoingRowHeadForRemovingConstraintWithMarker:(id)arg1;
- (void)addExpression:(id)arg1 priority:(float)arg2 times:(float)arg3 toObjectiveRowWithHead:(id)arg4 body:(id)arg5;
- (BOOL)tryUsingArtificialVariableToAddConstraintWithMarker:(id)arg1 rowBody:(id)arg2 usingInfeasibilityHandlingBehavior:(int)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (BOOL)tryAddingDirectly:(id)arg1;
- (id)expressionBySubstitutingForRowHeadVariablesInExpression:(id)arg1;
- (void)optimize;
- (void)fixupIntegralizationViolations;
- (id)fixUpValueRestrictionViolationsWithInfeasibilityHandlingBehavior:(int)arg1;
- (void)setIntegralizationAdjustmentsForConstraintMarkers:(struct __CFDictionary { }*)arg1;
- (void)setVariablesWithIntegralizationViolations:(id)arg1;
- (void)setShouldIntegralize:(BOOL)arg1;
- (void)setVariablesWithValueRestrictionViolations:(id)arg1;
- (void)setHeadForObjectiveRow:(id)arg1;
- (void)setRowsCrossIndex:(id)arg1;
- (void)removeBodyVarFromAllRows:(id)arg1;
- (void)removeConstraintWithMarker:(id)arg1;
- (void)minimizeConstantInObjectiveRowWithHead:(id)arg1;
- (id)chooseHeadForRowBody:(id)arg1;
- (void)withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:(id)arg1;
- (void)constraintDidChangeSuchThatMarker:(id)arg1 shouldBeReplacedByMarkerPlusDelta:(float)arg2;
- (void)setIntegralizationAdjustment:(float)arg1 forMarker:(id)arg2;
- (int)desirabilityOfAdjustingVariable:(id)arg1 delta:(float)arg2 fixingTargetVar:(BOOL)arg3;
- (float)valueForVariableWithoutIntegralizationAdjustments:(id)arg1;
- (id)variableToWorkOnAmongVariablesWithIntegralizationViolationsIgnoringLostCauses:(id)arg1 varsAlreadyAdjusted:(id)arg2;
- (unsigned int)numberOfConstraintsEligibleForAdjustmentToIntegralizeVariable:(id)arg1 ignoringConstraintsWithMarkers:(id)arg2;
- (float)integralizationAdjustmentForMarker:(id)arg1;
- (id)handleUnsatisfiableRowWithHead:(id)arg1 body:(id)arg2 usingInfeasibilityHandlingBehavior:(int)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (void)verifyInternalIntegrity;
- (void)pivotToMakeBodyVar:(id)arg1 newHeadOfRowWithHead:(id)arg2;
- (id)chooseOutgoingRowHeadForIncomingRowHead:(id)arg1;
- (id)errorVariableIntroducedByBreakingConstraintWithMarker:(id)arg1 errorIsPositive:(BOOL)arg2;
- (id)fallbackMarkerForConstraintToBreakInRowWithHead:(id)arg1 body:(id)arg2;
- (void)setNegativeErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2;
- (void)setPositiveErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2;
- (void)replaceMarker:(id)arg1 withMarkerPlusCoefficient:(float)arg2 timesVariable:(id)arg3;
- (void)addVariable:(id)arg1 priority:(float)arg2 times:(float)arg3 toObjectiveRowWithHead:(id)arg4 body:(id)arg5;
- (id)rowBodyForObjectiveHead:(id)arg1;
- (void)addVariable:(id)arg1 coefficient:(float)arg2 toRowWithHead:(id)arg3 body:(id)arg4;
- (void)setRowWithHead:(id)arg1 body:(id)arg2;
- (void)substituteOutAllOccurencesOfBodyVar:(id)arg1 withExpression:(id)arg2;
- (void)removeRowWithHead:(id)arg1;
- (id)rowBodyForNonObjectiveHead:(id)arg1;
- (void)rowCrossIndexNoteDroppedBodyVar:(id)arg1;
- (id)rowHeadsForRowsContainingBodyVar:(id)arg1;
- (void)rowCrossIndexNoteBodyVariable:(id)arg1 wasRemovedFromRowWithHead:(id)arg2;
- (void)rawRemoveRowWithHead:(id)arg1;
- (id)rowBodyForHead:(id)arg1;
- (void)rowCrossIndexNoteBodyVariable:(id)arg1 wasAddedToRowWithHead:(id)arg2;
- (void)rawSetRowWithHead:(id)arg1 body:(id)arg2;
- (id)markerForBrokenConstraintWithNegativeErrorVar:(id)arg1;
- (id)markerForBrokenConstraintWithPositiveErrorVar:(id)arg1;
- (id)_brokenConstraintNegativeErrorsIfAvailable;
- (id)_brokenConstraintNegativeErrors;
- (id)_brokenConstraintPositiveErrorsIfAvailable;
- (id)_brokenConstraintPositiveErrors;

@end
