//
//  NyxAdBrief.h
//  K7M4QX2ZNP-iOS
//
//

#import <Foundation/Foundation.h>
@interface NyxAdBrief : NSObject

// 可选：接入方侧的用户标识。
@property (nonatomic,copy) NSString *visitorTag;

// 必传：广告资源位标识。
@property (nonatomic,copy) NSString *adUnitKey;

// 可选：服务端校验回传时附带的透传字段。
@property (nonatomic,strong) NSDictionary<NSString *, NSString *> *extensionInfo;

+ (instancetype)makeBrief;



@end
