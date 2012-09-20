/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class WAKWindow;

@interface UIWebTiledView : UIView  {
    WAKWindow *_wakWindow;
    int _inGestureType;
    int _tilingArea;
    BOOL _didFirstTileLayout;
    BOOL _layoutTilesInMainThread;
    BOOL _tilingModeIsLocked;
    BOOL _allowsPaintingAndScriptsWhilePanning;
}


- (void)dealloc;
- (id)wakWindow;
- (BOOL)layoutTilesInMainThread;
- (BOOL)tileDrawingEnabled;
- (void)setTileDrawingEnabled:(BOOL)arg1;
- (BOOL)logsTilingChanges;
- (void)setLogsTilingChanges:(BOOL)arg1;
- (BOOL)isTilingEnabled;
- (unsigned int)adjustedMaxTileCount;
- (unsigned int)maxTileCount;
- (BOOL)drawsGrid;
- (void)setDrawsGrid:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })tileSize;
- (void)setAllowsPaintingAndScriptsWhilePanning:(BOOL)arg1;
- (BOOL)allowsPaintingAndScriptsWhilePanning;
- (void)unlockTilingMode;
- (void)lockTilingMode;
- (void)layoutTilesNowOnWebThread;
- (void)setWAKWindow:(id)arg1;
- (void)dumpTiles;
- (BOOL)keepsZoomedOutTiles;
- (void)setKeepsZoomedOutTiles:(BOOL)arg1;
- (BOOL)tilesOpaque;
- (void)updateTilingMode;
- (void)layoutTilesNowForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_screenChanged:(id)arg1;
- (void)_updateForScreen:(id)arg1;
- (int)tilingArea;
- (void)setInGesture:(int)arg1;
- (void)removeForegroundTiles;
- (void)removeAllTiles;
- (void)setTilesOpaque:(BOOL)arg1;
- (void)setTilingArea:(int)arg1;
- (void)removeAllNonVisibleTiles;
- (struct WKWindow { struct _WKObject { unsigned int x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; id x2; struct WKView {} *x3; struct WKView {} *x4; struct WKView {} *x5; }*)wkWindow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)setLayoutTilesInMainThread:(BOOL)arg1;
- (void)setTilingEnabled:(BOOL)arg1;
- (void)setMaxTileCount:(unsigned int)arg1;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutTilesNow;
- (void)_didScroll;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)setNeedsDisplay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
