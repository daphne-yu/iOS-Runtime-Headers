/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVContainerInfoTaskGroupDelegate>, NSMutableSet, NSString, NSSet;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
    int _phase;
    NSMutableSet *_containerURLs;
    NSMutableSet *_containers;
    int _containerInfoDepth;
    NSString *_appSpecificHomeSetPropNameSpace;
    NSString *_appSpecificHomeSetPropName;
}

@property int containerInfoDepth;
@property <CoreDAVContainerInfoTaskGroupDelegate> * delegate;
@property(readonly) NSSet * containerURLs;


- (id)description;
- (void)dealloc;
- (id)containerURLs;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)startTaskGroup;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)_getContainerHomeSet;
- (void)_getContainerTopLevelInfo;
- (void)setContainerInfoDepth:(int)arg1;
- (id)_copyContainerParserMappings;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;
- (int)containerInfoDepthForURL:(id)arg1;
- (int)containerInfoDepth;
- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3;

@end
