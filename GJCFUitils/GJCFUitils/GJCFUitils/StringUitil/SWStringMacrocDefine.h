//
//  SWStringMacrocDefine.h
//  GJCommonFoundation
//
//  Created by ZYVincent on 14-10-16.
//  Copyright (c) 2014年 ZYProSoft. All rights reserved.
//

/**
 *  文件描述
 * 
 *  这个工具宏封装了大部分字符串常用的便捷方法
 */

#import "SWStringUitil.h"

/**
 *  字符串是否为空
 */
#define SWStringIsNull(string) [SWStringUitil stringIsNull:string]

/**
 *  字符串是否全为空格
 */
#define SWStringIsAllWhiteSpace(string) [SWStringUitil stringIsAllWhiteSpace:string]

/**
 *  字符串转NSInteger
 */
#define SWStringToInt(string) [SWStringUitil stringToInt:string]

/**
 *  字符串转CGFloat
 */
#define SWStringToFloat(string) [SWStringUitil stringToFloat:string]

/**
 *  字符串转double
 */
#define SWStringToDouble(string) [SWStringUitil stringToDouble:string]

/**
 *  字符串转Bool
 */
#define SWStringToBool(string) [SWStringUitil stringToBool:string]

/**
 *  int转字符串
 */
#define SWStringFromInt(int) [SWStringUitil intToString:int]

/**
 *  float转字符串
 */
#define SWStringFromFloat(float) [SWStringUitil floatToString:float]

/**
 *  double转字符串
 */
#define SWStringFromDouble(double) [SWStringUitil doubleToString:double]

/**
 *  bool转字符串
 */
#define SWStringFromBool(bool) [SWStringUitil boolToString:bool]

/**
 *  字符串是否合法邮箱
 */
#define SWStringIsEmail(string) [SWStringUitil stringIsValidateEmailAddress:string]

/**
 *  字符串是否合法手机号码
 */
#define SWStringIsMobilePhone(string) [SWStringUitil stringISValidateMobilePhone:string]

/**
 *  字符串是否合法url
 */
#define SWStringIsUrl(string) [SWStringUitil stringIsValidateUrl:string]

/**
 *  字符串是否合法座机
 */
#define SWStringIsPhone(string) [SWStringUitil stringIsValidatePhone:string]

/**
 *  字符串是否合法邮政编码
 */
#define SWStringIsMailCode(string) [SWStringUitil stringIsValidateMailCode:string]

/**
 *  字符串是否合法身份证号
 */
#define SWStringIsPersonCardNumber(string) [SWStringUitil stringISValidatePersonCardNumber:string]

/**
 *  字符串是否合法车牌号
 */
#define SWStringIsCarNumber(string) [SWStringUitil stringISValidateCarNumber:string]

/**
 *  字符串是否只有中文字符
 */
#define SWStringChineseOnly(string) [SWStringUitil stringIsAllChineseWord:string]

/**
 *  字符串是否只有英文字符
 */
#define SWStringCharNumOnly(string) [SWStringUitil stringJustHasNumberAndCharacter:string]

/**
 *  字符串是否只包含字符，中文，数字
 */
#define SWStringCharNumChineseOnly(string) [SWStringUitil stringChineseNumberCharacterOnly:string]

/**
 *  字符串是否纯数字
 */
#define SWStringNumOnly(string) [SWStringUitil stringJustHasNumber:string]

/**
 *  从文件中读取出字符串
 */
#define SWStringFromFile(path) [SWStringUitil stringFromFile:path]

/**
 *  从归档路径读取出字符串
 */
#define SWStringUnArchieve(path) [SWStringUitil unarchieveFromPath:path]

/**
 *  获取一个当前时间戳字符串
 */
#define SWStringCurrentTimeStamp [SWStringUitil currentTimeStampString]

/**
 *  将字符串转为MD5字符串
 */
#define SWStringToMD5(string) [SWStringUitil MD5:string]

/**
 *  返回去除字符串首的空格的字符串
 */
#define SWStringClearLeadingWhiteSpace(string) [SWStringUitil stringByTrimingLeadingWhiteSpace:string]

/**
 *  返回去除字符串结尾的空格的字符串
 */
#define SWStringClearTailingWhiteSpace(string) [SWStringUitil stringByTrimingTailingWhiteSpace:string]

/**
 *  返回去除字符串中所有的空格的字符串
 */
#define SWStringClearAllWhiteSpace(string) [SWStringUitil stringByTrimingWhiteSpace:string]

/**
 *  Url编码对象,通常是字符串,返回编码后的字符串
 */
#define SWStringEncodeString(string) [SWStringUitil urlEncode:string]

/**
 *  Url编码一个字典,键值对用@链接,返回编码后的字符串
 */
#define SWStringEncodeDict(aDict) [SWStringUitil encodeStringFromDict:aDict]

/**
 *  返回字符串范围
 */
#define SWStringRange(string) [SWStringUitil stringRange:string]



