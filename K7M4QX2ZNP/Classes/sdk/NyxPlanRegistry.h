//
//  NyxPlanRegistry.h
//  K7M4QX2ZNP-iOS
//
//
#import "NyxSlotProfile.h"
#import <Foundation/Foundation.h>

@interface NyxPlanRegistry : NSObject
@property (nonatomic) int unitWeight;
+(instancetype) sharedKernel;
-(void) registerPlan:(NSString *)placementKey profile:(NyxSlotProfile *) profile;
-(NyxSlotProfile *) planForSlot: (NSString *)placementKey;
@end

