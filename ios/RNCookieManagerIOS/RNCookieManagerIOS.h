#import <Foundation/Foundation.h>
#import "RCTBridgeModule.h"

#import <WebKit/WebKit.h>

@interface RNCookieManagerIOS : NSObject <RCTBridgeModule>

@property (nonatomic, strong) NSDateFormatter *formatter;

@end
