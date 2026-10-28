//
//  NyxStripAd.h
//  K7M4QX2ZNP-iOS
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class NyxAdBrief;
@class NyxStripAd;

NS_ASSUME_NONNULL_BEGIN

@protocol NyxStripAdDelegate <NSObject>

@optional

- (void)nyxStripRefreshed:(NyxStripAd *)bannerAdView;

- (void)nyxStripRefreshFailed:(NSError *)error;

- (void)nyxStripLoadSucceeded:(NyxStripAd *)bannerAdView;

- (void)nyxStripLoadFailed:(NSError *)error;

- (void)nyxStripAppeared;

- (void)nyxStripTapped;

- (void)nyxStripLeftHostApp;

- (void)nyxStripWillCoverScreen;
- (void)nyxStripCoverClosed;
- (void)nyxStripDisposed;
@end

@interface NyxStripAd : NSObject

@property (nonatomic, weak) id<NyxStripAdDelegate> callbackSink;

@property (nonatomic, weak) UIViewController *ownerController;

@property (nonatomic) BOOL shouldAnimate;

@property (nonatomic, assign) CGSize creativeBounds;
@property(nullable, nonatomic,copy) UIColor *canvasTint;

- (instancetype)initWithBrief:(NyxAdBrief *)brief;

- (instancetype)initWithBrief:(NyxAdBrief *)brief
                     desiredSize:(CGSize)desiredSize;

- (void)beginStripLoad;
- (BOOL)readyForDisplay;
- (UIView *)surfaceView;
@end
NS_ASSUME_NONNULL_END

