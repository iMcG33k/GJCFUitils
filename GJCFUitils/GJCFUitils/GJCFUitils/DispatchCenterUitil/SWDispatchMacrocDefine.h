//
//  GJCFDispatchMacrocDefine.h
//  GJCommonFoundation
//
//  Created by ZYVincent on 14-10-16.
//  Copyright (c) 2014年 ZYProSoft. All rights reserved.
//

/**
 *  文件描述
 *
 *  这个工具类宏可以方便在各种队列中执行block,提供便捷的使用方法
 *  是对GCD的一个简单封装
 */

#import "SWDispatchCenterUitil.h"

/**
 *  主线程异步执行block
 */
#define SWAsyncMainQueue(block) [SWDispatchCenterUitil asyncMainQueue:block]

/**
 *  主线程延迟second秒异步执行block
 */
#define SWAsyncMainQueueDelay(second,block) [SWDispatchCenterUitil asyncMainQueue:block delay:second]

/**
 *  全局后台线程异步执行block
 */
#define SWAsyncGlobalBackgroundQueue(block) [SWDispatchCenterUitil asyncGlobalBackgroundQueue:block]

/**
 *  全局后台线程延迟second秒异步执行block
 */
#define SWAsyncGlobalBackgroundQueueDelay(second,block) [SWDispatchCenterUitil asyncGlobalBackgroundQueue:block delay:second]

/**
 *  全局高优先级线程异步执行block
 */
#define SWAsyncGlobalHighQueue(block) [SWDispatchCenterUitil asyncGlobalHighQueue:block]

/**
 *  全局高优先级线程延迟second秒异步执行block
 */
#define SWAsyncGlobalHighQueueDelay(second,block) [SWDispatchCenterUitil asyncGlobalHighQueue:block delay:second]

/**
 *  全局低优先级线程异步执行block
 */
#define SWAsyncGlobalLowQueue(block) [SWDispatchCenterUitil asyncGlobalLowQueue:block]

/**
 *  全局低优先级线程延迟second秒异步执行block
 */
#define SWAsyncGlobalLowQueueDelay(second,block) [SWDispatchCenterUitil asyncGlobalLowQueue:block delay:second]

/**
 *  全局默认线程异步执行block
 */
#define SWAsyncGlobalDefaultQueue(block) [SWDispatchCenterUitil asyncGlobalDefaultQueue:block]

/**
 *  全局默认线程延迟second秒异步执行block
 */
#define SWAsyncGlobalDefaultQueueDelay(second,block) [SWDispatchCenterUitil asyncGlobalDefaultQueue:block delay:second]

/**
 *  在queue线程队列异步执行block
 */
#define SWAsync(queue,block)  [SWDispatchCenterUitil asyncQueue:queue action:block]

/**
 *  在queue线程序延迟second秒异步执行block
 */
#define SWAsyncDelay(queue,second,block)  [SWDispatchCenterUitil asyncQueue:queue action:block delay:second]

/**
 *  只执行一次block,创建单例使用
 */
#define SWDispatchOnce(onceToken,block) [SWDispatchCenterUitil dispatchOnce:onceToken action:block]
