//
//  NyxFeedLoader.h
//  K7M4QX2ZNP-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class NyxAdBrief;
@class NyxFeedItem;
@class NyxFeedLoader;

NS_ASSUME_NONNULL_BEGIN
@protocol NyxFeedLoaderDelegate <NSObject>

@optional
- (void)nyxFeedLoaderFinishedFetching:(NyxFeedLoader *)loader;
- (void)nyxFeedLoaderFetchFailed:(NSError *)error;

@end


@interface NyxFeedLoader : NSObject

@property (nonatomic, weak) id<NyxFeedLoaderDelegate> callbackSink;

@property (nonatomic, assign, readwrite) CGSize creativeBounds;

- (instancetype)initWithBrief:(NyxAdBrief *)brief;

- (void)fetchCreativesWithCount:(NSInteger)count;

- (NSArray<NyxFeedItem *> * _Nullable)collectAllFeedItems;

@end

NS_ASSUME_NONNULL_END
