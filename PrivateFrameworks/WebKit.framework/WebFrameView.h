/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebFrameViewPrivate;

@interface WebFrameView : WAKView <WebCoreFrameView> {
    WebFrameViewPrivate *_private;
}

+ (BOOL)_canShowMIMETypeAsHTML:(id)arg1;
+ (Class)_viewClassForMIMEType:(id)arg1 allowingPlugins:(BOOL)arg2;
+ (id)_viewTypesAllowImageTypeOmission:(BOOL)arg1;

- (id)_webView;
- (void)dealloc;
- (id)_scrollView;
- (void)finalize;
- (id)webFrame;
- (void)viewDidMoveToWindow;
- (void)setFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (id)documentView;
- (void)setAllowsScrolling:(BOOL)arg1;
- (id)_contentView;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)isOpaque;
- (BOOL)becomeFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNextKeyView:(id)arg1;
- (void)frameSizeChanged;
- (BOOL)scrollView:(id)arg1 shouldScrollToPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)keyDown:(id)arg1;
- (void)_setDocumentView:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (struct Frame { int x1; struct HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct FrameDestructionObserver {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; struct Page {} *x3; struct FrameTree { struct Frame {} *x_4_1_1; struct Frame {} *x_4_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_4_1_3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_4_1_4; struct RefPtr<WebCore::Frame> { struct Frame {} *x_5_2_1; } x_4_1_5; struct Frame {} *x_4_1_6; struct RefPtr<WebCore::Frame> { struct Frame {} *x_7_2_1; } x_4_1_7; struct Frame {} *x_4_1_8; unsigned int x_4_1_9; } x4; struct FrameLoader { int (**x_5_1_1)(); struct Frame {} *x_5_1_2; struct FrameLoaderClient {} *x_5_1_3; struct PolicyChecker { struct Frame {} *x_4_2_1; boolx_4_2_2; boolx_4_2_3; int x_4_2_4; struct PolicyCallback { struct ResourceRequest { struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_7_1; } x_1_6_1; } x_1_5_1; unsigned int x_1_5_2 : 1; unsigned int x_1_5_3 : 1; int x_1_5_4; int x_1_5_5; int x_1_5_6; int x_1_5_7; int x_1_5_8; int x_1_5_9; int x_1_5_10; int x_1_5_11; int x_1_5_12; int x_1_5_13; } x_1_4_1; int x_1_4_2; double x_1_4_3; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_7_1; } x_1_6_1; } x_4_5_1; unsigned int x_4_5_2 : 1; unsigned int x_4_5_3 : 1; int x_4_5_4; int x_4_5_5; int x_4_5_6; int x_4_5_7; int x_4_5_8; int x_4_5_9; int x_4_5_10; int x_4_5_11; int x_4_5_12; int x_4_5_13; } x_1_4_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_6_1; } x_5_5_1; } x_1_4_5; struct HTTPHeaderMap { struct HashTable<WTF::AtomicString, std::__1::pair<WTF::AtomicString, WTF::String>, WTF::PairFirstExtractor<std::__1::pair<WTF::AtomicString, WTF::String>>, WTF::CaseFoldingHash, WTF::HashMapValueTraits<WTF::HashTraits<WTF::AtomicString>, WTF::HashTraits<WTF::String>>, WTF::HashTraits<WTF::AtomicString> > { struct pair<WTF::AtomicString, WTF::String> {} *x_1_6_1; int x_1_6_2; int x_1_6_3; int x_1_6_4; int x_1_6_5; } x_6_5_1; } x_1_4_6; struct Vector<WTF::String, 0> { unsigned int x_7_5_1; struct VectorBuffer<WTF::String, 0> { struct String {} *x_2_6_1; unsigned int x_2_6_2; } x_7_5_2; } x_1_4_7; struct RefPtr<WebCore::FormData> { struct FormData {} *x_8_5_1; } x_1_4_8; unsigned int x_1_4_9 : 1; unsigned int x_1_4_10 : 1; unsigned int x_1_4_11 : 1; unsigned int x_1_4_12 : 1; unsigned int x_1_4_13 : 1; unsigned int x_1_4_14 : 1; int x_1_4_15; boolx_1_4_16; struct RetainPtr<const _CFURLRequest *> { struct _CFURLRequest {} *x_17_5_1; } x_1_4_17; struct RetainPtr<NSURLRequest> { struct NSURLRequest { Class x_1_6_1; id x_1_6_2; } *x_18_5_1; } x_1_4_18; } x_5_3_1; struct RefPtr<WebCore::FormState> { struct FormState {} *x_2_4_1; } x_5_3_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_5_1; } x_3_4_1; } x_5_3_3; struct NavigationAction { struct ResourceRequest { struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_8_1; } x_1_7_1; } x_1_6_1; unsigned int x_1_6_2 : 1; unsigned int x_1_6_3 : 1; int x_1_6_4; int x_1_6_5; int x_1_6_6; int x_1_6_7; int x_1_6_8; int x_1_6_9; int x_1_6_10; int x_1_6_11; int x_1_6_12; int x_1_6_13; } x_1_5_1; int x_1_5_2; double x_1_5_3; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_8_1; } x_1_7_1; } x_4_6_1; unsigned int x_4_6_2 : 1; unsigned int x_4_6_3 : 1; int x_4_6_4; int x_4_6_5; int x_4_6_6; int x_4_6_7; int x_4_6_8; int x_4_6_9; int x_4_6_10; int x_4_6_11; int x_4_6_12; int x_4_6_13; } x_1_5_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_7_1; } x_5_6_1; } x_1_5_5; struct HTTPHeaderMap { struct HashTable<WTF::AtomicString, std::__1::pair<WTF::AtomicString, WTF::String>, WTF::PairFirstExtractor<std::__1::pair<WTF::AtomicString, WTF::String>>, WTF::CaseFoldingHash, WTF::HashMapValueTraits<WTF::HashTraits<WTF::AtomicString>, WTF::HashTraits<WTF::String>>, WTF::HashTraits<WTF::AtomicString> > { struct pair<WTF::AtomicString, WTF::String> {} *x_1_7_1; int x_1_7_2; int x_1_7_3; int x_1_7_4; int x_1_7_5; } x_6_6_1; } x_1_5_6; struct Vector<WTF::String, 0> { unsigned int x_7_6_1; struct VectorBuffer<WTF::String, 0> { struct String {} *x_2_7_1; unsigned int x_2_7_2; } x_7_6_2; } x_1_5_7; struct RefPtr<WebCore::FormData> { struct FormData {} *x_8_6_1; } x_1_5_8; unsigned int x_1_5_9 : 1; unsigned int x_1_5_10 : 1; unsigned int x_1_5_11 : 1; unsigned int x_1_5_12 : 1; unsigned int x_1_5_13 : 1; unsigned int x_1_5_14 : 1; int x_1_5_15; boolx_1_5_16; struct RetainPtr<const _CFURLRequest *> { struct _CFURLRequest {} *x_17_6_1; } x_1_5_17; struct RetainPtr<NSURLRequest> { struct NSURLRequest { Class x_1_7_1; id x_1_7_2; } *x_18_6_1; } x_1_5_18; } x_4_4_1; int x_4_4_2; struct RefPtr<WebCore::Event> { struct Event {} *x_3_5_1; } x_4_4_3; } x_5_3_4; int (*x_5_3_5)(); int (*x_5_3_6)(); int (*x_5_3_7)(); void *x_5_3_8; } x_4_2_5; } x_5_1_4; struct HistoryController { struct Frame {} *x_5_2_1; struct RefPtr<WebCore::HistoryItem> { struct HistoryItem {} *x_2_3_1; } x_5_2_2; struct RefPtr<WebCore::HistoryItem> { struct HistoryItem {} *x_3_3_1; } x_5_2_3; struct RefPtr<WebCore::HistoryItem> { struct HistoryItem {} *x_4_3_1; } x_5_2_4; boolx_5_2_5; boolx_5_2_6; struct RefPtr<WebCore::HistoryItem> { struct HistoryItem {} *x_7_3_1; } x_5_2_7; int x_5_2_8; } x_5_1_5; struct ResourceLoadNotifier { struct Frame {} *x_6_2_1; } x_5_1_6; struct SubframeLoader { boolx_7_2_1; struct Frame {} *x_7_2_2; } x_5_1_7; struct FrameLoaderStateMachine { int x_8_2_1; } x_5_1_8; struct IconController { struct Frame {} *x_9_2_1; struct OwnPtr<WebCore::IconLoader> { struct IconLoader {} *x_2_3_1; } x_9_2_2; boolx_9_2_3; } x_5_1_9; int x_5_1_10; int x_5_1_11; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_12_2_1; } x_5_1_12; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_13_2_1; } x_5_1_13; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_14_2_1; } x_5_1_14; boolx_5_1_15; boolx_5_1_16; boolx_5_1_17; boolx_5_1_18; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_19_2_1; } x_5_1_19; boolx_5_1_20; boolx_5_1_21; boolx_5_1_22; int x_5_1_23; boolx_5_1_24; struct RefPtr<WebCore::SerializedScriptValue> { struct SerializedScriptValue {} *x_25_2_1; } x_5_1_25; boolx_5_1_26; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_27_2_1; unsigned int x_27_2_2 : 1; unsigned int x_27_2_3 : 1; int x_27_2_4; int x_27_2_5; int x_27_2_6; int x_27_2_7; int x_27_2_8; int x_27_2_9; int x_27_2_10; int x_27_2_11; int x_27_2_12; int x_27_2_13; } x_5_1_27; struct Timer<WebCore::FrameLoader> { int (**x_28_2_1)(); double x_28_2_2; double x_28_2_3; int x_28_2_4; unsigned int x_28_2_5; struct FrameLoader {} *x_28_2_6; } x_5_1_28; boolx_5_1_29; boolx_5_1_30; struct Frame {} *x_5_1_31; struct HashSet<WebCore::Frame *, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> > { struct HashTable<WebCore::Frame *, WebCore::Frame *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> > { struct Frame {} **x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_32_2_1; } x_5_1_32; boolx_5_1_33; boolx_5_1_34; boolx_5_1_35; int x_5_1_36; struct RefPtr<WebCore::FrameNetworkingContext> { struct FrameNetworkingContext {} *x_37_2_1; } x_5_1_37; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_38_2_1; unsigned int x_38_2_2 : 1; unsigned int x_38_2_3 : 1; int x_38_2_4; int x_38_2_5; int x_38_2_6; int x_38_2_7; int x_38_2_8; int x_38_2_9; int x_38_2_10; int x_38_2_11; int x_38_2_12; int x_38_2_13; } x_5_1_38; struct RefPtr<WebCore::HistoryItem> { struct HistoryItem {} *x_39_2_1; } x_5_1_39; boolx_5_1_40; } x5; struct NavigationScheduler { struct Frame {} *x_6_1_1; struct Timer<WebCore::NavigationScheduler> { int (**x_2_2_1)(); double x_2_2_2; double x_2_2_3; int x_2_2_4; unsigned int x_2_2_5; struct NavigationScheduler {} *x_2_2_6; } x_6_1_2; struct OwnPtr<WebCore::ScheduledNavigation> { struct ScheduledNavigation {} *x_3_2_1; } x_6_1_3; } x6; struct RefPtr<WebCore::DOMWindow> { struct DOMWindow {} *x_7_1_1; } x7; struct HTMLFrameOwnerElement {} *x8; struct RefPtr<WebCore::FrameView> { struct FrameView {} *x_9_1_1; } x9; struct RefPtr<WebCore::Document> { struct Document {} *x_10_1_1; } x10; struct ScriptController { struct HashMap<WTF::RefPtr<WebCore::DOMWrapperWorld>, JSC::Strong<WebCore::JSDOMWindowShell>, WTF::PtrHash<WTF::RefPtr<WebCore::DOMWrapperWorld>>, WTF::HashTraits<WTF::RefPtr<WebCore::DOMWrapperWorld>>, WTF::HashTraits<JSC::Strong<WebCore::JSDOMWindowShell>> > { struct HashTable<WTF::RefPtr<WebCore::DOMWrapperWorld>, std::__1::pair<WTF::RefPtr<WebCore::DOMWrapperWorld>, JSC::Strong<WebCore::JSDOMWindowShell>>, WTF::PairFirstExtractor<std::__1::pair<WTF::RefPtr<WebCore::DOMWrapperWorld>, JSC::Strong<WebCore::JSDOMWindowShell>>>, WTF::PtrHash<WTF::RefPtr<WebCore::DOMWrapperWorld>>, WTF::PairHashTraits<WTF::HashTraits<WTF::RefPtr<WebCore::DOMWrapperWorld>>, WTF::HashTraits<JSC::Strong<WebCore::JSDOMWindowShell>>>, WTF::HashTraits<WTF::RefPtr<WebCore::DOMWrapperWorld>> > { struct pair<WTF::RefPtr<WebCore::DOMWrapperWorld>, JSC::Strong<WebCore::JSDOMWindowShell> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_11_1_1; struct Frame {} *x_11_1_2; struct String {} *x_11_1_3; boolx_11_1_4; struct RefPtr<JSC::Bindings::RootObject> { struct RootObject {} *x_5_2_1; } x_11_1_5; struct RefPtr<JSC::Bindings::RootObject> { struct RootObject {} *x_6_2_1; } x_11_1_6; struct HashMap<void *, WTF::RefPtr<JSC::Bindings::RootObject>, WTF::PtrHash<void *>, WTF::HashTraits<void *>, WTF::HashTraits<WTF::RefPtr<JSC::Bindings::RootObject>> > { struct HashTable<void *, std::__1::pair<void *, WTF::RefPtr<JSC::Bindings::RootObject>>, WTF::PairFirstExtractor<std::__1::pair<void *, WTF::RefPtr<JSC::Bindings::RootObject>>>, WTF::PtrHash<void *>, WTF::HashMapValueTraits<WTF::HashTraits<void *>, WTF::HashTraits<WTF::RefPtr<JSC::Bindings::RootObject>>>, WTF::HashTraits<void *> > { struct pair<void *, WTF::RefPtr<JSC::Bindings::RootObject> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_7_2_1; } x_11_1_7; struct RetainPtr<WebScriptObject> { struct WebScriptObject { } *x_8_2_1; } x_11_1_8; } x11; struct Editor { struct Frame {} *x_12_1_1; struct OwnPtr<WebCore::DeleteButtonController> { struct DeleteButtonController {} *x_2_2_1; } x_12_1_2; struct RefPtr<WebCore::CompositeEditCommand> { struct CompositeEditCommand {} *x_3_2_1; } x_12_1_3; struct RefPtr<WebCore::Node> { struct Node {} *x_4_2_1; } x_12_1_4; struct RefPtr<WebCore::Text> { struct Text {} *x_5_2_1; } x_12_1_5; unsigned int x_12_1_6; unsigned int x_12_1_7; struct Vector<WebCore::CompositionUnderline, 0> { unsigned int x_8_2_1; struct VectorBuffer<WebCore::CompositionUnderline, 0> { struct CompositionUnderline {} *x_2_3_1; unsigned int x_2_3_2; } x_8_2_2; } x_12_1_8; boolx_12_1_9; boolx_12_1_10; boolx_12_1_11; struct OwnPtr<WebCore::KillRing> { struct KillRing {} *x_12_2_1; } x_12_1_12; struct OwnPtr<WebCore::SpellChecker> { struct SpellChecker {} *x_13_2_1; } x_12_1_13; struct OwnPtr<WebCore::AlternativeTextController> { struct AlternativeTextController {} *x_14_2_1; } x_12_1_14; struct VisibleSelection { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_4_1; } x_1_3_1; int x_1_3_2; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; } x_15_2_1; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_4_1; } x_2_3_1; int x_2_3_2; unsigned int x_2_3_3 : 3; unsigned int x_2_3_4 : 1; } x_15_2_2; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_4_1; } x_3_3_1; int x_3_3_2; unsigned int x_3_3_3 : 3; unsigned int x_3_3_4 : 1; } x_15_2_3; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_4_1; } x_4_3_1; int x_4_3_2; unsigned int x_4_3_3 : 3; unsigned int x_4_3_4 : 1; } x_15_2_4; int x_15_2_5; int x_15_2_6; unsigned int x_15_2_7 : 1; unsigned int x_15_2_8 : 1; } x_12_1_15; boolx_12_1_16; int x_12_1_17; } x12; struct FrameSelection { struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_1_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_1_2_2; } x_13_1_1; boolx_13_1_2; int x_13_1_3; struct Frame {} *x_13_1_4; int x_13_1_5; struct VisibleSelection { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_4_1; } x_1_3_1; int x_1_3_2; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; } x_6_2_1; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_4_1; } x_2_3_1; int x_2_3_2; unsigned int x_2_3_3 : 3; unsigned int x_2_3_4 : 1; } x_6_2_2; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_4_1; } x_3_3_1; int x_3_3_2; unsigned int x_3_3_3 : 3; unsigned int x_3_3_4 : 1; } x_6_2_3; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_4_1; } x_4_3_1; int x_4_3_2; unsigned int x_4_3_3 : 3; unsigned int x_4_3_4 : 1; } x_6_2_4; int x_6_2_5; int x_6_2_6; unsigned int x_6_2_7 : 1; unsigned int x_6_2_8 : 1; } x_13_1_6; struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_4_1; } x_1_3_1; int x_1_3_2; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; } x_7_2_1; int x_7_2_2; } x_13_1_7; int x_13_1_8; struct RefPtr<WebCore::EditingStyle> { struct EditingStyle {} *x_9_2_1; } x_13_1_9; struct Timer<WebCore::FrameSelection> { int (**x_10_2_1)(); double x_10_2_2; double x_10_2_3; int x_10_2_4; unsigned int x_10_2_5; struct FrameSelection {} *x_10_2_6; } x_13_1_10; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_11_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_11_2_2; } x_13_1_11; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_12_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_12_2_2; } x_13_1_12; unsigned int x_13_1_13 : 1; unsigned int x_13_1_14 : 1; unsigned int x_13_1_15 : 1; unsigned int x_13_1_16 : 1; unsigned int x_13_1_17 : 1; unsigned int x_13_1_18 : 1; struct Color { unsigned int x_19_2_1; boolx_19_2_2; } x_13_1_19; int x_13_1_20; int x_13_1_21; } x13; struct EventHandler { struct Frame {} *x_14_1_1; boolx_14_1_2; boolx_14_1_3; struct RefPtr<WebCore::Node> { struct Node {} *x_4_2_1; } x_14_1_4; boolx_14_1_5; boolx_14_1_6; int x_14_1_7; struct IntPoint { int x_8_2_1; int x_8_2_2; } x_14_1_8; boolx_14_1_9; boolx_14_1_10; boolx_14_1_11; struct Timer<WebCore::EventHandler> { int (**x_12_2_1)(); double x_12_2_2; double x_12_2_3; int x_12_2_4; unsigned int x_12_2_5; struct EventHandler {} *x_12_2_6; } x_14_1_12; struct Timer<WebCore::EventHandler> { int (**x_13_2_1)(); double x_13_2_2; double x_13_2_3; int x_13_2_4; unsigned int x_13_2_5; struct EventHandler {} *x_13_2_6; } x_14_1_13; struct RenderObject {} *x_14_1_14; boolx_14_1_15; boolx_14_1_16; boolx_14_1_17; struct Timer<WebCore::EventHandler> { int (**x_18_2_1)(); double x_18_2_2; double x_18_2_3; int x_18_2_4; unsigned int x_18_2_5; struct EventHandler {} *x_18_2_6; } x_14_1_18; boolx_14_1_19; struct RefPtr<WebCore::SVGElementInstance> { struct SVGElementInstance {} *x_20_2_1; } x_14_1_20; struct RefPtr<WebCore::SVGElementInstance> { struct SVGElementInstance {} *x_21_2_1; } x_14_1_21; struct RenderLayer {} *x_14_1_22; struct RefPtr<WebCore::Node> { struct Node {} *x_23_2_1; } x_14_1_23; boolx_14_1_24; struct RefPtr<WebCore::Node> { struct Node {} *x_25_2_1; } x_14_1_25; struct RefPtr<WebCore::Node> { struct Node {} *x_26_2_1; } x_14_1_26; struct RefPtr<WebCore::Frame> { struct Frame {} *x_27_2_1; } x_14_1_27; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_28_2_1; } x_14_1_28; int x_14_1_29; struct RefPtr<WebCore::Node> { struct Node {} *x_30_2_1; } x_14_1_30; float x_14_1_31; float x_14_1_32; float x_14_1_33; float x_14_1_34; unsigned int x_14_1_35; struct Vector<WTF::RefPtr<WebCore::Touch>, 0> { unsigned int x_36_2_1; struct VectorBuffer<WTF::RefPtr<WebCore::Touch>, 0> { struct RefPtr<WebCore::Touch> {} *x_2_3_1; unsigned int x_2_3_2; } x_36_2_2; } x_14_1_36; struct HashSet<WTF::RefPtr<WebCore::EventTarget>, WTF::PtrHash<WTF::RefPtr<WebCore::EventTarget>>, WTF::HashTraits<WTF::RefPtr<WebCore::EventTarget>> > { struct HashTable<WTF::RefPtr<WebCore::EventTarget>, WTF::RefPtr<WebCore::EventTarget>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::EventTarget>>, WTF::HashTraits<WTF::RefPtr<WebCore::EventTarget>>, WTF::HashTraits<WTF::RefPtr<WebCore::EventTarget>> > { struct RefPtr<WebCore::EventTarget> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_37_2_1; } x_14_1_37; struct RefPtr<WebCore::Frame> { struct Frame {} *x_38_2_1; } x_14_1_38; struct RefPtr<WebCore::HTMLFrameSetElement> { struct HTMLFrameSetElement {} *x_39_2_1; } x_14_1_39; struct IntSize { int x_40_2_1; int x_40_2_2; } x_14_1_40; struct IntPoint { int x_41_2_1; int x_41_2_2; } x_14_1_41; struct IntPoint { int x_42_2_1; int x_42_2_2; } x_14_1_42; double x_14_1_43; struct PlatformMouseEvent { unsigned int x_44_2_1; unsigned int x_44_2_2; double x_44_2_3; struct IntPoint { int x_4_3_1; int x_4_3_2; } x_44_2_4; struct IntPoint { int x_5_3_1; int x_5_3_2; } x_44_2_5; int x_44_2_6; int x_44_2_7; unsigned int x_44_2_8; } x_14_1_44; boolx_14_1_45; struct RefPtr<WebCore::Node> { struct Node {} *x_46_2_1; } x_14_1_46; boolx_14_1_47; struct RefPtr<WebCore::Node> { struct Node {} *x_48_2_1; } x_14_1_48; id x_14_1_49; boolx_14_1_50; double x_14_1_51; int x_14_1_52; } x14; struct AnimationController { struct OwnPtr<WebCore::AnimationControllerPrivate> { struct AnimationControllerPrivate {} *x_1_2_1; } x_15_1_1; int x_15_1_2; } x15; struct Timer<WebCore::Frame> { int (**x_16_1_1)(); double x_16_1_2; double x_16_1_3; int x_16_1_4; unsigned int x_16_1_5; struct Frame {} *x_16_1_6; } x16; float x17; struct IntPoint { int x_18_1_1; int x_18_1_2; } x18; struct ViewportArguments { int x_19_1_1; float x_19_1_2; float x_19_1_3; float x_19_1_4; float x_19_1_5; float x_19_1_6; float x_19_1_7; } x19; boolx20; struct VisibleSelection { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_1_2_1; int x_1_2_2; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; } x_21_1_1; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_2_2_1; int x_2_2_2; unsigned int x_2_2_3 : 3; unsigned int x_2_2_4 : 1; } x_21_1_2; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_3_2_1; int x_3_2_2; unsigned int x_3_2_3 : 3; unsigned int x_3_2_4 : 1; } x_21_1_3; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_4_2_1; int x_4_2_2; unsigned int x_4_2_3 : 3; unsigned int x_4_2_4 : 1; } x_21_1_4; int x_21_1_5; int x_21_1_6; unsigned int x_21_1_7 : 1; unsigned int x_21_1_8 : 1; } x21; struct VisibleSelection { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_1_2_1; int x_1_2_2; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; } x_22_1_1; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_2_2_1; int x_2_2_2; unsigned int x_2_2_3 : 3; unsigned int x_2_2_4 : 1; } x_22_1_2; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_3_2_1; int x_3_2_2; unsigned int x_3_2_3 : 3; unsigned int x_3_2_4 : 1; } x_22_1_3; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_4_2_1; int x_4_2_2; unsigned int x_4_2_3 : 3; unsigned int x_4_2_4 : 1; } x_22_1_4; int x_22_1_5; int x_22_1_6; unsigned int x_22_1_7 : 1; unsigned int x_22_1_8 : 1; } x22; float x23; unsigned int x24; unsigned int x25; unsigned int x26; double x27; double x28; float x29; float x30; int x31; boolx32; boolx33; boolx34; int x35; boolx36; int x37; }*)_web_frame;
- (Class)_customScrollViewClass;
- (id)_largestChildWithScrollBars;
- (float)_area;
- (BOOL)_hasScrollBars;
- (void)printDocumentView;
- (BOOL)documentViewShouldHandlePrint;
- (id)_webcore_effectiveFirstResponder;
- (BOOL)_firstResponderIsFormControl;
- (void)_goBack;
- (void)_goForward;
- (void)_forwardMouseEvent:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (BOOL)_pageInBlockProgressionDirection:(BOOL)arg1;
- (float)_horizontalKeyboardScrollDistance;
- (BOOL)_scrollLineHorizontally:(BOOL)arg1;
- (BOOL)_scrollLineVertically:(BOOL)arg1;
- (BOOL)_scrollHorizontallyBy:(float)arg1;
- (float)_horizontalPageScrollDistance;
- (BOOL)_pageHorizontally:(BOOL)arg1;
- (BOOL)_scrollVerticallyBy:(float)arg1;
- (BOOL)_pageVertically:(BOOL)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (BOOL)_scrollToEndOfDocument;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (id)_largestScrollableChild;
- (BOOL)_scrollToBeginningOfDocument;
- (BOOL)_isFlippedDocument;
- (BOOL)_isVerticalDocument;
- (BOOL)_isScrollable;
- (BOOL)_scrollOverflowInDirection:(int)arg1 granularity:(int)arg2;
- (void)_frameSizeChanged;
- (float)_verticalPageScrollDistance;
- (float)_verticalKeyboardScrollDistance;
- (void)_install;
- (id)_makeDocumentViewForDataSource:(id)arg1;
- (Class)_viewClassForMIMEType:(id)arg1;
- (void)_setWebFrame:(id)arg1;
- (BOOL)allowsScrolling;

@end
