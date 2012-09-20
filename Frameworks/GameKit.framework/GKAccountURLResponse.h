/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKAccountURLResponse : GKStoreBagResponse  {
    NSString *_setupURL;
    NSString *_authorizeURL;
    NSString *_editURL;
    NSString *_reportURL;
    NSString *_passwordURL;
}

@property(retain) NSString * setupURL;
@property(retain) NSString * authorizeURL;
@property(retain) NSString * editURL;
@property(retain) NSString * reportURL;
@property(retain) NSString * passwordURL;

+ (id)responseWithStoreBagResponse:(id)arg1;
+ (id)codedPropertyKeys;

- (id)passwordURL;
- (id)editURL;
- (id)authorizeURL;
- (id)setupURL;
- (void)setPasswordURL:(id)arg1;
- (void)setReportURL:(id)arg1;
- (void)setEditURL:(id)arg1;
- (void)setAuthorizeURL:(id)arg1;
- (void)setSetupURL:(id)arg1;
- (id)reportURL;
- (void)dealloc;

@end
