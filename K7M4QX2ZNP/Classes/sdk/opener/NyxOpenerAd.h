#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class NyxAdBrief;
@protocol NyxOpenerAdDelegate <NSObject>
@optional
-(void) nyxOpenerAppeared;
-(void) nyxOpenerPresentFailed:(NSString *) placementId error:(NSError *)error;
-(void) nyxOpenerLoadSucceeded:(NSString *) placementId;
-(void) nyxOpenerLoadFailed:(NSString *) placementId error:(NSError *)error;
-(void) nyxOpenerTapped;
-(void) nyxOpenerDismissed;
-(void) nyxOpenerBypassed;

@end

@interface NyxOpenerAd : NSObject
/// 事件回调接收方
@property (nonatomic, weak) id<NyxOpenerAdDelegate> callbackSink;
@property (nonatomic, weak) UIViewController *hostController;

- (instancetype)initWithBrief:(NyxAdBrief *)brief
                              extra:(NSDictionary * _Nullable)extra;
- (instancetype)initWithBrief:(NyxAdBrief *)brief;
- (BOOL)readyForDisplay;
-(void)fetchAndDisplay;
- (void)prefetchCreative;
- (void)presentInWindow:(UIWindow *)window;
@end
