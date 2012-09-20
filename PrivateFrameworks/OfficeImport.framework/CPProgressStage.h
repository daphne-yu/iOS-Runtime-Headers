/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CPProgressStage, NSString, CPProgressContext;

@interface CPProgressStage : NSObject  {
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    NSString *m_name;
    CPProgressStage *m_parentStage;
    CPProgressContext *m_context;
}


- (void)dealloc;
- (void)end;
- (void)setProgress:(double)arg1;
- (id)initRootStageInContext:(id)arg1;
- (double)currentPosition;
- (void)advanceProgress:(double)arg1;
- (id)initBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4;
- (id)parentStage;
- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4;

@end
