/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, NSArray;

@interface ABContactsFilter : NSObject  {
    void *_addressBook;
    NSArray *_groups;
    NSArray *_sources;
    void *_directorySource;
    BOOL _showsAllContacts;
}

@property(readonly) void* addressBook;
@property(readonly) NSArray * groups;
@property(readonly) NSArray * sources;
@property(readonly) void* directorySource;
@property(readonly) NSString * name;
@property(readonly) void* sourceForNewRecords;
@property(readonly) void* groupForNewRecords;
@property(getter=isEditable,readonly) BOOL editable;
@property(readonly) BOOL isDirectory;
@property(readonly) BOOL shouldChangeModelSelectionWhenDisplayed;
@property(readonly) BOOL showsAllContacts;

+ (id)_newContactsFilterFromGroupWrapperRepresentation:(id)arg1 withAddressBook:(void*)arg2;
+ (id)newContactsFilterFromDictionaryRepresentation:(id)arg1 withAddressBook:(void*)arg2;

- (id)name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)isEditable;
- (void*)addressBook;
- (void*)directorySource;
- (id)_sortedRecordsForRecords:(id)arg1 byNameProperty:(int)arg2;
- (void)_getWritableSource:(const void**)arg1 andGroup:(const void**)arg2;
- (void*)_defaultSourceForAccountContainingSource:(void*)arg1;
- (id)sortedSourcesForSources:(id)arg1;
- (id)sortedGroupsForGroups:(id)arg1;
- (id)initWithDirectorySource:(void*)arg1 addressBook:(void*)arg2;
- (void*)sourceForNewRecords;
- (void*)groupForNewRecords;
- (id)initWithGroups:(id)arg1 sources:(id)arg2 addressBook:(void*)arg3;
- (void)invalidateSourcesForAllContacts;
- (BOOL)shouldChangeModelSelectionWhenDisplayed;
- (id)copyDictionaryRepresentation;
- (BOOL)showsAllContacts;
- (BOOL)isDirectory;
- (id)groups;
- (id)initWithAddressBook:(void*)arg1;
- (id)sources;

@end
