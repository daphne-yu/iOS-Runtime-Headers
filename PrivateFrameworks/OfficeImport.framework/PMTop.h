/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PMState, PMPresentationMapper, CMArchiveManager;

@interface PMTop : CMTop <OIProgressiveReaderDelegate> {
    CMArchiveManager *_archiver;
    PMState *_state;
    PMPresentationMapper *_mapper;
    BOOL _xml;
}

+ (void)fillHTMLArchiveForPowerPointData:(id)arg1 fileName:(id)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4;
+ (void)fillHTMLArchiveForPowerPointFile:(id)arg1 xmlFlag:(BOOL)arg2 archiver:(id)arg3;
+ (void)fillHTMLArchiveForPowerPointFrom:(id)arg1 inMemory:(BOOL)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4;

- (BOOL)isCancelled;
- (void)dealloc;
- (void)readFrom:(id)arg1 inMemory:(BOOL)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4;
- (void)readerDidEndDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned int)arg2 inDocument:(id)arg3 isLastElement:(BOOL)arg4;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(int)arg2;
- (void)readData:(id)arg1 fileName:(id)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4;
- (void)readFile:(id)arg1 xmlFlag:(BOOL)arg2 archiver:(id)arg3;

@end
