/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SAAceView : AceObject <SAAceSerializable, SADeferredKeyObject> {
}

@property(copy) NSNumber * listenAfterSpeaking;
@property(copy) NSString * speakableText;
@property(copy) NSString * viewId;

+ (id)aceViewWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceView;

- (id)groupIdentifier;
- (void)setViewId:(id)arg1;
- (id)viewId;
- (void)setSpeakableText:(id)arg1;
- (id)speakableText;
- (void)setListenAfterSpeaking:(id)arg1;
- (id)listenAfterSpeaking;
- (id)deferredKeys;
- (id)encodedClassName;

@end
