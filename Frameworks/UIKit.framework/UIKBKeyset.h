/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSMutableArray;

@interface UIKBKeyset : NSObject <NSCoding, NSCopying> {
    NSString *m_name;
    NSMutableArray *m_keylists;
}

@property(retain) NSString * name;
@property(retain) NSMutableArray * keylists;

+ (id)keyset;

- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)addKeylist:(id)arg1;
- (id)keylistWithName:(id)arg1;
- (void)setKeylists:(id)arg1;
- (id)keylists;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
