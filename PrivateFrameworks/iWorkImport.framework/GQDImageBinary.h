/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDImageBinary : NSObject  {
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    struct __CFString { } *mPath;
    struct __CFURL { } *mAbsoluteUrl;
    int mResourceType;
}


- (id).cxx_construct;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })size;
- (struct __CFURL { }*)absoluteUrlForState:(id)arg1;
- (int)readDataAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (int)resourceType;
- (struct __CFString { }*)relativePath;

@end
