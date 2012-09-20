/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray, NSData, NSMutableArray, EKEventStore;

@interface EKICSPreviewModel : NSObject  {
    NSData *_data;
    EKEventStore *_tempStore;
    EKEventStore *_destStore;
    NSMutableArray *_importedEvents;
    NSMutableArray *_unimportedEvents;
    unsigned int _options;
    BOOL _actionsDisabled;
}

@property(readonly) EKEventStore * eventStore;
@property(readonly) int totalEventCount;
@property(readonly) int importedEventCount;
@property(readonly) int unimportedEventCount;
@property(readonly) BOOL actionsDisabled;
@property(readonly) NSArray * importedEvents;
@property(readonly) NSArray * unimportedEvents;
@property(readonly) NSArray * allEvents;


- (void)dealloc;
- (id)allEvents;
- (int)importedEventCount;
- (id)importEvent:(id)arg1 intoCalendar:(id)arg2;
- (id)importAllIntoCalendar:(id)arg1;
- (id)unimportedEvents;
- (id)importedEvents;
- (int)unimportedEventCount;
- (int)totalEventCount;
- (id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned int)arg3;
- (BOOL)actionsDisabled;
- (id)eventStore;

@end
