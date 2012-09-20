/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class PSViewController, NSString, NSSet, <AccountSettingsUIPlugin>;

@interface AccountSettingsUIPluginBundle : NSObject  {
    <AccountSettingsUIPlugin> *_plugin;
    NSString *_path;
    PSViewController *_parentController;
    NSSet *_accountTypes;
    int _commonSpecifierMode;
}

@property(readonly) <AccountSettingsUIPlugin> * plugin;
@property(readonly) NSString * path;
@property(readonly) NSSet * accountTypes;
@property(readonly) int commonSpecifierMode;


- (id)path;
- (void)dealloc;
- (int)commonSpecifierMode;
- (id)accountTypes;
- (id)plugin;
- (id)initWithPath:(id)arg1 parentController:(id)arg2 commonSpecifierMode:(int)arg3 accountTypes:(id)arg4;

@end
