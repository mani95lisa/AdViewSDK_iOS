/*
 
 Copyright 2010 www.adview.cn. All rights reserved.
 
 */

#import "AdViewAdNetworkAdapter.h"
#import "MMAdView.h"

@interface AdViewAdapterMillennial : AdViewAdNetworkAdapter <MMAdDelegate> {
  NSMutableDictionary *requestData;
}

+ (AdViewAdNetworkType)networkType;

@end
