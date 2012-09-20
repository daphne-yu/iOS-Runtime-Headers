/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray;

@interface UIKeyboardCandidate : NSObject <NSCopying> {
    NSString *_alternativeText;
    NSString *_accessibilityLabel;
}

@property(readonly) NSString * candidate;
@property(readonly) NSString * input;
@property(readonly) NSString * label;
@property(copy) NSString * alternativeText;
@property(readonly) NSString * accessibilityLabel;
@property(readonly) unsigned int wordOriginFeedbackID;
@property(readonly) unsigned int deleteCount;
@property(readonly) BOOL isForShortcutConversion;
@property(readonly) BOOL isAutocorrection;
@property(getter=isExtensionCandidate,readonly) BOOL extensionCandidate;
@property(readonly) NSArray * usageTrackingTypes;


- (unsigned int)hash;
- (BOOL)isAutocorrection;
- (unsigned int)wordOriginFeedbackID;
- (id)usageTrackingTypes;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isForShortcutConversion;
- (BOOL)isExtensionCandidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)candidate;
- (id)input;
- (void)dealloc;
- (void)setAlternativeText:(id)arg1;
- (id)alternativeText;
- (unsigned int)deleteCount;
- (id)label;
- (id)accessibilityLabel;

@end
