/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@interface SKDiagnostics : NSObject  {
    unsigned int _diagDataAccess;
    unsigned int _pmuService;
    struct HDHangHistory { unsigned int x1; unsigned int x2; struct HDRecord { unsigned char x_3_1_1; unsigned char x_3_1_2; int x_3_1_3; } x3[25]; } *_hangHistory;
    void *_sysCfg;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (int)writeSysCfg:(void*)arg1;
- (void*)readSysCfg;
- (void)flagSuccessfulBoot;
- (void)clearLastBootError;
- (int)lastBootError;
- (int)lastBootStage;
- (void*)sysCfg;
- (int)writeHangHistory:(struct HDHangHistory { unsigned int x1; unsigned int x2; struct HDRecord { unsigned char x_3_1_1; unsigned char x_3_1_2; int x_3_1_3; } x3[25]; }*)arg1;
- (int)writeDiagnosticData:(char *)arg1 offset:(unsigned int)arg2 size:(unsigned int)arg3 commit:(int)arg4 set:(struct __CFString { }*)arg5;
- (int)clearHangHistory;
- (int)readDiagnosticData:(char *)arg1 offset:(unsigned int)arg2 size:(unsigned int)arg3 set:(struct __CFString { }*)arg4;
- (struct HDHangHistory { unsigned int x1; unsigned int x2; struct HDRecord { unsigned char x_3_1_1; unsigned char x_3_1_2; int x_3_1_3; } x3[25]; }*)hangHistory;
- (void*)pmuValueForIdentifier:(id)arg1;
- (struct HDHangHistory { unsigned int x1; unsigned int x2; struct HDRecord { unsigned char x_3_1_1; unsigned char x_3_1_2; int x_3_1_3; } x3[25]; }*)readHangHistory;
- (unsigned int)pmuService;
- (unsigned int)diagDataAccess;

@end
