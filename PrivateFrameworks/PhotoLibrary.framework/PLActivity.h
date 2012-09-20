/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSArray;

@interface PLActivity : UIActivity  {
    int _mode;
    int _status;
    NSArray *_assetsToShare;
    int _interfaceIdiom;
    BOOL _needsActivityViewControllerDismissed;
}

@property int status;
@property int mode;
@property int interfaceIdiom;
@property(retain) NSArray * assetsToShare;
@property BOOL needsActivityViewControllerDismissed;


- (void)dealloc;
- (void)setStatus:(int)arg1;
- (int)status;
- (BOOL)_canPerformWithSuppliedActivityItems:(id)arg1;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (int)mode;
- (void)setMode:(int)arg1;
- (void)setNeedsActivityViewControllerDismissed:(BOOL)arg1;
- (void)setInterfaceIdiom:(int)arg1;
- (id)assetsToShare;
- (void)setAssetsToShare:(id)arg1;
- (BOOL)needsActivityViewControllerDismissed;
- (id)initForMode:(int)arg1 interfaceIdiom:(int)arg2;
- (int)interfaceIdiom;

@end
