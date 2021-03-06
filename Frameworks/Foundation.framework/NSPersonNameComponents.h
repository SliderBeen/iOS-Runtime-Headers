/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPersonNameComponents : NSObject <NSCopying, NSSecureCoding> {
    id  _private;
}

@property (copy) NSString *familyName;
@property (copy) NSString *givenName;
@property (copy) NSString *middleName;
@property (copy) NSString *namePrefix;
@property (copy) NSString *nameSuffix;
@property (copy) NSString *nickname;
@property (copy) NSPersonNameComponents *phoneticRepresentation;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(BOOL)arg1;
+ (id)_allComponents;
+ (id)_allProperties;
+ (BOOL)supportsSecureCoding;

- (BOOL)_isEmpty;
- (id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)givenName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToComponents:(id)arg1;
- (id)middleName;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)phoneticRepresentation;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNamePrefix:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setPhoneticRepresentation:(id)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)componentsForContact:(id)arg1;
+ (id)keyPathMapping;

- (void)overrideComponentsInContact:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (id)br_formattedName;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (BOOL)isGivenNameFirst;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (id)ic_componentsForSearchHighlighting;
- (id)ic_localizedNameWithDefaultFormattingStyle;

@end
