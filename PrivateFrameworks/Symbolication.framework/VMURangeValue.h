/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMURangeValue : VMUAddressRange  {
    int _value;
}

+ (id)rangeValueWithRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 value:(int)arg2;

- (int)compare:(id)arg1;
- (id)description;
- (int)value;
- (id)initWithRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 value:(int)arg2;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })addressRange;

@end
