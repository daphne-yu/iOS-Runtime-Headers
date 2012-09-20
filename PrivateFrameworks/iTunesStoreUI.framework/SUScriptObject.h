/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUWebImagePool, WebFrame, NSMutableArray, NSLock, SUClientInterface, SUScriptObjectInvocationBatch, NSMutableSet, NSString, SUScriptNativeObject, SUScriptObject;

@interface SUScriptObject : NSObject  {
    NSMutableArray *_eventListeners;
    SUScriptObjectInvocationBatch *_invocationBatch;
    NSLock *_lock;
    SUScriptNativeObject *_nativeObject;
    SUScriptObject *_parentScriptObject;
    NSMutableSet *_scriptObjects;
    unsigned int _checkOutWhenHidden : 1;
    unsigned int _isVisible : 1;
    NSString *_className;
}

@property(retain) SUScriptNativeObject * nativeObject;
@property(readonly) struct OpaqueJSContext { }* copyJavaScriptContext;
@property(readonly) SUWebImagePool * imagePool;
@property(readonly) SUClientInterface * clientInterface;
@property SUScriptObject * parentScriptObject;
@property(readonly) BOOL sourceIsTrusted;
@property(readonly) WebFrame * webFrame;
@property(readonly) NSMutableArray * scriptAttributeKeys;
@property(getter=_className,readonly) NSString * className;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;

- (void)willPerformBatchedInvocations;
- (void)didPerformBatchedInvocations;
- (id)invocationBatch:(BOOL)arg1;
- (BOOL)sourceIsTrusted;
- (id)newImageWithURL:(id)arg1;
- (void)loadImageWithURL:(id)arg1 completionBlock:(id)arg2;
- (void)removeListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(BOOL)arg3;
- (BOOL)equals:(id)arg1;
- (void)addListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(BOOL)arg3;
- (void)checkOutScriptObject:(id)arg1;
- (void)_checkOutAfterVisibilityChange;
- (BOOL)scriptObjectIsCheckedIn:(id)arg1;
- (id)newImageWithURL:(id)arg1 scale:(float)arg2;
- (id)_copyListenersForName:(id)arg1;
- (id)parentScriptObject;
- (void)checkOutScriptObjects:(id)arg1;
- (void)setParentScriptObject:(id)arg1;
- (void)checkOutBatchTarget:(id)arg1;
- (id)webThreadMainThreadBatchProxy;
- (id)nativeObject;
- (void)checkInScriptObjects:(id)arg1;
- (void)tearDownUserInterface;
- (void)setNativeObject:(id)arg1;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(BOOL)arg3;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)_className;
- (id)imagePool;
- (struct OpaqueJSContext { }*)copyJavaScriptContext;
- (id)scriptAttributeKeys;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)checkInScriptObject:(id)arg1;
- (id)DOMElementWithElement:(id)arg1;
- (id)viewControllerFactory;
- (id)clientInterface;
- (void)dealloc;
- (id)init;
- (BOOL)isVisible;
- (id)webFrame;
- (void)setVisible:(BOOL)arg1;
- (void)unlock;
- (void)lock;
- (id)parentViewController;
- (id)stringRepresentation;
- (void)finalizeForWebScript;

@end
