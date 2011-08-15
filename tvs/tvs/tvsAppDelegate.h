//
//  tvsAppDelegate.h
//  tvs
//
//  Created by TENGKU KAMAL FAIZAL on 8/15/11.
//  Copyright 2011 ILAUNCH SDN BHD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface tvsAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
