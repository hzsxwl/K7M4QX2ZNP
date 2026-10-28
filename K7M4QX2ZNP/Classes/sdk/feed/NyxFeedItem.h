//
//  NyxFeedItem.h
//  K7M4QX2ZNP-iOS
//
//


#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface NyxFeedItem : NSObject
- (instancetype)initWithUpstreamItem:(WindMillNativeAd *) ad;
- (WindMillNativeAd *)underlyingAd;
@end

