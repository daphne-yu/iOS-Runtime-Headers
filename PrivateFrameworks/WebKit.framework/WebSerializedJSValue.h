/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebSerializedJSValuePrivate;

@interface WebSerializedJSValue : NSObject  {
    WebSerializedJSValuePrivate *_private;
}


- (id)initWithInternalRepresentation:(void*)arg1;
- (void*)internalRepresentation;
- (void)dealloc;
- (struct OpaqueJSValue { }*)deserialize:(struct OpaqueJSContext { }*)arg1;
- (id)initWithValue:(struct OpaqueJSValue { }*)arg1 context:(struct OpaqueJSContext { }*)arg2 exception:(const struct OpaqueJSValue {}**)arg3;

@end
