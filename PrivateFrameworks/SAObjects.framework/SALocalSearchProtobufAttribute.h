/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SALocalSearchProtobufAttribute : AceObject <SAAceSerializable> {
}

@property(copy) NSString * name;
@property(copy) NSString * value;

+ (id)protobufAttributeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)protobufAttribute;

- (id)groupIdentifier;
- (void)setName:(id)arg1;
- (id)name;
- (id)value;
- (void)setValue:(id)arg1;
- (id)encodedClassName;

@end
