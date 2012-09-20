/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableSet, OAXDrawingState, OCPPackagePart, NSMutableDictionary;

@interface OAVState : NSObject  {
    Class mClient;
    OAXDrawingState *mOAXState;
    OCPPackagePart *mPackagePart;
    NSMutableDictionary *mShapeTypes;
    NSMutableDictionary *mShapeIdMap;
    NSMutableSet *mDualDrawables;
}


- (void)reset;
- (void)dealloc;
- (Class)client;
- (void)addDualDrawable:(id)arg1;
- (id)oaxState;
- (void)setShapeType:(unsigned short)arg1 forId:(id)arg2;
- (unsigned short)shapeTypeForId:(id)arg1;
- (id)blipRefForURL:(id)arg1;
- (unsigned long)officeArtShapeIdWithVmlShapeId:(id)arg1;
- (void)setDrawable:(id)arg1 forVmlShapeId:(id)arg2;
- (id)drawableForVmlShapeId:(id)arg1;
- (void)setOAXState:(id)arg1;
- (BOOL)isDualDrawable:(id)arg1;
- (id)initWithClient:(Class)arg1 packagePart:(id)arg2;
- (void)setPackagePart:(id)arg1;
- (id)packagePart;

@end
