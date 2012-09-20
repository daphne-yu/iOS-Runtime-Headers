/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSURL, NSString, UIImage;

@interface IUUserMessageDataSource : IUMediaDataSource  {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsets;
    UIImage *_image;
    NSString *_messageSubtitle;
    NSString *_messageTitle;
    NSURL *_findContentURL;
    float _modalContextTopInset;
    BOOL _showStrings;
    float _modalContextTopOffset;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property(retain) UIImage * image;
@property(retain) NSString * messageTitle;
@property(retain) NSString * messageSubtitle;
@property(retain) NSURL * findContentURL;
@property(readonly) BOOL showStrings;
@property float modalContextTopOffset;


- (void)setMessageTitle:(id)arg1;
- (id)messageTitle;
- (void)dealloc;
- (id)init;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)image;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (void)setImage:(id)arg1;
- (float)modalContextTopOffset;
- (BOOL)showStrings;
- (id)findContentURL;
- (id)messageSubtitle;
- (void)setModalContextTopOffset:(float)arg1;
- (id)initForMusic;
- (BOOL)isRestorableNavigationPathNode;
- (id)initForVideo;
- (void)setFindContentURL:(id)arg1;
- (void)setMessageSubtitle:(id)arg1;

@end
