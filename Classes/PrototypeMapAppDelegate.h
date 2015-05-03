//
//  PrototypeMapAppDelegate.h
//  PrototypeMap
//
//  Created by Jon Holmes on 6/13/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PrototypeMapViewController;

@interface PrototypeMapAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    PrototypeMapViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet PrototypeMapViewController *viewController;

@end

