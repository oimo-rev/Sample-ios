//
//  DetailViewController.h
//  Sample-ios
//
//  Created by 図師ともみ on 2015/12/10.
//  Copyright © 2015年 FBC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

