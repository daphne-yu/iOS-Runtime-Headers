/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVAssetWriterInput, AVAssetWriterInputGroupInternal;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup  {
    AVAssetWriterInputGroupInternal *_internal;
}

@property(readonly) NSArray * inputs;
@property(readonly) AVAssetWriterInput * defaultInput;

+ (id)assetWriterInputGroupWithInputs:(id)arg1 defaultInput:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)finalize;
- (id)options;
- (void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
- (void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
- (id)initWithInputs:(id)arg1 defaultInput:(id)arg2;
- (id)defaultInput;
- (id)inputs;

@end
