//
//  helloWorldAppDelegate.h
//  helloWorld
//
//  Created by Brendan Barr on 4/3/11.
//  Copyright 2011 SongLine Design. All rights reserved.
//

#import <UIKit/UIKit.h>

@class helloWorldViewController;

@interface helloWorldAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    helloWorldViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet helloWorldViewController *viewController;

@end

