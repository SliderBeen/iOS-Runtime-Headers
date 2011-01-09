/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */



@interface MKCache0Entry : NSObject <MKCacheableObject>
{
    id key;
    id object;
    NSUInteger accessTime;
}

@property(readonly) id key;
@property NSUInteger _mapkit_cache_accessTime;
@property(readonly) id _mapkit_cache_key;
@property(retain) id object;


- (void)setObject:(id)arg1;
- (id)key;
- (id)object;
- (id)description;
- (void)dealloc;
- (id)initWithObject:(id)arg1 key:(id)arg2;
- (id)_mapkit_cache_key;
- (NSUInteger)_mapkit_cache_accessTime;
- (void)set_mapkit_cache_accessTime:(NSUInteger)arg1;

@end