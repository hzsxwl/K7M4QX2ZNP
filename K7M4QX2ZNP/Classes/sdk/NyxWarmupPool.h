//
//  NyxWarmupPool.h
//  K7M4QX2ZNP-iOS
//
//

#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface NyxWarmupPool : NSObject
+(instancetype) sharedKernel;
-(void) primeSlots:(NSString *)bonusSlot midrollSlot:(NSString *)midrollSlot fullscreenSlot:(NSString *)fullscreenSlot audienceTag:(NSString *)audienceTag;
-(WindMillRewardVideoAd *) dormantBonusAd;
-(WindMillIntersititialAd *) dormantMidrollAd;
-(WindMillIntersititialAd *) dormantFullscreenAd;
-(NSString *) activeMidrollSlot;
-(NSString *) activeFullscreenSlot;
@end

