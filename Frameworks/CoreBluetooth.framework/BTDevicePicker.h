/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class PSSpecifierStub, UIAlertView, UITableView, <BTDevicePickerDelegate>, NSMutableArray, NSString, NSPredicate;

@interface BTDevicePicker : NSObject  {
    UIAlertView *_alertView;
    UITableView *_tableView;
    NSMutableArray *_deviceList;
    <BTDevicePickerDelegate> *_delegate;
    NSString *_title;
    unsigned int _service;
    NSPredicate *_predicate;
    BOOL _showingAlert;
    BOOL _checkingPaired;
    PSSpecifierStub *_connectingSpec;
    Class _btSSPRequestClass;
    Class _btAlertClass;
    id _btSSPAlert;
    id _btAlert;
}

@property <BTDevicePickerDelegate> * delegate;


- (void)alertSheetDismissed:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)show;
- (void)applicationWillResignActive:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)powerChanged:(id)arg1;
- (id)initWithTitle:(id)arg1 service:(unsigned int)arg2 discoveryNameFilter:(id)arg3;
- (void)_btSSPPasskeyDisplayHandler:(id)arg1;
- (void)_btSSPNumericComparisonHandler:(id)arg1;
- (void)_btSSPConfirmationHandler:(id)arg1;
- (void)cleanupPairing;
- (void)startScanning;
- (void)showInternal;
- (void)checkAttachTimeout;
- (void)deviceConnectionCompleteHandler:(id)arg1;
- (void)devicePairedHandler:(id)arg1;
- (void)authenticationRequestHandler:(id)arg1;
- (void)deviceNameChangedHandler:(id)arg1;
- (void)deviceLostHandler:(id)arg1;
- (void)deviceFoundHandler:(id)arg1;
- (void)deviceDiscoveryStoppedHandler:(id)arg1;

@end
