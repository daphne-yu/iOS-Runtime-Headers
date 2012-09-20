/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSURL, NSAttributedString;

@interface MKMapAttribution : NSObject  {
    NSAttributedString *_string;
    NSURL *_url;
}

@property(readonly) NSAttributedString * string;
@property(readonly) NSURL * url;
@property(readonly) NSAttributedString * disclosureArrow;


- (id)string;
- (void)dealloc;
- (id)url;
- (id)disclosureArrow;
- (id)attributedStringWithImage:(id)arg1;
- (id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 globalAttributions:(id)arg3;

@end
