/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSOutputStream : NSStream  {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)outputStreamWithURL:(id)arg1 append:(BOOL)arg2;
+ (id)outputStreamToFileAtPath:(id)arg1 append:(BOOL)arg2;
+ (id)outputStreamToBuffer:(char *)arg1 capacity:(unsigned int)arg2;
+ (id)outputStreamToMemory;

- (BOOL)hasSpaceAvailable;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (unsigned long)_cfTypeID;
- (struct { int x1; int x2; })_cfStreamError;

@end
