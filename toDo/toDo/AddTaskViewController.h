//
//  AddTaskViewController.h
//  toDo
//
//  Created by Andrey Yushkov on 14.11.13.
//  Copyright (c) 2013 Andrey Yushkov. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TaskListViewController;

@interface AddTaskViewController : UITableViewController <UITableViewDataSource,UITableViewDelegate>

-(IBAction)cancelButtonPressed:(id)sender;
-(IBAction)doneButtonPressed:(id)sender;

@property (nonatomic,strong) IBOutlet UITextField *nameField;
@property (nonatomic,strong) TaskListViewController *taskListViewController;


@end
