/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSNumber, CBConcretePeripheral;

@interface CBConcreteCharacteristic : CBCharacteristic  {
    CBConcretePeripheral *_peripheral;
    NSNumber *_handle;
    NSNumber *_valueHandle;
}

@property(readonly) CBConcretePeripheral * peripheral;
@property(readonly) NSNumber * handle;
@property(readonly) NSNumber * valueHandle;


- (void)invalidate;
- (void)dealloc;
- (id)handle;
- (id)valueHandle;
- (id)peripheral;
- (id)handleDescriptorsDiscovered:(id)arg1;
- (id)handleValueNotifying:(id)arg1;
- (id)handleValueBroadcasted:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)handleValueUpdated:(id)arg1;
- (id)initWithService:(id)arg1 UUID:(id)arg2 properties:(int)arg3 peripheral:(id)arg4 handle:(id)arg5 valueHandle:(id)arg6;

@end
