/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, NSMutableDictionary, NSValue;

@interface _UISearchBarAppearanceStorage : NSObject  {
    NSMutableDictionary *searchFieldBackgroundImages;
    NSValue *searchFieldPositionAdjustment;
    NSMutableDictionary *iconImages;
    UIImage *separatorImage;
}

@property(retain) NSValue * searchFieldPositionAdjustment;
@property(retain) UIImage * separatorImage;


- (void)dealloc;
- (void)setSeparatorImage:(id)arg1;
- (id)separatorImage;
- (void)setSearchFieldPositionAdjustment:(id)arg1;
- (id)searchFieldPositionAdjustment;
- (id)imageForIcon:(int)arg1 state:(unsigned int)arg2;
- (void)setImage:(id)arg1 forIcon:(int)arg2 state:(unsigned int)arg3;
- (id)searchFieldBackgroundImageForState:(unsigned int)arg1;
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned int)arg2;

@end