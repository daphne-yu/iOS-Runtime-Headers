/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSISInlineStorageVariable : NSISVariable <NSISVariableDelegate> {
    NSString *_name;
    int _valueRestriction;
    BOOL _shouldBeMinimized;
}

@property(copy) NSString * name;
@property int valueRestriction;
@property BOOL shouldBeMinimized;


- (void)setName:(id)arg1;
- (id)name;
- (oneway void)dealloc;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (void)setShouldBeMinimized:(BOOL)arg1;
- (void)setValueRestriction:(int)arg1;
- (BOOL)shouldBeMinimized;
- (id)markedConstraint;
- (int)valueRestriction;

@end
