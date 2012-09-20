/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSMutableArray, CAStateControllerUndo, CAState;

@interface CAStateControllerUndo : NSObject <CAStateRecorder> {
    CAStateControllerUndo *_next;
    CAState *_state;
    NSMutableArray *_elements;
    NSMutableArray *_transitions;
}

@property(readonly) CAStateControllerUndo * next;
@property(retain) CAState * state;
@property(retain) NSMutableArray * elements;
@property(retain) NSMutableArray * transitions;


- (id)state;
- (void)dealloc;
- (void)setElements:(id)arg1;
- (id)elements;
- (void)setState:(id)arg1;
- (void)setTransitions:(id)arg1;
- (id)transitions;
- (void)addTransition:(id)arg1;
- (void)willAddLayer:(id)arg1;
- (id)next;
- (void)addElement:(id)arg1;

@end
