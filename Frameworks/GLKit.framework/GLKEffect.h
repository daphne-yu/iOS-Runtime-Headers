/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@class NSArray, NSString, GLKShaderBlockNode, NSMutableArray, NSMutableDictionary;

@interface GLKEffect : NSObject  {
    NSMutableArray *_properties;
    unsigned char _colorMaterialEnabled;
    unsigned char _lightModelTwoSided;
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    } _lightModelAmbientColor;
    unsigned char _texturingEnabled;
    NSArray *_textureOrder;
    NSString *_label;
    NSMutableDictionary *_programHash;
    unsigned char _perVertexLightingEnabled;
    unsigned char _perPixelLightingEnabled;
    unsigned int _numLights;
    unsigned int _numTextures;
    float *_materialAmbientColor;
    float *_materialDiffuseColor;
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    } _baseLightingColor;
    unsigned char _masksInitialized;
    int _aColorLoc;
    id *_effectShaderArray;
    NSMutableArray *_lightProperties;
    GLKShaderBlockNode *_vshRootNode;
    GLKShaderBlockNode *_fshRootNode;
    unsigned int _vshName;
    unsigned int _fshName;
    unsigned int _programName;
    char **_vshStrings;
    char **_fshStrings;
    unsigned int _numVshStrings;
    unsigned int _numFshStrings;
    unsigned long long _dirtyUniforms;
    bool_textureOrderStale;
    int _lightModelAmbientColorLoc;
    int _baseLightingColorLoc;
    struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; } *_fshMask;
    struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; } *_vshMask;
    struct GLKBigInt_s { 
        unsigned long long n0; 
        unsigned long long n1; 
    } _prevFshMask;
    struct GLKBigInt_s { 
        unsigned long long n0; 
        unsigned long long n1; 
    } _prevVshMask;
}

@property(retain) NSMutableArray * properties;
@property unsigned char colorMaterialEnabled;
@property unsigned char lightModelTwoSided;
@property union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } lightModelAmbientColor;
@property unsigned char texturingEnabled;
@property unsigned char perVertexLightingEnabled;
@property unsigned char perPixelLightingEnabled;
@property(retain) NSString * label;
@property(retain) NSArray * textureOrder;
@property unsigned int vshName;
@property unsigned int fshName;
@property unsigned int numLights;
@property unsigned int numTextures;
@property unsigned int programName;
@property(readonly) GLKShaderBlockNode * vshRootNode;
@property(readonly) GLKShaderBlockNode * fshRootNode;
@property char ** vshStrings;
@property char ** fshStrings;
@property unsigned int numVshStrings;
@property unsigned int numFshStrings;
@property id* effectShaderArray;
@property(retain) NSMutableArray * lightProperties;
@property unsigned char masksInitialized;
@property(readonly) NSMutableDictionary * programHash;
@property int lightModelAmbientColorLoc;
@property int baseLightingColorLoc;
@property int aColorLoc;
@property union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } baseLightingColor;
@property(readonly) float* materialAmbientColor;
@property(readonly) float* materialDiffuseColor;
@property struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }* vshMask;
@property struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }* fshMask;
@property struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; } prevVshMask;
@property struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; } prevFshMask;
@property unsigned long long dirtyUniforms;
@property bool textureOrderStale;

+ (id)shaderInfoLogForName:(unsigned int)arg1 effectLabel:(id)arg2 msg:(const char *)arg3;
+ (id)programInfoLogForName:(unsigned int)arg1 effectLabel:(id)arg2 msg:(const char *)arg3;
+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (void)setPrevVshMask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })arg1;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })prevVshMask;
- (void)setPrevFshMask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })arg1;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })prevFshMask;
- (void)setVshMask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)arg1;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)vshMask;
- (void)setFshMask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)arg1;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)fshMask;
- (void)setBaseLightingColorLoc:(int)arg1;
- (int)baseLightingColorLoc;
- (void)setLightModelAmbientColorLoc:(int)arg1;
- (int)lightModelAmbientColorLoc;
- (void)setTextureOrderStale:(bool)arg1;
- (bool)textureOrderStale;
- (void)setNumFshStrings:(unsigned int)arg1;
- (unsigned int)numFshStrings;
- (void)setNumVshStrings:(unsigned int)arg1;
- (unsigned int)numVshStrings;
- (void)setFshStrings:(char **)arg1;
- (char **)fshStrings;
- (void)setVshStrings:(char **)arg1;
- (char **)vshStrings;
- (void)setFshName:(unsigned int)arg1;
- (unsigned int)fshName;
- (void)setVshName:(unsigned int)arg1;
- (unsigned int)vshName;
- (id)fshRootNode;
- (id)vshRootNode;
- (void)setLightProperties:(id)arg1;
- (id)lightProperties;
- (void)setEffectShaderArray:(id*)arg1;
- (id*)effectShaderArray;
- (void)setAColorLoc:(int)arg1;
- (int)aColorLoc;
- (unsigned char)masksInitialized;
- (void)setBaseLightingColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })baseLightingColor;
- (float*)materialDiffuseColor;
- (float*)materialAmbientColor;
- (unsigned char)texturingEnabled;
- (void)setNumTextures:(unsigned int)arg1;
- (unsigned int)numTextures;
- (void)setNumLights:(unsigned int)arg1;
- (unsigned int)numLights;
- (id)programHash;
- (char **)fshMaskStr;
- (char **)vshMaskStr;
- (unsigned int)fshMaskCt;
- (unsigned int)vshMaskCt;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)fshMasks;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)vshMasks;
- (bool)includeShaderTextForRootNode:(id)arg1;
- (void)setMasksInitialized:(unsigned char)arg1;
- (void)createAndUseProgramWithShadingHash:(id)arg1;
- (void)setTextureIndices;
- (BOOL)useColorAttrib;
- (BOOL)useTexCoordAttrib;
- (void)setShaderBindings;
- (void)initializeMasks;
- (void)updateFshStringsWithRoot:(id)arg1 enabled:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)includeFshShaderTextForRootNode:(id)arg1;
- (void)updateVshStringsWithRoot:(id)arg1 enabled:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)includeVshShaderTextForRootNode:(id)arg1;
- (unsigned long long)dirtyUniforms;
- (void)setDirtyUniforms:(unsigned long long)arg1;
- (void)addTransformProperty;
- (void)unrollLoopNodesForStaticTreeWithRoot:(id)arg1;
- (void)setTexturingEnabled:(unsigned char)arg1;
- (void)setPerVertexLightingEnabled:(unsigned char)arg1;
- (void)setPerPixelLightingEnabled:(unsigned char)arg1;
- (bool)parseXMLFile:(id)arg1 rootNode:(id)arg2;
- (void)initializeStaticMasks;
- (void)dirtyAllUniforms;
- (void)setProgramName:(unsigned int)arg1;
- (unsigned int)programName;
- (id)textureOrder;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })lightModelAmbientColor;
- (unsigned char)lightModelTwoSided;
- (unsigned char)colorMaterialEnabled;
- (unsigned char)perPixelLightingEnabled;
- (unsigned char)perVertexLightingEnabled;
- (void)setTextureOrder:(id)arg1;
- (id)initWithPropertyArray:(id)arg1;
- (void)setLightModelTwoSided:(unsigned char)arg1;
- (void)setColorMaterialEnabled:(unsigned char)arg1;
- (void)setLightModelAmbientColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setProperties:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)properties;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)bind;

@end
