/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SocialDaemon.framework/SocialDaemon
 */

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel;

@interface SLDServer : NSObject  {
    NSMutableSet *_services;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

@property(readonly) NSManagedObjectContext * managedObjectContext;
@property(readonly) NSManagedObjectModel * managedObjectModel;
@property(readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;
@property(readonly) NSObject<OS_dispatch_queue> * serverQueue;


- (id)managedObjectModel;
- (id)persistentStoreCoordinator;
- (id)managedObjectContext;
- (void).cxx_destruct;
- (id)init;
- (void)serviceDidRemoveSession:(id)arg1;
- (void)serviceDidAddSession:(id)arg1;
- (id)serverQueue;
- (void)addService:(id)arg1;

@end
