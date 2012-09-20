/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLRegionInternal : NSObject  {
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        double radius; 
        BOOL identifier[512]; 
    } fRegion;
}


- (id)initWithClientRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; double x2; BOOL x3[512]; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
