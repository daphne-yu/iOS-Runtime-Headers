/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKComposeHeaderField, NSString;

@interface GKChallengeComposeController : GKSimpleComposeController  {
    NSString *_challengeDescription;
    GKComposeHeaderField *_challengeField;
}

@property(retain) NSString * challengeDescription;
@property(retain) GKComposeHeaderField * challengeField;


- (id)challengeField;
- (id)challengeDescription;
- (void)setChallengeField:(id)arg1;
- (void)setChallengeDescription:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;

@end
