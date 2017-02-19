//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBIMChatCellLayout-Protocol.h"

@class NSString;
@protocol TBIMChatBubbleLayout;

@interface TBIMChatBaseCellLayout : NSObject <TBIMChatCellLayout>
{
    _Bool _isTimeViewVisible;	// 8 = 0x8
    _Bool _isIdentityViewVisible;	// 9 = 0x9
    _Bool _isNameViewVisible;	// 10 = 0xa
    long long _cellHeight;	// 16 = 0x10
    NSString *_showTimeString;	// 24 = 0x18
    id <TBIMChatBubbleLayout> _chatBubbleLayout;	// 32 = 0x20
    struct CGRect _timeViewRect;	// 40 = 0x28
    struct CGRect _chatBubbleRect;	// 72 = 0x48
    struct CGRect _avatarViewRect;	// 104 = 0x68
    struct CGRect _identityViewRect;	// 136 = 0x88
    struct CGRect _nameViewRect;	// 168 = 0xa8
}

@property(nonatomic) struct CGRect nameViewRect; // @synthesize nameViewRect=_nameViewRect;
@property(nonatomic) _Bool isNameViewVisible; // @synthesize isNameViewVisible=_isNameViewVisible;
@property(nonatomic) struct CGRect identityViewRect; // @synthesize identityViewRect=_identityViewRect;
@property(nonatomic) _Bool isIdentityViewVisible; // @synthesize isIdentityViewVisible=_isIdentityViewVisible;
@property(nonatomic) struct CGRect avatarViewRect; // @synthesize avatarViewRect=_avatarViewRect;
@property(retain, nonatomic) id <TBIMChatBubbleLayout> chatBubbleLayout; // @synthesize chatBubbleLayout=_chatBubbleLayout;
@property(nonatomic) struct CGRect chatBubbleRect; // @synthesize chatBubbleRect=_chatBubbleRect;
@property(copy, nonatomic) NSString *showTimeString; // @synthesize showTimeString=_showTimeString;
@property(nonatomic) struct CGRect timeViewRect; // @synthesize timeViewRect=_timeViewRect;
@property(nonatomic) _Bool isTimeViewVisible; // @synthesize isTimeViewVisible=_isTimeViewVisible;
@property(nonatomic) long long cellHeight; // @synthesize cellHeight=_cellHeight;
- (void).cxx_destruct;
- (void)updateCellSizeWithMessage:(id)arg1;
- (id)initWithPreMessage:(id)arg1 currentMessage:(id)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
