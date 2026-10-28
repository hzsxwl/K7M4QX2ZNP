//
//  NyxHttpBridge.h
//  K7M4QX2ZNP-iOS
//
//
#import <Foundation/Foundation.h>

typedef void(^NyxHttpReplyBlock)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error);

@interface NyxHttpBridge : NSObject

+ (void)dispatchPostTo:(NSString *)urlString
                  payload:(NSDictionary *)payload
                reply:(NyxHttpReplyBlock)reply;

+ (void)loadRemoteConfig:(NSString *) appId;

@end
