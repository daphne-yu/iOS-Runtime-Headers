/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMNetworkReachability : NSObject  {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1;
+ (id)reachabilityWithHostName:(id)arg1;

- (int)networkStatusForFlags:(unsigned int)arg1;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (int)currentReachabilityStatus;

@end
