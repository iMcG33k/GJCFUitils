//
//  GJCFSystemMacrocDefine.h
//  GJCommonFoundation
//
//  Created by ZYVincent on 14-10-16.
//  Copyright (c) 2014年 ZYProSoft. All rights reserved.
//

/**
 *  文件描述
 *
 *  这个文件封装了大部分系统相关的功能宏定义
 */

#import "SWSystemUitil.h"


/**
 *  去除performSelector警告
 *
 *  @param code 需要屏蔽警告的代码
 *
 *  @return
 */
#define SWSystemRemovePerformSelectorLeakWarning(code)                    \
_Pragma("clang diagnostic push")                                        \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"")     \
code;                                                                   \
_Pragma("clang diagnostic pop")                                         \

/**
 *  当前App的版本号
 */
#define SWSystemAppVersion [SWSystemUitil appVersion]

/**
 *  当前App的版本号 float型
 */
#define SWSystemAppFloatVersion [SWSystemUitil appFloatVersion]

/**
 *  当前App的版本号 字符串型
 */
#define SWSystemAppStringVersion [SWSystemUitil appStringVersion]

/**
 *  当前App的bundleIdentifier
 */
#define SWSystemAppBundleIdentifier [SWSystemUitil appBundleIdentifier]

/**
 *  屏幕绝对画布
 */
#define SWSystemScreenBounds [SWSystemUitil screenBounds]

/**
 *  获取系统版本号
 */
#define SWSystemVersion [SWSystemUitil currentSystemVersion]

/**
 *  当前屏幕缩放倍数
 */
#define SWScreenScale [SWSystemUitil currentScreenScale]

/**
 *  系统是否超过5.0
 */
#define SWSystemIsOver5 [SWSystemUitil isSystemVersionOver:5.0]

/**
 *  系统是否超过6.0
 */
#define SWSystemIsOver6 [SWSystemUitil isSystemVersionOver:6.0]

/**
 *  系统是否超过7.0
 */
#define SWSystemIsOver7 [SWSystemUitil isSystemVersionOver:7.0]

/**
 *  系统是否超过8.0
 */
#define SWSystemIsOver8 [SWSystemUitil isSystemVersionOver:8.0]

/**
 *  获取屏幕大小
 */
#define SWSystemScreenSize [SWSystemUitil deviceScreenSize]

/**
 *  获取屏幕宽度
 */
#define SWSystemScreenWidth [SWSystemUitil deviceScreenSize].width

/**
 *  获取屏幕高度
 */
#define SWSystemScreenHeight [SWSystemUitil deviceScreenSize].height

/**
 *  是否iPhone4
 */
#define SWSystemiPhone4 [SWSystemUitil iPhone4Device]

/**
 *  是否iPhone5
 */
#define SWSystemiPhone5 [SWSystemUitil iPhone5Device]

/**
 *  是否iPhone6
 */
#define SWSystemiPhone6 [SWSystemUitil iPhone6Device]

/**
 *  是否iPhone6 plus
 */
#define SWSystemiPhone6Plus [SWSystemUitil iPhone6PlusDevice]

/**
 *  是否iPad
 */
#define SWSystemiPad [SWSystemUitil iPadDevice]

/**
 *  系统UINavigationBar高度
 */
#define SWSystemNavigationBarHeight [SWSystemUitil naivationBarHeight]

/**
 *  Y轴增量
 */
#define SWSystemOriginYDelta 20.f

/**
 *  AppDelegate
 */
#define SWApplicationDelegate [UIApplication shareApplication].delegate

/**
 *  创建对象弱引用
 */
#define SWWeakObject(anObject)  __weak __typeof(anObject)

/**
 *  创建对象强引用
 */
#define SWStrongObject(anObject) __strong __typeof(anObject)

/**
 *  创建self弱引用
 */
#define SWWeakSelf SWWeakObject(self)

/**
 *  创建self强引用
 */
#define SWStrongSelf SWStrongObject(SWWeakSelf)

/**
 *  系统通知中心
 */
#define SWNotificationCenter [SWSystemUitil defaultCenter]

/**
 *  系统通知中心发noti名字的通知
 */
#define SWNotificationPost(noti) [SWSystemUitil postNoti:noti]

/**
 *  系统通知中心发noti名字的通知，携带参数对象object
 */
#define SWNotificationPostObj(noti,object) [SWSystemUitil postNoti:noti withObject:object]

/**
 *  系统通知中心发noti名字的通知，携带参数对象object ,携带用户自定义信息userInfo
 */
#define SWNotificationPostObjUserInfo(noti,object,userInfo) [SWSystemUitil postNoti:noti withObject:object withUserInfo:userInfo]

/**
 *  获取mainBundle
 */
#define SWMainBundle [NSBundle mainBundle]

/**
 *  获取mainBundle内名字为fileName的文件的路径
 */
#define SWMainBundlePath(fileName) [SWSystemUitil mainBundlePath:fileName]

/**
 *  获取路径为bundlePath的指定bundle中文件名为fileName的文件路径
 */
#define SWBundlePath(bundlePath,fileName) [SWSystemUitil bundle:bundlePath file:fileName]


/**
 *  运行时给一个对象添加一个成员，添加的associateKey必须是一个静态常量字符串 static NSString * const associateKey = @"";
 */
#define SWAssociateOriginWithObject(originObj,associateObj,associateKey) [SWSystemUitil originObject:originObj associateObject:associateObj byKey:associateKey]

/**
 *  通过key获取运行时加入的成员
 */
#define SWGetAssociateObject(originObj,associateKey) [SWSystemUitil associateObjectFromOrigin:originObj byKey:associateKey]

/**
 *  移除辅助成员
 */
#define SWAssociateRemove(originObj) [SWSystemUitil associateRemoveFromOrigin:originObj]

/**
 *  照相机是否可用
 */
#define SWCameraIsAvailable [SWSystemUitil cameraAvailable]

/**
 *  前置摄像头是否可用
 */
#define SWFrontCameraAvailable [SWSystemUitil frontCameraAvailable]

/**
 *  照相机闪光灯是否可用
 */
#define SWCameraFlashAvailable [SWSystemUitil cameraFlashAvailable]

/**
 *  是否支持发短信
 */
#define SWSystemCanSendSMS [SWSystemUitil canSendSMS]

/**
 *  是否支持打电话
 */
#define SWSystemCanMakePhoneCall [SWSystemUitil canMakePhoneCall]

/**
 *  App是否有权限访问照片库
 */
#define SWAppCanAccessPhotoLibrary [SWSystemUitil isAppPhotoLibraryAccessAuthorized]

/**
 *  App是否有权限访问相机
 */
#define SWAppCanAccessCamera [SWSystemUitil isAppCameraAccessAuthorized]

/**
 *  获取屏幕Y轴起始点
 */
#define SWAppSelfViewFrameOrangeY [SWSystemUitil getSelfViewFrameOrangeY]

/**
 *  系统是否 >=7.0 <7.1
 */
#define SWSystemVersionIs7 [SWSystemUitil isSystemVersionIs7]
