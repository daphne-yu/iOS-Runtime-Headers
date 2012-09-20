/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationPattern : NSObject  {
    id _propertyListRepresentation;
    id _complexPatternDescription;
    double _duration;
    id _contextObject;
    id contextObject;
}

@property(readonly) id propertyListRepresentation;
@property(readonly) double computedDuration;
@property(retain) id contextObject;
@property(readonly) id _artificiallyRepeatingPropertyListRepresentation;
@property(setter=_setDuration:) double _duration;

+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1;
+ (BOOL)isValidVibrationPatternPropertyListRepresentation:(id)arg1;
+ (id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2;

- (double)computedDuration;
- (id)initWithPropertyListRepresentation:(id)arg1 skipValidation:(BOOL)arg2;
- (void)setContextObject:(id)arg1;
- (void)_setDuration:(double)arg1;
- (void)appendVibrationComponentWithDuration:(double)arg1 isPause:(BOOL)arg2;
- (id)propertyListRepresentation;
- (id)contextObject;
- (id)_artificiallyRepeatingPropertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (void)dealloc;
- (id)init;
- (double)_duration;

@end
