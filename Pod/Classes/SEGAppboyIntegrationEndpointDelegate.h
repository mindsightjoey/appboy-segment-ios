#import "Foundation/Foundation.h"
#if defined(__has_include) && __has_include(<AppboyTVOSKit/AppboyKit.h>)
#import <AppboyTVOSKit/ABKAppboyEndpointDelegate.h>
#else
#import "AppboyTVOSKit/ABKAppboyEndpointDelegate.h"
#endif

@interface SEGAppboyIntegrationEndpointDelegate : NSObject <ABKAppboyEndpointDelegate>

@property NSString *customEndpoint;

- (instancetype)initWithCustomEndpoint:(NSString *)customEndpoint;

@end
