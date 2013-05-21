//
//  mgbAppDelegate.h
//  CoreMotionStore
//
//  Created by Michael Edgcumbe on 5/20/13.
//  Copyright (c) 2013 com.mcgarrybowen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreMotion/CoreMotion.h>

@class mgbViewController;

@interface mgbAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic, readonly ) CMMotionManager *sharedManager;

@property (strong, nonatomic) mgbViewController *viewController;

@end
