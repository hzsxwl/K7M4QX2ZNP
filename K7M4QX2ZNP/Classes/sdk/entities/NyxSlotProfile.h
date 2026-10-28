#import <Foundation/Foundation.h>

@interface NyxSlotProfile : NSObject
  
@property (nonatomic, copy) NSString *placementKey;
@property (nonatomic, copy) NSString *upstreamCreativeId;
@property (nonatomic, copy) NSString *upstreamKind;
@property (nonatomic) int scoreWeight;
@property (nonatomic) int transferRate;
@property (nonatomic, copy) NSString *sourceAppTag;
@property (nonatomic, copy) NSString *upstreamAppTag;
@property (nonatomic, copy) NSString *upstreamAdMark;

@end
