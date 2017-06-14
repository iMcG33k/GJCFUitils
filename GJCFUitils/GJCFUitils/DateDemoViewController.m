//
//  DateDemoViewController.m
//  GJCFUitils
//
//  Created by ZYVincent on 15/7/6.
//  Copyright (c) 2015年 ZYProSoft. All rights reserved.
//

#import "DateDemoViewController.h"
#import "SWUitils.h"

@interface DateDemoViewController ()

@end

@implementation DateDemoViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    NSDate *date = SWDateFromString(@"2014-12-13");
    
    NSString *timeAgo = SWDateTimeAgoString(date);
    
    [self addDebugMessage:timeAgo];
    
    NSString *weekString = SWDateGetWeekDayString(date);
    
    [self addDebugMessage:weekString];
}


@end
