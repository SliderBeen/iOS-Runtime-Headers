/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSWRMLinkRecommendation : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int infraWiFiState : 1; 
        unsigned int magnetState : 1; 
        unsigned int primaryLinkType : 1; 
        unsigned int recommendedLinkType : 1; 
    }  _has;
    unsigned int  _infraWiFiState;
    unsigned int  _magnetState;
    unsigned int  _primaryLinkType;
    unsigned int  _recommendedLinkType;
    unsigned long long  _timestamp;
}

@property (nonatomic) BOOL hasInfraWiFiState;
@property (nonatomic) BOOL hasMagnetState;
@property (nonatomic) BOOL hasPrimaryLinkType;
@property (nonatomic) BOOL hasRecommendedLinkType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int infraWiFiState;
@property (nonatomic) unsigned int magnetState;
@property (nonatomic) unsigned int primaryLinkType;
@property (nonatomic) unsigned int recommendedLinkType;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasInfraWiFiState;
- (BOOL)hasMagnetState;
- (BOOL)hasPrimaryLinkType;
- (BOOL)hasRecommendedLinkType;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (unsigned int)infraWiFiState;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)magnetState;
- (void)mergeFrom:(id)arg1;
- (unsigned int)primaryLinkType;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)recommendedLinkType;
- (void)setHasInfraWiFiState:(BOOL)arg1;
- (void)setHasMagnetState:(BOOL)arg1;
- (void)setHasPrimaryLinkType:(BOOL)arg1;
- (void)setHasRecommendedLinkType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setInfraWiFiState:(unsigned int)arg1;
- (void)setMagnetState:(unsigned int)arg1;
- (void)setPrimaryLinkType:(unsigned int)arg1;
- (void)setRecommendedLinkType:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
