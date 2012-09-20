/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface ML3AggregateQuery : ML3Query  {
    Class _aggregateEntityClass;
    NSString *_foreignPersistentIDProperty;
}

@property(readonly) Class aggregateEntityClass;
@property(readonly) NSString * foreignPersistentIDProperty;


- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3;
- (id)foreignPersistentIDProperty;
- (Class)aggregateEntityClass;
- (id)persistentIDProperty;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2;
- (BOOL)distinctPersistentIDProperty;
- (Class)entityClass;
- (unsigned int)countOfEntities;
- (BOOL)hasEntities;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
