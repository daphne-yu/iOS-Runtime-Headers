/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@class NSString;

@interface SUOperationProgress : NSObject <NSCoding, NSCopying> {
    NSString *_phase;
    float _percentComplete;
    float _normalizedPercentComplete;
    double _timeRemaining;
}

@property(retain) NSString * phase;
@property float percentComplete;
@property float normalizedPercentComplete;
@property double timeRemaining;


- (void)setPercentComplete:(float)arg1;
- (float)percentComplete;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setPhase:(id)arg1;
- (id)phase;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDone;
- (float)normalizedPercentComplete;
- (void)setNormalizedPercentComplete:(float)arg1;
- (void)setTimeRemaining:(double)arg1;
- (double)timeRemaining;

@end
