//
//  NyxBonusAd.h
//  K7M4QX2ZNP-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class NyxAdBrief;
@protocol NyxBonusAdDelegate <NSObject>

@required

-(void) nyxBonusRewardIssued:(NSString *_Nonnull) transactionId;

@optional
-(void) nyxBonusLoadSucceeded:(NSString *) placementId;
-(void) nyxBonusLoadFailed:(NSString *) placementId error:(NSError *)error;
-(void) nyxBonusStarted;
-(void) nyxBonusFinished;
-(void) nyxBonusTapped;
-(void) nyxBonusDismissed;
-(void) nyxBonusBypassed;
-(void) nyxBonusPlayFailed:(NSString *) placementId error:(NSError *)error;

@end

@interface NyxBonusAd : NSObject
/// 事件回调接收方
@property (nonatomic, weak) id<NyxBonusAdDelegate> callbackSink;

- (instancetype)initWithBrief:(NyxAdBrief *)brief;
- (BOOL)readyForDisplay;
- (void)beginBonusLoad;
- (void)presentFromController:(UIViewController *)hostController options:(NSDictionary<NSString *, NSString *> * _Nullable)options;
@end

