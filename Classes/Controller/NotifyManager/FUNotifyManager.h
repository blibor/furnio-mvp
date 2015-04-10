//
//  FUNotifyManager.h
//  furn
//
//  Created by Markus Bösch on 09/04/15.
//
//

#import <Foundation/Foundation.h>

@class UIColor;

@interface FUNotifyManager : NSObject

+ (void)setup;

+ (instancetype)sharedManager;

- (void)showMessageWithText:(NSString *)text;
- (void)showMessageWithText:(NSString *)text backgroundColor:(UIColor *)backgroundColor;
- (void)showMessageWithText:(NSString *)text hideAfterTimeInterval:(NSTimeInterval)timeInterval;

- (void)hideMessage;

@end
