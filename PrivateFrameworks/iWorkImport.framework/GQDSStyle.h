/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class GQDSStyle;

@interface GQDSStyle : NSObject <GQDNameMappableWithDefault> {
    GQDSStyle *mParent;
    struct GQDSMap { } *mPropertyMap;
}

+ (id)createReplacementForMissingObject:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
+ (int)styleTypeForNodeName:(const char *)arg1;
+ (id)createReplacementForMissingStyleOfType:(int)arg1;
+ (struct GQDSMap { }*)defaultMapForStyleType:(int)arg1;
+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (void)dealloc;
- (BOOL)overridesObjectProperty:(int)arg1 value:(id*)arg2;
- (id)valueForObjectProperty:(int)arg1;
- (BOOL)overridesDoubleProperty:(int)arg1 value:(double*)arg2;
- (double)valueForDoubleProperty:(int)arg1;
- (BOOL)overridesFloatProperty:(int)arg1 value:(float*)arg2;
- (float)valueForFloatProperty:(int)arg1;
- (BOOL)overridesIntProperty:(int)arg1 value:(int*)arg2;
- (int)valueForIntProperty:(int)arg1;
- (BOOL)hasValueForObjectProperty:(int)arg1 value:(id*)arg2 wasOverriddenWithNull:(BOOL*)arg3;
- (BOOL)hasValueForDoubleProperty:(int)arg1 value:(double*)arg2 wasOverriddenWithNull:(BOOL*)arg3;
- (BOOL)hasValueForDoubleProperty:(int)arg1 value:(double*)arg2;
- (BOOL)hasValueForFloatProperty:(int)arg1 value:(float*)arg2 wasOverriddenWithNull:(BOOL*)arg3;
- (BOOL)hasValueForFloatProperty:(int)arg1 value:(float*)arg2;
- (BOOL)hasValueForIntProperty:(int)arg1 value:(int*)arg2 wasOverriddenWithNull:(BOOL*)arg3;
- (BOOL)hasValueForIntProperty:(int)arg1 value:(int*)arg2;
- (BOOL)hasValueForBoolProperty:(int)arg1 value:(BOOL*)arg2 wasOverriddenWithNull:(BOOL*)arg3;
- (BOOL)hasValueForBoolProperty:(int)arg1 value:(BOOL*)arg2;
- (void)setPropertyMap:(struct GQDSMap { }*)arg1;
- (BOOL)hasValueForObjectProperty:(int)arg1 value:(id*)arg2;
- (BOOL)valueForBoolProperty:(int)arg1;
- (BOOL)overridesBoolProperty:(int)arg1 value:(BOOL*)arg2;
- (void)setParent:(id)arg1;
- (id)parent;

@end
