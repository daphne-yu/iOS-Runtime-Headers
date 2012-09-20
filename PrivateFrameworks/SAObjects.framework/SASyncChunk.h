/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SASyncChunk : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * key;
@property(copy) NSString * postGen;
@property(copy) NSString * preGen;
@property(copy) NSArray * toAdd;
@property(copy) NSArray * toRemove;
@property(copy) NSString * validity;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)chunkWithDictionary:(id)arg1 context:(id)arg2;
+ (id)chunk;

- (id)groupIdentifier;
- (void)setKey:(id)arg1;
- (id)key;
- (id)validity;
- (void)setToRemove:(id)arg1;
- (id)toRemove;
- (void)setToAdd:(id)arg1;
- (id)toAdd;
- (void)setPreGen:(id)arg1;
- (id)preGen;
- (void)setPostGen:(id)arg1;
- (id)postGen;
- (void)setValidity:(id)arg1;
- (id)encodedClassName;

@end
