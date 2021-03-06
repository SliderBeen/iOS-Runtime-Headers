/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {
    NSString * _accessibilityLabel;
    int  _alignment;
    double  _duration;
    SKUILink * _link;
    int  _mediaAppearance;
    long long  _mediaIdentifier;
    int  _mediaType;
    NSString * _mediaURLString;
    <SKUIArtworkProviding> * _thumbnailArtworkProvider;
    NSString * _title;
    float  _titleFontSize;
    int  _titleFontWeight;
}

@property (nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic, readonly) int alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) SKUILink *link;
@property (nonatomic, readonly) int mediaAppearance;
@property (nonatomic, readonly) long long mediaIdentifier;
@property (nonatomic, readonly) int mediaType;
@property (nonatomic, readonly) NSString *mediaURLString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SKUIArtworkProviding> *thumbnailArtworkProvider;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) float titleFontSize;
@property (nonatomic, readonly) int titleFontWeight;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (int)alignment;
- (id)bestThumbnailArtwork;
- (id)bestThumbnailForWidth:(float)arg1;
- (int)componentType;
- (double)duration;
- (id)initWithArtwork:(id)arg1;
- (id)initWithArtworkProvider:(id)arg1;
- (id)initWithArtworkProvider:(id)arg1 appearance:(int)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (id)link;
- (int)mediaAppearance;
- (long long)mediaIdentifier;
- (int)mediaType;
- (id)mediaURLString;
- (id)metricsElementName;
- (id)thumbnailArtworkProvider;
- (id)title;
- (float)titleFontSize;
- (int)titleFontWeight;
- (id)valueForMetricsField:(id)arg1;

@end
