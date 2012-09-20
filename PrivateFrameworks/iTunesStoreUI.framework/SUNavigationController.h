/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUSection, SUClientInterface;

@interface SUNavigationController : UINavigationController <SUScriptNativeObject> {
    BOOL _canBeWeakScriptReference;
    SUClientInterface *_clientInterface;
    BOOL _loading;
    SUSection *_section;
}

@property(getter=isLoading) BOOL loading;
@property(retain) SUClientInterface * clientInterface;
@property(retain) SUSection * section;


- (void)setLoading:(BOOL)arg1;
- (id)copyScriptViewController;
- (void)_loadingDidChangeNotification:(id)arg1;
- (BOOL)clearsWeakScriptReferences;
- (id)_sectionForViewController:(id)arg1;
- (id)initWithSection:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)initWithSection:(id)arg1 rootViewController:(id)arg2;
- (id)copyArchivableContext;
- (void)setClientInterface:(id)arg1;
- (id)clientInterface;
- (id)description;
- (void)dealloc;
- (void)setSection:(id)arg1;
- (BOOL)isLoading;
- (void)setViewControllers:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (void)removeChildViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)section;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;

@end
