//
//  NyxSdkRuntime.h
//  K7M4QX2ZNP-iOS
//
//

#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, NyxConsentFlag) {
    NyxConsentUnknown = 0,
    NyxConsentGranted,
    NyxConsentRevoked,
};

@interface NyxSdkRuntime : NSObject
+(instancetype) sharedKernel;
-(void)prepareWithAccessKey:(NSString *)accessKey;
-(void)setVerboseOutput:(BOOL)enable;
-(void)applyConsentFlag:(NyxConsentFlag)status;
-(void) primeSlots:(NSString *)bonusSlot midrollSlot:(NSString *)midrollSlot fullscreenSlot:(NSString *)fullscreenSlot audienceTag:(NSString *)audienceTag;
@end

