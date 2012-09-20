/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource> {
    float _progress;
    id _providedItem;
    id _placeholderItem;
    NSString *_status;
    NSString *_activityType;
}

@property(retain) id placeholderItem;
@property(readonly) NSString * activityType;
@property(copy) NSString * status;
@property float progress;
@property(retain) id providedItem;


- (void)main;
- (void)dealloc;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)_setActivityType:(id)arg1;
- (id)providedItem;
- (void)setProvidedItem:(id)arg1;
- (void)setPlaceholderItem:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)placeholderItem;
- (id)activityType;
- (float)progress;
- (id)item;
- (void)setProgress:(float)arg1;

@end
