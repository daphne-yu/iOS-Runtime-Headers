/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADAdjustRect : NSObject  {
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        int value; 
    } mLeft;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        int value; 
    } mTop;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        int value; 
    } mRight;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        int value; 
    } mBottom;
}


- (id).cxx_construct;
- (struct OADAdjustCoord { BOOL x1; int x2; })top;
- (struct OADAdjustCoord { BOOL x1; int x2; })right;
- (struct OADAdjustCoord { BOOL x1; int x2; })left;
- (struct OADAdjustCoord { BOOL x1; int x2; })bottom;
- (id)initWithLeft:(struct OADAdjustCoord { BOOL x1; int x2; })arg1 top:(struct OADAdjustCoord { BOOL x1; int x2; })arg2 right:(struct OADAdjustCoord { BOOL x1; int x2; })arg3 bottom:(struct OADAdjustCoord { BOOL x1; int x2; })arg4;

@end
