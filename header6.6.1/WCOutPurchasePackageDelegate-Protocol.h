//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCOPurchasePackageRequest, WCOPurchasePackageResponse;

@protocol WCOutPurchasePackageDelegate <NSObject>
- (void)PurchasePackageResponse:(int)arg1 Request:(WCOPurchasePackageRequest *)arg2 Response:(WCOPurchasePackageResponse *)arg3;
@end

