//
//  StringDemoViewController.m
//  GJCFUitils
//
//  Created by ZYVincent on 15/7/6.
//  Copyright (c) 2015年 ZYProSoft. All rights reserved.
//

#import "StringDemoViewController.h"
#import "SWUitils.h"

@interface StringDemoViewController ()

@end

@implementation StringDemoViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    NSString *souceString = @"abcsdex好xxxxxxx aaaaaaa";
    
    [self addDebugMessage:souceString];
    
    [self addDebugMessage:[NSString stringWithFormat:@"是否全部中文字符 %d",SWStringChineseOnly(souceString)]];
    
    NSString *numString = @"23456";
    
    [self addDebugMessage:numString];
    
    NSString *numStringCheck = [NSString stringWithFormat:@"%@ 是否全是数字: %d",numString,SWStringNumOnly(numString)];
    
    [self addDebugMessage:numStringCheck];
}


@end
