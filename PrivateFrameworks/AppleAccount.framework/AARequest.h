/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSURLRequest, NSString;

@interface AARequest : NSObject  {
    NSString *_urlString;
    BOOL _flushCache;
    struct OpaqueCFHTTPCookieStorage { } *_cookieStorage;
}

@property(readonly) NSURLRequest * urlRequest;
@property BOOL flushCache;

+ (id)protocolVersion;
+ (Class)responseClass;

- (void)performRequestWithHandler:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)urlString;
- (BOOL)flushCache;
- (id)urlCredential;
- (id)initWithURLString:(id)arg1;
- (id)redactedBodyStringWithPropertyList:(id)arg1;
- (id)bodyDictionary;
- (id)urlRequest;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)setFlushCache:(BOOL)arg1;

@end
