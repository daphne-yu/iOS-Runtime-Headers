/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSError, NSString;

@interface NSFilesystemItemRemoveOperation : NSOperation  {
    id _delegate;
    NSString *_removePath;
    NSError *_error;
    void *_state;
    BOOL _filterUnderbars;
}

+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;
+ (id)filesystemItemRemoveOperationWithPath:(id)arg1;

- (void)main;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)_setFilterUnderbars:(BOOL)arg1;
- (BOOL)_filtersUnderbars;
- (void)_setError:(id)arg1;
- (id)error;

@end
