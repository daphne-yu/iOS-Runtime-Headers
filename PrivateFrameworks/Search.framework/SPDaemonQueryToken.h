/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class SPSearchQuery, <SPDaemonQueryDelegate>;

@interface SPDaemonQueryToken : NSObject  {
    struct __CFMachPort { } *_callbackPort;
    SPSearchQuery *_query;
    <SPDaemonQueryDelegate> *_delegate;
    unsigned int _queryID;
}

@property <SPDaemonQueryDelegate> * delegate;
@property(readonly) unsigned int queryID;
@property(readonly) SPSearchQuery * query;


- (unsigned int)queryID;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithQuery:(id)arg1;
- (id)query;
- (void)handleMessage:(id)arg1;

@end
