//
//  ODAppDelegate.h
//  RepositoryCreationTest
//
//  Created by SpringmanOD on 2014/02/13.
//  Copyright (c) 2014年 springmanod. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ODAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
