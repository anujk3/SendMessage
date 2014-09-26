//
//  ViewController.h
//  SendMessage
//
//  Created by Anuj Katiyal on 25/09/14.
//  Copyright (c) 2014 Katiyals. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@interface ViewController : UIViewController <MFMailComposeViewControllerDelegate>

- (IBAction)showEmail:(id)sender;

@end

