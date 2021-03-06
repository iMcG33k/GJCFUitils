//
//  UIView+GJCFViewAdaptor.m
//  GJCommonFoundation
//
//  Created by ZYVincent on 14-10-24.
//  Copyright (c) 2014年 ZYProSoft. All rights reserved.
//

#import "UIView+SWViewFrameUitil.h"

@implementation UIView (SWViewFrameUitil)

/////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)sw_left {
    return self.frame.origin.x;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setSw_left:(CGFloat)sw_left {
    CGRect frame = self.frame;
    frame.origin.x = sw_left;
    self.frame = frame;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)sw_top {
    return self.frame.origin.y;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setSw_top:(CGFloat)y {
    CGRect frame = self.frame;
    frame.origin.y = y;
    self.frame = frame;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)sw_right {
    return self.frame.origin.x + self.frame.size.width;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setSw_right:(CGFloat)right {
    CGRect frame = self.frame;
    frame.origin.x = right - frame.size.width;
    self.frame = frame;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)sw_bottom {
    return self.frame.origin.y + self.frame.size.height;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setSw_bottom:(CGFloat)bottom {
    CGRect frame = self.frame;
    frame.origin.y = bottom - frame.size.height;
    self.frame = frame;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)centerX {
    return self.center.x;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setCenterX:(CGFloat)centerX {
    self.center = CGPointMake(centerX, self.center.y);
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)centerY {
    return self.center.y;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setCenterY:(CGFloat)centerY {
    self.center = CGPointMake(self.center.x, centerY);
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)sw_width {
    return self.frame.size.width;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setSw_width:(CGFloat)width {
    CGRect frame = self.frame;
    frame.size.width = width;
    self.frame = frame;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)sw_height {
    return self.frame.size.height;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setSw_height:(CGFloat)height {
    CGRect frame = self.frame;
    frame.size.height = height;
    self.frame = frame;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGPoint)sw_origin {
    return self.frame.origin;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setSw_origin:(CGPoint)origin {
    CGRect frame = self.frame;
    frame.origin = origin;
    self.frame = frame;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGSize)sw_size {
    return self.frame.size;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)sw_centerX {
    return self.center.x;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setSw_centerX:(CGFloat)centerX {
    self.center = CGPointMake(centerX, self.center.y);
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)sw_centerY {
    return self.center.y;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setSw_centerY:(CGFloat)centerY {
    self.center = CGPointMake(self.center.x, centerY);
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setSw_size:(CGSize)size {
    CGRect frame = self.frame;
    frame.size = size;
    self.frame = frame;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGPoint)sw_topRight
{
    return CGPointMake(self.frame.origin.x+self.frame.size.width,self.frame.origin.y);
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setSw_topRight:(CGPoint)sw_topRight
{
    CGRect frame = self.frame;
    
    CGFloat xdetal = sw_topRight.x - frame.origin.x - frame.size.width;
    frame.origin.x = frame.origin.x + xdetal;
    
    frame.origin.y = sw_topRight.y;
    
    self.frame = frame;
    
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGPoint)sw_bottomLeft
{
    return CGPointMake(self.frame.origin.x,self.frame.origin.y+self.frame.size.height);
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setSw_bottomLeft:(CGPoint)sw_bottomLeft
{
    CGRect frame = self.frame;
    
    CGFloat ydetal = sw_bottomLeft.y - frame.origin.y - frame.size.height;
    frame.origin.y = frame.origin.y + ydetal;
    
    frame.origin.x = sw_bottomLeft.x;
    
    self.frame = frame;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGPoint)sw_bottomRight
{
    return CGPointMake(self.frame.origin.x+self.frame.size.width,self.frame.origin.y+self.frame.size.height);
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setSw_bottomRight:(CGPoint)sw_bottomRight
{
    CGRect frame = self.frame;
    
    CGFloat xdetal = sw_bottomRight.x - frame.origin.x - frame.size.width;
    frame.origin.x = frame.origin.x + xdetal;
    
    CGFloat ydetal = sw_bottomRight.y - frame.origin.y - frame.size.height;
    frame.origin.y = frame.origin.y + ydetal;
    
    self.frame = frame;
}

- (CGFloat)sw_rightToSuper
{
    return self.superview.bounds.size.width - self.frame.size.width - self.frame.origin.x;
}

- (void)setSw_rightToSuper:(CGFloat)rightToSuper
{
    CGRect frame = self.frame;
    
    frame.origin.x =  self.superview.bounds.size.width - self.frame.size.width  - rightToSuper,
    self.frame = frame;
}

- (CGFloat)sw_bottomToSuper
{
    return self.superview.bounds.size.height - self.frame.size.height - self.frame.origin.y;
}

- (void)setSw_bottomToSuper:(CGFloat)bottomToSuper
{
    CGRect frame = self.frame;
    
    frame.origin.y =  self.superview.bounds.size.height - self.frame.size.height  - bottomToSuper,
    self.frame = frame;
}


@end
