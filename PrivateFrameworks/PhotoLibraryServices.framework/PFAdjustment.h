/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDictionary, NSString;

@interface PFAdjustment : NSObject {
    NSString *_autoIdentifier;
    NSDictionary *_autoSettings;
    unsigned long long _formatVersion;
    NSString *_identifier;
    NSString *_maskUUID;
    NSDictionary *_settings;
    bool_enabled;
}

@property(readonly) NSString * autoIdentifier;
@property(readonly) NSDictionary * autoSettings;
@property(readonly) bool enabled;
@property(readonly) unsigned long long formatVersion;
@property(readonly) NSString * identifier;
@property(readonly) NSString * maskUUID;
@property(readonly) NSDictionary * settings;

+ (bool)isValidArchiveDictionary:(id)arg1 errors:(id)arg2;

- (void).cxx_destruct;
- (id)archiveDictionary;
- (id)autoIdentifier;
- (id)autoSettings;
- (id)debugDescription;
- (id)description;
- (bool)enabled;
- (unsigned long long)formatVersion;
- (id)identifier;
- (id)init;
- (id)initWithArchiveDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(bool)arg5 maskUUID:(id)arg6;
- (id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(bool)arg5;
- (id)initWithIdentifier:(id)arg1 settings:(id)arg2 enabled:(bool)arg3;
- (id)maskUUID;
- (id)settings;

@end