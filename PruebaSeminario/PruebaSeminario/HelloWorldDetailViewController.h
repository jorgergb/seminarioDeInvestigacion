//
//  HelloWorldDetailViewController.h
//  PruebaSeminario
//
//  Created by user3747 on 9/16/13.
//  Copyright (c) 2013 SI. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
