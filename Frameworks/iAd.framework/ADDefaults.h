/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSMutableDictionary;

@interface ADDefaults : NSObject  {
    struct __CFString { } *_defaultsBundleId;
    NSMutableDictionary *_factoryDefaults;
}

+ (void)setInteger:(int)arg1 forKey:(id)arg2;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (int)integerForKey:(id)arg1;
+ (BOOL)boolForKey:(id)arg1;
+ (void)addFactoryDefaults:(id)arg1;
+ (void)_setDefaultValue:(id)arg1 forKey:(id)arg2;
+ (id)_defaultValueForKey:(id)arg1 valueClass:(Class)arg2;
+ (void)setString:(id)arg1 forKey:(id)arg2;
+ (void)setBool:(BOOL)arg1 forKey:(id)arg2;
+ (void)setDouble:(double)arg1 forKey:(id)arg2;
+ (double)doubleForKey:(id)arg1;
+ (id)stringForKey:(id)arg1;

- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)init;
- (id)autorelease;

@end
