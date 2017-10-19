#import "Foundation/Foundation.h"

@protocol ABKAppboyEndpointDelegate <NSObject>
- (NSString *)getApiEndpoint:(NSString *)appboyApiEndpoint;
@end

@interface SEGAppboyIntegrationEndpointDelegate : NSObject <ABKAppboyEndpointDelegate>

@property NSString *customEndpoint;

- (instancetype)initWithCustomEndpoint:(NSString *)customEndpoint;

@end
