/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableDictionary, NSString;

@interface PLEmailAddressManager : NSObject  {
    NSMutableDictionary *_keysForEmails;
    NSMutableDictionary *_emailsForKey;
    int _maxKey;
    NSString *_plistPath;
}

+ (id)sharedManager;

- (void)dealloc;
- (void)_loadDictionariesIfNeeded;
- (id)keyForEmailAddress:(id)arg1;
- (id)emailAddressForKey:(id)arg1;

@end
