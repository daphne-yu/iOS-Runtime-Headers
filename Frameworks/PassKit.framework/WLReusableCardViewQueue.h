/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSMutableSet;

@interface WLReusableCardViewQueue : NSObject  {
    NSMutableSet *_cardViews;
}


- (void)enqueueReusableCardView:(id)arg1;
- (id)dequeueReusableCardView;
- (void)dealloc;
- (id)initWithCount:(unsigned int)arg1;

@end
