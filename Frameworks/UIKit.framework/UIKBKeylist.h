/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSMutableArray;

@interface UIKBKeylist : NSObject <NSCoding, NSCopying> {
    NSString *m_name;
    NSMutableArray *m_keys;
}

@property(retain) NSString * name;
@property(retain) NSMutableArray * keys;
@property(readonly) unsigned int count;

+ (id)keylist;

- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)count;
- (id)keysWithInteractionType:(id)arg1;
- (id)keyWithName:(id)arg1;
- (id)initWithName:(id)arg1 keys:(id)arg2;
- (void)setKeys:(id)arg1;
- (id)keys;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
