//
//  ODMasterViewController.h
//  RepositoryCreationTest
//
//  Created by SpringmanOD on 2014/02/13.
//  Copyright (c) 2014年 springmanod. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface ODMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
