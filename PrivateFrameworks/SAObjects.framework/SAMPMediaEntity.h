/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPMediaEntity : SADomainObject  {
}

@property(copy) NSString * sortTitle;
@property(copy) NSString * title;

+ (id)mediaEntity;
+ (id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)sortTitle;
- (void)setSortTitle:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;

@end
