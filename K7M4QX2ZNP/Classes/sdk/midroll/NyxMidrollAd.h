//
//  NyxMidrollAd.h
//  K7M4QX2ZNP-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class NyxAdBrief;
@protocol NyxMidrollAdDelegate <NSObject>
@optional
-(void) nyxMidrollLoadSucceeded:(NSString *) placementId;
-(void) nyxMidrollLoadFailed:(NSString *) placementId error:(NSError *)error;
-(void) nyxMidrollStarted;
-(void) nyxMidrollFinished;
-(void) nyxMidrollTapped;
-(void) nyxMidrollDismissed;
-(void) nyxMidrollBypassed;

@end

@interface NyxMidrollAd : NSObject
/// 事件回调接收方
@property (nonatomic, weak) id<NyxMidrollAdDelegate> callbackSink;

- (instancetype)initWithBrief:(NyxAdBrief *)brief;
- (BOOL)readyForDisplay;
- (void)beginMidrollLoad;
- (void)presentFromController:(UIViewController *)hostController;
@end
