//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface UserModel : JDModel
{
    _Bool _hasPlus;
    _Bool _plusBannerShow;
    _Bool _isWalletDegrade;
    NSArray *_session;
    NSString *_userName;
    NSString *_password;
    NSString *_email;
    NSString *_nickName;
    NSNumber *_userScore;
    NSNumber *_balance;
    NSNumber *_level;
    NSString *_levelStr;
    NSString *_pin;
    NSNumber *_userID;
    NSString *_imgUrl;
    NSString *_schoolId;
    NSString *_type;
    NSString *_bean;
    NSNumber *_userSex;
    NSArray *_captchaArray;
    NSArray *_labels;
    NSDictionary *_customerService;
    NSString *_levelUrl;
    NSString *_plusUrl;
    NSString *_plusText;
    NSString *_plusBkImg;
    NSString *_navColor;
    NSString *_plusHeadBkImg;
    NSString *_sPlusBgImg;
    NSData *_a2;
    NSString *_birthday;
}

@property(retain, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSData *a2; // @synthesize a2=_a2;
@property(nonatomic) _Bool isWalletDegrade; // @synthesize isWalletDegrade=_isWalletDegrade;
@property(retain, nonatomic) NSString *sPlusBgImg; // @synthesize sPlusBgImg=_sPlusBgImg;
@property(retain, nonatomic) NSString *plusHeadBkImg; // @synthesize plusHeadBkImg=_plusHeadBkImg;
@property(retain, nonatomic) NSString *navColor; // @synthesize navColor=_navColor;
@property(retain, nonatomic) NSString *plusBkImg; // @synthesize plusBkImg=_plusBkImg;
@property(nonatomic) _Bool plusBannerShow; // @synthesize plusBannerShow=_plusBannerShow;
@property(nonatomic) _Bool hasPlus; // @synthesize hasPlus=_hasPlus;
@property(retain, nonatomic) NSString *plusText; // @synthesize plusText=_plusText;
@property(retain, nonatomic) NSString *plusUrl; // @synthesize plusUrl=_plusUrl;
@property(retain, nonatomic) NSString *levelUrl; // @synthesize levelUrl=_levelUrl;
@property(retain, nonatomic) NSDictionary *customerService; // @synthesize customerService=_customerService;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSArray *captchaArray; // @synthesize captchaArray=_captchaArray;
@property(retain, nonatomic) NSNumber *userSex; // @synthesize userSex=_userSex;
@property(copy, nonatomic) NSString *bean; // @synthesize bean=_bean;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *schoolId; // @synthesize schoolId=_schoolId;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(copy, nonatomic) NSString *levelStr; // @synthesize levelStr=_levelStr;
@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(retain, nonatomic) NSNumber *balance; // @synthesize balance=_balance;
@property(retain, nonatomic) NSNumber *userScore; // @synthesize userScore=_userScore;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSArray *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)updateByNoEmptyWithUser:(id)arg1;
- (void)setDataWithDic:(id)arg1;

@end
