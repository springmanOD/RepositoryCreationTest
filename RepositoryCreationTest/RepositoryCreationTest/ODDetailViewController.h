//
//  ODDetailViewController.h
//  RepositoryCreationTest
//
//  Created by SpringmanOD on 2014/02/13.
//  Copyright (c) 2014年 springmanod. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ODDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
