//
//  TaskListViewController.h
//  toDo
//
//  Created by Andrey Yushkov on 14.11.13.
//  Copyright (c) 2013 Andrey Yushkov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TaskListViewController : UITableViewController <UITableViewDataSource,UITableViewDelegate>

@property (nonatomic,strong) NSMutableArray *tasks;

@end
