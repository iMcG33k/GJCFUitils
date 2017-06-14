//
//  GJCFQuickCacheMacrocDefine.h
//  GJCommonFoundation
//
//  Created by ZYVincent on 14-10-16.
//  Copyright (c) 2014年 ZYProSoft. All rights reserved.
//

/**
 *  文件描述
 *
 *  这个工具类宏定义封装了对
 *  NSUserDefault,NSCache,NSFileManager
 *  NSKeyedArchieve,NSDocumentDirectory,NSCacheDirectory的便捷操作
 */

#import "SWQuickCacheUitil.h"

/* 写宏定义的时候，前面变量参数的名字，多参数的时候不能方法名和后面调用方法的参数名字一样 */

/**
 *  检查一个valueObj,keyObj对象是否有一个是空的
 */
#define SWCheckKeyValueHasNull(keyObj,valueObj) [SWQuickCacheUitil checkValue:valueObj key:keyObj]

/**
 *  检查一个对象是否为空
 */
#define SWCheckObjectNull(object) [SWQuickCacheUitil isNullObject:object]

/**
 *  NSUserDefault 保存键值对 keyObj,valueObj
 */
#define SWUDFCache(keyObj,valueObj) [SWQuickCacheUitil userDefaultCache:valueObj key:keyObj]

/**
 *  NSUserDefault 删除键keyObj对应的值
 */
#define SWUDFRemove(keyObj) [SWQuickCacheUitil userDefaultRemove:keyObj]

/**
 *  NSUserDefault 获取键keyObj对应的值
 */
#define SWUDFGetValue(keyObj) [SWQuickCacheUitil userDefaultGetValue:keyObj]

/**
 *  NSUserDefault 判断键keyObject对应的值是否为空
 */
#define SWUDFEmptyValue(keyObj) [SWQuickCacheUitil userDefaultEmptyValue:keyObj]

/**
 *  NSCache 存储键值对 keyObj,valueObj
 */
#define SWNSCacheSet(keyObj,valueObj) [SWQuickCacheUitil systemMemoryCacheSet:valueObj key:keyObj]

/**
 *  NSCache 删除键keyObj对应的值
 */
#define SWNSCacheRemove(keyObj) [SWQuickCacheUitil systemMemoryCacheRemove:keyObj]

/**
 *  NSCache 获取键keyObj对应的值
 */
#define SWNSCacheGetValue(keyObj) [SWQuickCacheUitil systemMemoryCacheGetValue:keyObj]

/**
 *  NSCache 判断键keyObject对应的值是否为空
 */
#define SWNSCacheEmptyValue(keyObj) [SWQuickCacheUitil systemMemoryCacheEmptyValue:keyObj]

/**
 *  获取系统默认文件管理
 */
#define SWFileManager [SWQuickCacheUitil fileManager]

/**
 *  指定路径pathObj是否存在文件
 */
#define SWFileIsExist(pathObj) [SWQuickCacheUitil fileExist:pathObj]

/**
 *  指定路径pathObj是否存在目录
 */
#define SWFileDirectoryIsExist(pathObj) [SWQuickCacheUitil directoryExist:pathObj]

/**
 *  读取某个路径的二进制数据，返回 NSData
 */
#define SWFileRead(pathObj) [SWQuickCacheUitil readFromFile:pathObj]

/**
 *  将二进制数据写入文件 dataObj:NSData pathObj:NSString
 */
#define SWFileWrite(dataObj,pathObj) [SWQuickCacheUitil writeFileData:dataObj toPath:pathObj]

/**
 *  在指定路径创建目录，返回BOOL结果
 */
#define SWFileDirectoryCreate(pathObj) [SWQuickCacheUitil createDirectory:pathObj]

/**
 *  删除指定路径文件
 */
#define SWFileDeleteFile(path) [SWQuickCacheUitil deleteFileAtPath:path]

/**
 *  删除指定目录
 */
#define SWFileDeleteDirectory(path) [SWQuickCacheUitil deleteDirectoryAtPath:path]

/**
 *  从fromFilePath复制文件到toFilePath,shouldRemove标示是否删除复制源文件
 */
#define SWFileCopyFileIsRemove(fromFilePath,toFilePath,shouldRemove) [SWQuickCacheUitil copyFileFromPath:fromFilePath toPath:toFilePath isRemoveOld:shouldRemove]

/**
 *  将某个对象归档到指定路径
 */
#define SWArchieveObject(object,filePath) [SWQuickCacheUitil archieveObject:object toFilePath:filePath]

/**
 *  从指定路径读取被归档过的对象
 */
#define SWUnArchieveObject(fromFilePath) [SWQuickCacheUitil unarchieveFromPath:fromFilePath]

/**
 *  获取NSDocumentDirectory目录
 */
#define SWAppDocumentDirectory [SWQuickCacheUitil documentDirectory]

/**
 *  获取NSCacheDirectory目录
 */
#define SWAppCacheDirectory [SWQuickCacheUitil cacheDirectory]

/**
 *  返回文件名为fileName在NSDocumentDirectory中的路径
 */
#define SWAppDoucmentPath(fileName) [SWQuickCacheUitil documentDirectoryPath:fileName]

/**
 *  返回文件名为fileName在NSCacheDirectory中的路径
 */
#define SWAppCachePath(fileName) [SWQuickCacheUitil cacheDirectoryPath:fileName]

/**
 *  将object对象用fileName名字保存到NSDocumentDirectory目录下
 */
#define SWAppDocumentSave(object,fileName) [SWQuickCacheUitil documentDirectorySave:object withFileName:fileName]

/**
 *  将object对象用fileName名字保存到NSCacheDirectory目录下
 */
#define SWAppCacheSave(object,fileName) [SWQuickCacheUitil cacheDirectorySave:object withFileName:fileName]

/**
 *  删除NSDocumentDirectory目录下名为fileName的文件
 */
#define SWAppDocumentDelete(fileName)  [SWQuickCacheUitil documentDirectoryDelete:fileName]

/**
 *  删除NSCacheDirectory目录下名为fileName的文件
 */
#define SWAppCacheDelete(fileName) [SWQuickCacheUitil cacheDirectoryDelete:fileName]

