//
//  Config.h
//  GemiusSDK
//
//  Copyright © 2018 Gemius. All rights reserved.
//

#import <UIKit/UIKit.h>

#define GEM_SDK_NAME    @"GemiusSDK"
#define GEM_SDK_VERSION @"2.1.0"

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSNotificationName const GEMUserAgentDidChangeNotification;

@interface GEMConfig : NSObject

@property (nonatomic) BOOL loggingEnabled;
@property (nonatomic) BOOL cookiesAllowed;
@property (nonatomic) BOOL IDFACollectionEnabled;
@property (nonatomic) BOOL useCmp;
@property (nonatomic) NSTimeInterval cmpTimeout;
@property (nonatomic, copy) NSSet<NSNumber *> *audiencePurposes;
@property (nonatomic, copy) NSSet<NSNumber *> *adOceanPurposes;

+ (GEMConfig *)sharedInstance;
+ (NSString *)getSdkVersion;

- (void)setAppInfo:(NSString *)name version:(NSString *)version;
- (NSString *)getUA4WebView;
- (void)restoreAudiencePurposes;
- (void)restoreAdOceanPurposes;

@end

NS_ASSUME_NONNULL_END
