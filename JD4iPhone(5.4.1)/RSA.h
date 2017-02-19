//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RSA : NSObject
{
    struct __SecKey *publicKey_;
}

+ (id)decryptData:(id)arg1 publicKey:(id)arg2;
+ (id)decryptString:(id)arg1 publicKey:(id)arg2;
+ (id)encryptData:(id)arg1 publicKey:(id)arg2;
+ (id)encryptString:(id)arg1 publicKey:(id)arg2;
+ (id)decryptData:(id)arg1 privateKey:(id)arg2;
+ (id)decryptString:(id)arg1 privateKey:(id)arg2;
+ (id)decryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
+ (id)encryptData:(id)arg1 privateKey:(id)arg2;
+ (id)encryptString:(id)arg1 privateKey:(id)arg2;
+ (id)encryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
+ (struct __SecKey *)addPrivateKey:(id)arg1;
+ (struct __SecKey *)addPublicKey:(id)arg1;
+ (id)stripPrivateKeyHeader:(id)arg1;
+ (id)stripPublicKeyHeader:(id)arg1;
+ (id)decryptRSAWithPublicKey:(id)arg1 enStr:(id)arg2;
+ (id)decryptRSAWithPublicKey1:(id)arg1;
+ (id)encryptRSAWithPublicKey1:(id)arg1;
+ (void)generateKeyPair;
+ (id)getPEMFormattedPrivateKey;
+ (id)getX509FormattedPublicKey;
+ (id)removeRN:(id)arg1;
+ (id)alloc;
+ (id)sharedRSA;
- (struct __SecKey *)getPublicKeyRefWithPubString:(id)arg1;
- (struct __SecTrust *)getTrustFromCertificatePubString:(id)arg1;
- (id)encrypt:(id)arg1 WithPublicKey:(struct __SecKey *)arg2;
- (id)encrypt1:(id)arg1 WithPublicKey1:(struct __SecKey *)arg2;
- (struct __SecKey *)addPeerPublicKey:(id)arg1 keyString:(id)arg2;
- (id)parsePublicKey:(id)arg1;
- (id)stripPublicKeyHeader:(id)arg1;
- (void)calcComplement:(id)arg1;
- (void)removePeerPublicKey:(id)arg1;
- (struct __SecKey *)getKeyRefWithPersistentKeyRef:(void *)arg1;
- (struct __SecTrust *)getTrustFromCertificate:(id)arg1;
- (struct __SecKey *)getPublicKeyRef:(id)arg1 type:(id)arg2;
- (id)encryptRSAWithPublicKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end
