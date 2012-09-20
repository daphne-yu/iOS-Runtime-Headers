/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
 */

@class NSHTTPURLResponse, NSMutableData, NSMutableURLRequest, NSURLConnection, NSDictionary, <JSONHTTPRequestDelegate>, NSData;

@interface JSONHTTPRequest : NSObject <NSURLConnectionDelegate> {
    NSMutableURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_rawData;
    NSData *_overridePostBody;
    <JSONHTTPRequestDelegate> *_delegate;
    BOOL _receivedValidResponse;
    NSDictionary *_getParams;
    NSDictionary *_postParams;
    NSHTTPURLResponse *_response;
    int _HTTPMethod;
}

@property(retain) NSDictionary * getParams;
@property(retain) NSDictionary * postParams;
@property(readonly) NSHTTPURLResponse * response;
@property int HTTPMethod;


- (void)setPostParams:(id)arg1;
- (id)postParams;
- (void)setGetParams:(id)arg1;
- (id)getParams;
- (void)setOverridePostBody:(id)arg1;
- (void)setHTTPHeader:(id)arg1 value:(id)arg2;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (id)_multipartParamData:(id)arg1;
- (id)_paramString:(id)arg1;
- (void)setHTTPMethod:(int)arg1;
- (int)HTTPMethod;
- (void)cancel;
- (void)dealloc;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)response;
- (void)start;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;

@end
