/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface _VMUDWARFAttribute : NSObject  {
    unsigned long long _name;
    unsigned long long _form;
}

+ (id)attributeWithName:(unsigned long long)arg1 withForm:(unsigned long long)arg2;
+ (void)skipForm:(unsigned long long)arg1 withView:(id)arg2 wordSize:(unsigned char)arg3;

- (id)description;
- (void)skipWithView:(id)arg1 wordSize:(unsigned char)arg2;
- (id)stringWithView:(id)arg1 withStringTable:(id)arg2;

@end
