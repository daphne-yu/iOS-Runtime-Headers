/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSString, NSArray;

@interface IMStatusChatItem : IMChatItem  {
}

@property(readonly) NSString * formatString;
@property(readonly) NSArray * handles;
@property(readonly) int statusType;


- (id)description;
- (id)formatString;
- (id)handles;
- (id)stringValue;
- (id)initWithString:(id)arg1 date:(id)arg2 statusType:(int)arg3;
- (int)statusType;
- (id)initWithFormat:(id)arg1 handles:(id)arg2 date:(id)arg3 statusType:(int)arg4;

@end
