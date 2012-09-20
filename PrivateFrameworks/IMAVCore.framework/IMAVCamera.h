/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSString;

@interface IMAVCamera : NSObject  {
    id _internalDevice;
}

@property(readonly) NSString * name;
@property(readonly) NSString * uniqueID;
@property(readonly) int cameraStyle;
@property(readonly) BOOL isWideScreen;
@property(readonly) BOOL hasShutter;
@property(readonly) BOOL isShutterOpen;
@property(readonly) BOOL isSuspended;


- (id)name;
- (id)description;
- (void)dealloc;
- (id)init;
- (BOOL)isSuspended;
- (id)_AVCamera;
- (BOOL)isShutterOpen;
- (BOOL)hasShutter;
- (BOOL)isWideScreen;
- (id)_initWithAVCamera:(id)arg1;
- (int)cameraStyle;
- (id)uniqueID;

@end
