//
//  NotificationSignifier.h
//  Trvlogue
//
//  Created by Rohan Kapur on 3/4/13.
//  Copyright (c) 2013 Rohan Kapur. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NotificationSignifier : NSObject

+ (void)signifyNotification: (NSString *)notification forDuration: (int)duration;

@end