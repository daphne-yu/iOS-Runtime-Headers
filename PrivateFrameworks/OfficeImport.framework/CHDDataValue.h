/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDString;

@interface CHDDataValue : NSObject  {
    struct CHDDataPoint { 
        unsigned int index; 
        struct EDValue { 
            int type; 
            union { 
                boolboolean; 
                double number; 
                EDString *string; 
                unsigned int stringIndex; 
                int error; 
            } ; 
        } value; 
        unsigned int contentFormatId; 
    } mDataPoint;
}

+ (id)dataValueWithIndex:(int)arg1 value:(struct EDValue { int x1; union { boolx_2_1_1; double x_2_1_2; id x_2_1_3; unsigned int x_2_1_4; int x_2_1_5; } x2; }*)arg2;
+ (id)dataValue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (void)setIndex:(int)arg1;
- (int)index;
- (struct EDValue { int x1; union { boolx_2_1_1; double x_2_1_2; id x_2_1_3; unsigned int x_2_1_4; int x_2_1_5; } x2; }*)value;
- (void)setValue:(struct EDValue { int x1; union { boolx_2_1_1; double x_2_1_2; id x_2_1_3; unsigned int x_2_1_4; int x_2_1_5; } x2; }*)arg1;
- (void)setContentFormatWithResources:(id)arg1 resources:(id)arg2;
- (id)contentFormatWithResources:(id)arg1;
- (void)setDataPoint:(struct CHDDataPoint { unsigned int x1; struct EDValue { int x_2_1_1; union { boolx_2_2_1; double x_2_2_2; id x_2_2_3; unsigned int x_2_2_4; int x_2_2_5; } x_2_1_2; } x2; unsigned int x3; }*)arg1;
- (struct CHDDataPoint { unsigned int x1; struct EDValue { int x_2_1_1; union { boolx_2_2_1; double x_2_2_2; id x_2_2_3; unsigned int x_2_2_4; int x_2_2_5; } x_2_1_2; } x2; unsigned int x3; }*)dataPoint;
- (id)initWithIndex:(int)arg1 value:(struct EDValue { int x1; union { boolx_2_1_1; double x_2_1_2; id x_2_1_3; unsigned int x_2_1_4; int x_2_1_5; } x2; }*)arg2;
- (void)setContentFormatId:(unsigned int)arg1;
- (unsigned int)contentFormatId;

@end
