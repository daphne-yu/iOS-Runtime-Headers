/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDAnimationInfoData;

@interface PDAnimationInfo : NSObject  {
    PDAnimationInfoData *mEntrance;
    PDAnimationInfoData *mExit;
    PDAnimationInfoData *mMedia;
}

@property(retain) PDAnimationInfoData * mediaData;


- (void)dealloc;
- (void)setMediaData:(id)arg1;
- (id)mediaData;
- (id)exitData;
- (void)setExitData:(id)arg1;
- (id)entranceData;
- (void)setEntranceData:(id)arg1;

@end
