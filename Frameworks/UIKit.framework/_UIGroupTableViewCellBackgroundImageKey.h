/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {
    BOOL _opaque;
    BOOL _selected;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    UIColor *_backgroundColor;
    UIColor *_sectionBorderColor;
    UIColor *_separatorColor;
    UIColor *_topShadowColor;
    UIColor *_bottomShadowColor;
    UIColor *_fillColor;
    UIColor *_selectionColor;
    float _leftPhase;
    float _rightPhase;
    int _sectionLocation;
    int _selectionStyle;
}

@property BOOL opaque;
@property BOOL selected;
@property struct CGSize { float x1; float x2; } size;
@property(retain) UIColor * backgroundColor;
@property(retain) UIColor * sectionBorderColor;
@property(retain) UIColor * separatorColor;
@property(retain) UIColor * topShadowColor;
@property(retain) UIColor * bottomShadowColor;
@property(retain) UIColor * fillColor;
@property(retain) UIColor * selectionColor;
@property float leftPhase;
@property float rightPhase;
@property int sectionLocation;
@property int selectionStyle;


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setRightPhase:(float)arg1;
- (float)rightPhase;
- (void)setLeftPhase:(float)arg1;
- (float)leftPhase;
- (void)setFillColor:(id)arg1;
- (id)fillColor;
- (void)setSelectionColor:(id)arg1;
- (id)selectionColor;
- (id)bottomShadowColor;
- (void)setSectionLocation:(int)arg1;
- (BOOL)opaque;
- (id)topShadowColor;
- (int)sectionLocation;
- (int)selectionStyle;
- (BOOL)selected;
- (void)setSelectionStyle:(int)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setBottomShadowColor:(id)arg1;
- (void)setTopShadowColor:(id)arg1;
- (void)setSeparatorColor:(id)arg1;
- (id)sectionBorderColor;
- (void)setSectionBorderColor:(id)arg1;
- (id)separatorColor;
- (id)backgroundColor;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)setOpaque:(BOOL)arg1;

@end
