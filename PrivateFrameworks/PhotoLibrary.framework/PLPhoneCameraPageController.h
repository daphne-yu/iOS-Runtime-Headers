/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhoneCameraPageController : PLCameraPageController <UINavigationControllerDelegate, PLPhotoBrowserControllerDelegate> {
}


- (void)dealloc;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)newAlbumNavigationController;
- (void)dismissCameraAlbumAnimated:(BOOL)arg1 forSuspension:(BOOL)arg2;
- (void)_transformViewToPortrait:(id)arg1 fromOrientation:(int)arg2;
- (void)prepareAlbumNavigationControllerForReuse:(id)arg1;
- (id)_doneButtonItem;
- (id)_pagingPhotoBrowser;

@end
