/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEOTileKeyList;

@interface _GEORegionalResourcesLoadListener : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progress;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _finished;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _error;

    GEOTileKeyList *_originalList;
    GEOTileKeyList *_satisfiedList;
    struct __CFRunLoop { } *_runLoop;
}

@property(copy) id progress;
@property(copy) id finished;
@property(copy) id error;
@property(retain) GEOTileKeyList * originalList;
@property(retain) GEOTileKeyList * satisfiedList;
@property(readonly) struct __CFRunLoop { }* runLoop;


- (void)setError:(id)arg1;
- (void)setFinished:(id)arg1;
- (id)finished;
- (void)dealloc;
- (id)progress;
- (void)setProgress:(id)arg1;
- (struct __CFRunLoop { }*)runLoop;
- (void)addSatisfiedKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)satisfiedList;
- (void)setSatisfiedList:(id)arg1;
- (void)setOriginalList:(id)arg1;
- (id)originalList;
- (id)error;
- (id)initWithRunLoop:(struct __CFRunLoop { }*)arg1;

@end
