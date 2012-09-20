/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebScriptObject, WebScriptCallFrame;

@interface WebScriptCallFramePrivate : NSObject  {
    WebScriptObject *globalObject;
    WebScriptCallFrame *caller;
    struct DebuggerCallFrame { struct ExecState {} *x1; struct JSValue { union EncodedValueDescriptor { long long x_1_2_1; double x_1_2_2; struct { int x_3_3_1; int x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; } *debuggerCallFrame;
    struct WebScriptDebugger { int (**x1)(); struct HashSet<JSC::JSGlobalObject *, WTF::PtrHash<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *> > { struct HashTable<JSC::JSGlobalObject *, JSC::JSGlobalObject *, WTF::IdentityExtractor, WTF::PtrHash<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *> > { struct JSGlobalObject {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; boolx3; struct RetainPtr<WebScriptCallFrame> { struct WebScriptCallFrame { Class x_1_2_1; id x_1_2_2; id x_1_2_3; } *x_4_1_1; } x4; struct Strong<JSC::JSGlobalObject> { struct JSValue {} *x_5_1_1; } x5; struct RetainPtr<WebScriptCallFrame> { struct WebScriptCallFrame { Class x_1_2_1; id x_1_2_2; id x_1_2_3; } *x_6_1_1; } x6; } *debugger;
}


- (void)dealloc;

@end
