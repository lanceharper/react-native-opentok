#import <UIKit/UIKit.h>
#import "RNOpenTokSessionObserver.h"

@class RCTEventDispatcher;

@interface RNOpenTokSubscriberView : RNOpenTokSessionObserver

/**
 * Define props which tells the Subscriber if should emit an audio as well.
 */
@property (nonatomic, assign) BOOL mute;

/**
 * Define props which tells the Subscriber if should emit a video as well.
 */
@property (nonatomic, assign) BOOL video;

@end
