//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@protocol MonoServiceMsgDelegate;

__attribute__((visibility("hidden")))
@interface MonoServiceMsg : NSObject <NSCopying>
{
    id <MonoServiceMsgDelegate> _m_delegate;
}

@property(nonatomic) __weak id <MonoServiceMsgDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localNotificationInfo;
- (_Bool)isParaVaild;
- (_Bool)isTheSameToMsg:(id)arg1;
- (id)msgKey;
- (id)serviceType;
- (_Bool)isCancelMsg;
- (_Bool)isOutOfDate;
- (id)init;

@end
