//
//  Task.h
//  toDo
//
//  Created by Andrey Yushkov on 14.11.13.
//  Copyright (c) 2013 Andrey Yushkov. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Task : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, assign) BOOL done;

-(id)initWithName:(NSString*)name done:(BOOL)done;

@end
