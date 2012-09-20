/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUInputSource : NSObject  {
}

@property(readonly) long long expectedLength;
@property(readonly) BOOL hasBytesAvailable;
@property(readonly) unsigned int minimumReadLength;


- (id)copyAllData:(id*)arg1;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2 error:(id*)arg3;
- (unsigned int)minimumReadLength;
- (BOOL)open:(id*)arg1;
- (void)close;
- (BOOL)hasBytesAvailable;
- (long long)expectedLength;

@end
