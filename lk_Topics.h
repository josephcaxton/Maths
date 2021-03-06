//
//  lk_Topics.h
//  Evaluator
//
//  Created by Joseph caxton-Idowu on 29/09/2010.
//  Copyright 2010 caxtonidowu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "lk_TopicsCell.h"

@class Topics; 

@interface lk_Topics : UITableViewController <NSFetchedResultsControllerDelegate,UITextFieldDelegate, UIActionSheetDelegate>{

	
@private
	NSFetchedResultsController *fetchedResultsController;
	NSManagedObjectContext *managedObjectContext;
	
	UIView *tableHeaderView;
	UITextField *DescriptionTextField;
	
}

@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, retain) IBOutlet UIView *tableHeaderView;
@property (nonatomic, retain) IBOutlet UITextField *DescriptionTextField;

- (void)configureCell:(lk_TopicsCell *)mycell atIndexPath:(NSIndexPath *)indexPath;
- (NSManagedObjectContext *)ManagedObjectContext;
- (void)save;


@end
