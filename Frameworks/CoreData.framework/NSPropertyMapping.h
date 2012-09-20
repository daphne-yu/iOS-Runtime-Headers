/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSString, NSExpression, NSDictionary;

@interface NSPropertyMapping : NSObject  {
    void *_reserved;
    void *_reserved1;
    NSArray *_propertyTransforms;
    NSString *_name;
    NSExpression *_valueExpression;
    NSDictionary *_userInfo;
    struct __propertyMappingFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _reservedPropertyMapping : 31; 
    } _propertyMappingFlags;
}

+ (void)initialize;

- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)userInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 valueExpression:(id)arg2;
- (id)_propertyTransforms;
- (id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2;
- (id)valueExpression;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_createCachesAndOptimizeState;
- (void)_throwIfNotEditable;
- (void)_setPropertyTransforms:(id)arg1;
- (void)setValueExpression:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (BOOL)isEditable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
