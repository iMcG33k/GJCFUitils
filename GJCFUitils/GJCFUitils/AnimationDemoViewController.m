//
//  AnimationDemoViewController.m
//  SWUitils
//
//  Created by ZYVincent on 15/7/6.
//  Copyright (c) 2015年 ZYProSoft. All rights reserved.
//

#import "AnimationDemoViewController.h"

@interface AnimationDemoViewController ()

@property (nonatomic,strong)UIView *demoView;

@end

@implementation AnimationDemoViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.demoView = [[UIView alloc]init];
    self.demoView.sw_width = 100.f;
    self.demoView.sw_height = 100.f;
    self.demoView.sw_centerX = self.view.sw_centerX;
    self.demoView.sw_centerY = self.view.sw_centerY;
    
    self.demoView.backgroundColor = SWQuickHexColor(@"f3f4f5");
    
    [self.view addSubview:self.demoView];
 
    [self test1];
    
}

- (void)test1
{
    SWAnimationBottomFlipView(self.demoView, 0.3, nil, nil);
    
    [self performSelector:@selector(test2) withObject:nil afterDelay:0.3];
}

- (void)test2
{
    SWAnimationMoveViewSize(self.demoView, CGSizeMake(230, 230), 0.6);
    
    [self performSelector:@selector(test3) withObject:nil afterDelay:0.6];

}

- (void)test3
{
    SWAnimationMoveViewSize(self.demoView, CGSizeMake(50, 50), 0.6);

    SWAnimationMoveViewToY(self.demoView, self.view.sw_bottom,2.0);
    
    SWAnimationMoveViewToY(self.demoView, self.view.sw_centerY,2.0);

    [self performSelector:@selector(test4) withObject:nil afterDelay:2.0];

}

- (void)test4
{
    SWAnimationViewRotateZCycle(self.demoView, 270, 0.3);
}

@end
