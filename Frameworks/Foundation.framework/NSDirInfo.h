/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary;

@interface NSDirInfo : NSMutableDictionary  {
    NSMutableDictionary *dict;
}


- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)count;
- (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(unsigned int)arg3;
- (id)keyEnumerator;
- (id)initWithDictionary:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)serializeToData;
- (unsigned int)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5;

@end
