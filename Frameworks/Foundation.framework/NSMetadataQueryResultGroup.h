/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMetadataQueryResultGroup : NSObject  {
    id _private[9];
    unsigned int _private2[1];
    void *_reserved;
}


- (id)results;
- (void)dealloc;
- (id)attribute;
- (id)value;
- (id)subgroups;
- (void)_zapResultArray;
- (id)resultAtIndex:(unsigned int)arg1;
- (void)_addResult:(unsigned int)arg1;
- (id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned int)arg3 value:(id)arg4;
- (unsigned int)resultCount;

@end
