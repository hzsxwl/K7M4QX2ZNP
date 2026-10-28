//
//  NyxFeedRenderer.h
//  K7M4QX2ZNP-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class NyxFeedRenderer;
@class NyxFeedItem;
@protocol NyxFeedRendererDelegate <NSObject>
@optional
- (void)nyxFeedRendererDrew:(NyxFeedRenderer *)renderer;
- (void)nyxFeedRendererDrawFailed:(NSError *)error;
- (void)nyxFeedRendererWillAppear;
- (void)nyxFeedRendererTapped;
- (void)nyxFeedRendererRejected:(NSString *) reason;

@end
@interface NyxFeedRenderer : NSObject
+ (instancetype)makeRenderer;

@property(nonatomic) CGRect layoutBounds;
@property (nonatomic, weak) id<NyxFeedRendererDelegate> callbackSink;
@property (nonatomic, weak) UIViewController *ownerController;
- (void)bindFeedItem:(NyxFeedItem *)upstreamItem;
- (UIView *)surfaceView;
@end
