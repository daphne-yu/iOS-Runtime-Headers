/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface __NSConcreteUUID : NSUUID  {
    unsigned char _uuidBytes[16];
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (Class)classForCoder;
- (void)getUUIDBytes:(unsigned char[16])arg1;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; })_cfUUIDBytes;
- (id)initWithUUIDBytes:(unsigned char[16])arg1;
- (id)UUIDString;
- (id)initWithUUIDString:(id)arg1;

@end
