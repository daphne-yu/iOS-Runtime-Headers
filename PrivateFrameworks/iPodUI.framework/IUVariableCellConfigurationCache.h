/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSMutableDictionary, NSArray;

@interface IUVariableCellConfigurationCache : NSObject  {
    NSMutableDictionary *_caches;
    float _tableHeight;
}

@property(readonly) NSArray * caches;


- (id)caches;
- (id)initWithTableHeight:(float)arg1;
- (id)cacheForClass:(Class)arg1;
- (void)reset;
- (void)dealloc;

@end
