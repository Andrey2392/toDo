//
//  EditTaskViewController.h
//  toDo
//
//  Created by Andrey Yushkov on 15.11.13.
//  Copyright (c) 2013 Andrey Yushkov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"


@interface EditTaskViewController : UITableViewController

@property (nonatomic,strong) IBOutlet UITextField *nameField;
@property (nonatomic,strong) IBOutlet UISwitch  *doneSwitch;

@property (nonatomic,strong) Task *task;

-(IBAction)taskDataChange:(id)sender;

@end
