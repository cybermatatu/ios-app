//
//  WALNavigationController.h
//  Wallabag
//
//  Created by Kevin Meyer on 01.06.14.
//  Copyright (c) 2014 Wallabag. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MFMailComposeViewController.h>
#import "WALThemeOrganizerDelegate.h"
#import "WALCrashDataProtocol.h"

@class WALTheme;

@interface WALNavigationController : UINavigationController <WALThemeOrganizerDelegate, WALCrashDataProtocol, MFMailComposeViewControllerDelegate, UIAlertViewDelegate>

@end
