/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImage, SUControlAppearance, NSMutableDictionary;

@interface SUSegmentedControlAppearance : NSObject <NSCopying> {
    SUControlAppearance *_backgroundImages;
    NSMutableDictionary *_dividerImages;
    UIImage *_optionsBackgroundImage;
    NSMutableDictionary *_titleTextAttributes;
}

@property(retain) UIImage * optionsBackgroundImage;

+ (id)defaultOptionsAppearanceForTintStyle:(int)arg1;
+ (id)defaultBarAppearance;

- (id)_newDividerImageKeyWithLeftState:(unsigned int)arg1 rightState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)styleSegmentedControl:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (id)dividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3 barMetrics:(int)arg4;
- (id)backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)setOptionsBackgroundImage:(id)arg1;
- (id)optionsBackgroundImage;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;

@end
