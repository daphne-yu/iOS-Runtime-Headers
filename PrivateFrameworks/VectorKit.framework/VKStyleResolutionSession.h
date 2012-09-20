/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKStylesheet, NSMapTable;

@interface VKStyleResolutionSession : NSObject  {
    VKStylesheet *_stylesheet;
    NSMapTable *_attrToStyle;
    NSMapTable *_styleToGroup;
    int _vectorType;
}


- (void)dealloc;
- (void)removeFeature:(struct { id x1; char *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; BOOL x9; unsigned long long x10; float x11; id x12; int x13; }*)arg1;
- (id)allGroups;
- (id)evaluateFeature:(struct { id x1; char *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; BOOL x9; unsigned long long x10; float x11; id x12; int x13; }*)arg1 createNewGroup:(id)arg2 appendToGroup:(id)arg3;
- (id)evaluateFeature:(struct { id x1; char *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; BOOL x9; unsigned long long x10; float x11; id x12; int x13; }*)arg1;
- (id)evaluateGenericShieldsForFeature:(struct { id x1; char *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; BOOL x9; unsigned long long x10; float x11; id x12; int x13; }*)arg1;
- (id)initWithStylesheet:(id)arg1 vectorType:(int)arg2;

@end
