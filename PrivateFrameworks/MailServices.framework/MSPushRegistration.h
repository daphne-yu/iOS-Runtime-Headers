/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@class NSString, NSArray;

@interface MSPushRegistration : MSMailDefaultService  {
    NSString *_bundleIdentifier;
    NSString *_accountIdentifier;
    NSString *_notificationNamePrefix;
    NSArray *_mailboxNames;
}

@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * accountIdentifier;
@property(copy) NSString * notificationNamePrefix;
@property(copy) NSArray * mailboxNames;


- (void)setBundleIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)init;
- (id)mailboxNames;
- (id)notificationNamePrefix;
- (void)registerForPush:(id)arg1;
- (void)setMailboxNames:(id)arg1;
- (void)setNotificationNamePrefix:(id)arg1;

@end
