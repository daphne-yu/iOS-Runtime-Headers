/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class <NSObject>;

@interface NSXPCCoder : NSCoder  {
    <NSObject> *_userInfo;
    id _reserved1;
}

@property(retain) <NSObject> * userInfo;


- (id)userInfo;
- (void)dealloc;
- (void)setUserInfo:(id)arg1;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (id)decodeXPCObjectForKey:(id)arg1;
- (BOOL)requiresSecureCoding;

@end
