//
//  mgbViewController.h
//  CoreMotionStore
//
//  Created by Michael Edgcumbe on 5/20/13.
//  Copyright (c) 2013 com.mcgarrybowen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#import <CoreMotion/CoreMotion.h>

@interface mgbViewController : GLKViewController

@property (strong, nonatomic) CMMotionManager *mManager;
@property (strong, nonatomic) NSNumber *roll;
@property (strong, nonatomic) NSNumber *pitch;
@property (strong, nonatomic) NSNumber *yaw;

@end
