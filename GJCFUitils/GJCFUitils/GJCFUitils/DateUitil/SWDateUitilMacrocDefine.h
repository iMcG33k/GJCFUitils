//
//  GJCFDateUitilMacrocDefine.h
//  GJCommonFoundation
//
//  Created by ZYVincent on 14-10-22.
//  Copyright (c) 2014年 ZYProSoft. All rights reserved.
//

/**
 *  日期相关工具宏
 */

#import "SWDateUitil.h"

/**
 *  获取当前日历
 */
#define SWDateCurrentCalendar [SWDateUitil sharedCalendar]

/**
 *  获取单例格式化器
 */
#define SWDateShareFormatter [SWDateUitil sharedDateFormatter]

/**
 *  相对现在日期得间隔天数
 */
#define SWDateDaysAgo(aDate) [SWDateUitil daysAgoFromNow:aDate]

/**
 *  不以午夜为基准计算天数之前
 */
#define SWDateDaysAgoAgainstMidNight(aDate) [SWDateUitil daysAgoAgainstMidnight:aDate]

/**
 *  获取一个时间与当前时间间隔详情字符串
 */
#define SWDateTimeAgoString(aDate) [SWDateUitil detailTimeAgoString:aDate]

/**
 *  获取一个时间戳与当前时间的间隔详情字符串
 */
#define SWDateTimeAgoStringByTimeInterval(timeInterval) [SWDateUitil detailTimeAgoStringByInterval:timeInterval]

/**
 *  天数间隔文本字符串
 */
#define SWDateStringDaysAgo(aDate) [SWDateUitil stringDaysAgo:aDate]

/**
 *  这个日期是星期几
 */
#define SWDateGetWeekDay(aDate) [SWDateUitil weekDay:aDate]

/**
 *  返回这个日期是星期几字符串
 */
#define  SWDateGetWeekDayString(aDate) [SWDateUitil weekDayString:aDate]

/**
 *  返回这个日期在全年中是第多少周字符串
 */
#define  SWDateGetWeekNumString(aDate) [SWDateUitil weekNumberString:aDate]

/**
 *  在全年中是第多少周
 */
#define SWDateGetWeekNum(aDate) [SWDateUitil weekNumber:aDate]

/**
 *  获取日期中得年份
 */
#define SWDateGetYear(aDate) [SWDateUitil year:aDate]

/**
 *  获取日期中得月份
 */
#define SWDateGetMonth(aDate) [SWDateUitil month:aDate]

/**
 *  获取日期中的日
 */
#define SWDateGetDay(aDate) [SWDateUitil day:aDate]

/**
 *  获取日期中得小时
 */
#define SWDateGetHour(aDate) [SWDateUitil hour:aDate]

/**
 *  获取日期中的分钟
 */
#define SWDateGetMinute(aDate) [SWDateUitil minute:aDate]

/**
 *  日期转字符串
 */
#define SWDateToString(aDate) [SWDateUitil stringFromDate:aDate]

/**
 *  字符串转日期
 */
#define SWDateFromString(aString) [SWDateUitil dateFromString:aString]

/**
 *  字符串转日期详细时间
 */
#define SWDateTimeFromString(aString) [SWDateUitil dateTimeFromString:aString]

/**
 *  将时间戳转成日期
 */
#define SWDateFromTimeInterval(timeInterval) [SWDateUitil dateFromTimeInterval:timeInterval]

/**
 *  按照某个格式将日期转成字符串
 */
#define SWDateToStringByFormat(aDate,format) [SWDateUitil stringFromDate:aDate withFormat:format]

/**
 *  按照某个格式将字符串转成日期
 */
#define SWDateFromStringByFormat(aString,format) [SWDateUitil dateFromString:aString withFormat:format]

/**
 *  这个日期所在周的起始日期
 */
#define SWDateBeginningOfWeek(aDate) [SWDateUitil beginningOfWeek:aDate]

/**
 *  这个日期的起始时间
 */
#define SWDateBeginningOfDay(aDate) [SWDateUitil beginningOfDay:aDate]

/**
 *  这个日期所在周的结束日期
 */
#define SWDateEndOfWeek(aDate) [SWDateUitil endOfWeek:aDate]

/**
 *  普通日期格式字符串
 */
#define SWDateFormatString [SWDateUitil dateFormatString]

/**
 *  普通时间格式字符串
 */
#define SWDateTimeFormatString [SWDateUitil timeFormatString]

/**
 *  时间戳格式字符串
 */
#define SWDateTimeStampFormatString [SWDateUitil timestampFormatString]

/**
 *  数据库存储格式字符串
 */
#define SWDateDataBaseFormatString [SWDateUitil dbFormatString]

/**
 *  生日转年龄
 */
#define SWDateBirthDayToAge(date) [SWDateUitil birthdayToAge:date]

/**
 *  生日转年龄
 */
#define SWDateBirthDayToAgeByTimeInterval(timeInterval) [SWDateUitil birthdayToAgeByTimeInterval:timeInterval]

/**
 *  日期转星座
 */
#define SWDateToConstellation(date) [SWDateUitil dateToConstellation:date]

/**
 *  时间戳转星座
 */
#define SWDateToConstellationByTimeInterval(timeInterval) [SWDateUitil dateToConstellationByTimeInterval:timeInterval]



