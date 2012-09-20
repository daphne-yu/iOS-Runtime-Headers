/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

@class NSData, NSString;

@interface Security : NSObject  {
    NSData *_lastNonce;
}

@property(readonly) NSString * nonce;
@property(readonly) NSData * rawNonce;
@property(readonly) NSString * lastNonce;
@property(readonly) NSData * lastRawNonce;

+ (id)stringNonceToRaw:(id)arg1;
+ (id)rawNonceToString:(id)arg1;

- (id)lastRawNonce;
- (id)lastNonce;
- (id)rawNonce;
- (id)init;
- (id)nonce;

@end
