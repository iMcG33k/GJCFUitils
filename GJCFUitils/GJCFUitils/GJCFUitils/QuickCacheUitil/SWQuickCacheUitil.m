//
//  GJCFQuickCacheUitil.m
//  GJCommonFoundation
//
//  Created by ZYVincent on 14-10-16.
//  Copyright (c) 2014年 ZYProSoft. All rights reserved.
//

#import "SWQuickCacheUitil.h"
#import "SWQuickCacheMacrocDefine.h"
#import "SWDispatchMacrocDefine.h"
#import "SWStringMacrocDefine.h"

@implementation SWQuickCacheUitil

+ (BOOL)isNullObject:(id)anObject
{
    if (!anObject || [anObject isKindOfClass:[NSNull class]]) {
        return YES;
    }else{
        return NO;
    }
}

+ (BOOL)checkValue:(id)value key:(id)key
{
    if(SWCheckObjectNull(value)||SWCheckObjectNull(key)){
        return YES;
    }else{
        return NO;
    }
}

+ (NSUserDefaults *)standDefault
{
    return [NSUserDefaults standardUserDefaults];
}

+ (void)userDefaultCache:(id<NSCoding>)value key:(id)key
{
    if (SWCheckKeyValueHasNull(key, value)) {
        return;
    }
    [[SWQuickCacheUitil standDefault]setObject:value forKey:key];
}

+ (void)userDefaultRemove:(id)key
{
    if (SWCheckObjectNull(key)) {
        return;
    }
    [[SWQuickCacheUitil standDefault]removeObjectForKey:key];
}

+ (id)userDefaultGetValue:(id)key
{
    if (SWCheckObjectNull(key)) {
        return nil;
    }
    return [[SWQuickCacheUitil standDefault]objectForKey:key];
}

+ (BOOL)userDefaultEmptyValue:(id)key
{
    return [SWQuickCacheUitil userDefaultGetValue:key] == nil;
}

+ (NSCache *)shareCache
{
    static NSCache *_gjcfNSCacheInstance = nil;
    static dispatch_once_t onceToken;
    
    SWDispatchOnce(onceToken, ^{
        
        if (!_gjcfNSCacheInstance) {
            _gjcfNSCacheInstance = [[NSCache alloc]init];
        }
        
    });
    
    return _gjcfNSCacheInstance;
}

+ (void)systemMemoryCacheSet:(id<NSCoding>)value key:(id)key
{
    if (SWCheckKeyValueHasNull(value, key)) {
        return;
    }
    [[SWQuickCacheUitil shareCache]setObject:value forKey:key];
}

+ (void)systemMemoryCacheRemove:(id)key
{
    if (SWCheckObjectNull(key)) {
        return;
    }
    [[SWQuickCacheUitil shareCache]removeObjectForKey:key];
}

+ (id)systemMemoryCacheGetValue:(id)key
{
    if (SWCheckObjectNull(key)) {
        return nil;
    }
    return [[SWQuickCacheUitil shareCache]objectForKey:key];
}

+ (BOOL)systemMemoryCacheEmptyValue:(id)key
{
    if (SWCheckObjectNull(key)) {
        return NO;
    }
    return [SWQuickCacheUitil systemMemoryCacheGetValue:key] == nil;
}

+ (NSFileManager *)fileManager
{
    return [NSFileManager defaultManager];
}

+ (BOOL)fileExist:(NSString*)path
{
    if (SWStringIsNull(path)) {
        return NO;
    }
    return [[SWQuickCacheUitil fileManager] fileExistsAtPath:path];
}

+ (BOOL)directoryExist:(NSString*)dirPath
{
    if (SWStringIsNull(dirPath)) {
        return NO;
    }
    BOOL isDir = YES;
    
    return [[SWQuickCacheUitil fileManager]fileExistsAtPath:dirPath isDirectory:&isDir];
}

+ (BOOL)createDirectory:(NSString*)dirPath
{
    if (SWCheckObjectNull(dirPath)) {
        return NO;
    }
    if (SWFileDirectoryIsExist(dirPath)) {
        return YES;
    }
    return [[SWQuickCacheUitil fileManager] createDirectoryAtPath:dirPath withIntermediateDirectories:YES attributes:nil error:nil];
}

+ (BOOL)writeFileData:(NSData*)data toPath:(NSString *)path
{
    if (SWCheckKeyValueHasNull(data, path)) {
        return NO;
    }
    
    return [data writeToFile:path atomically:YES];
}

+ (NSData *)readFromFile:(NSString *)path
{
    if (SWCheckObjectNull(path)) {
        return nil;
    }
    
    return [NSData dataWithContentsOfFile:path];
}

+ (BOOL)deleteFileAtPath:(NSString *)filePath
{
    if (SWStringIsNull(filePath)) {
        return NO;
    }
    return [SWFileManager removeItemAtPath:filePath error:nil];
}

+ (BOOL)deleteDirectoryAtPath:(NSString *)dirPath
{
    if (SWStringIsNull(dirPath)) {
        return NO;
    }
    return [SWFileManager removeItemAtPath:dirPath error:nil];
}

+ (BOOL)copyFileFromPath:(NSString *)fromPath toPath:(NSString *)toPath isRemoveOld:(BOOL)isRemove
{
    if (SWStringIsNull(fromPath) || SWStringIsNull(toPath) ) {
        return NO;
    }
    if (!SWFileIsExist(fromPath)) {
        return NO;
    }
    
    BOOL copyResult = [SWFileManager copyItemAtPath:fromPath toPath:toPath error:nil];
    if (copyResult) {
        
        if (isRemove) {
            return [SWFileManager removeItemAtPath:fromPath error:nil];
        }
        return YES;
        
    }else{
        return NO;
    }
}

+ (BOOL)archieveObject:(id<NSCoding>)anObject toFilePath:(NSString *)toPath
{
    if (SWCheckObjectNull(anObject) || SWStringIsNull(toPath)) {
        return NO;
    }
    NSData *archieveData = [NSKeyedArchiver archivedDataWithRootObject:anObject];
    if (archieveData) {
        
        return SWFileWrite(archieveData, toPath);
        
    }else{
        return NO;
    }
}

+ (id)unarchieveFromPath:(NSString *)filePath
{
    if (SWStringIsNull(filePath)) {
        return nil;
    }
    return [NSKeyedUnarchiver unarchiveObjectWithFile:filePath];
}

+ (NSString *)documentDirectory
{
    return [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
}

+ (NSString *)documentDirectoryPath:(NSString *)file
{
    if (SWStringIsNull(file)) {
        return nil;
    }
    return [[SWQuickCacheUitil documentDirectory]stringByAppendingPathComponent:file];
}

+ (NSString *)cacheDirectory
{
    return [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject];
}

+ (NSString *)cacheDirectoryPath:(NSString *)file
{
    if (SWStringIsNull(file)) {
        return nil;
    }
    return [[SWQuickCacheUitil cacheDirectory]stringByAppendingPathComponent:file];
}

+ (BOOL)cacheDirectorySave:(id<NSCoding>)anObject withFileName:(NSString *)file
{
    if (SWCheckObjectNull(anObject) || SWStringIsNull(file)) {
        return NO;
    }
    
    return SWArchieveObject(anObject, [SWQuickCacheUitil cacheDirectoryPath:file]);
}

+ (BOOL)cacheDirectoryDelete:(NSString *)file
{
    if (SWStringIsNull(file)) {
        return NO;
    }
    return SWFileDeleteFile([SWQuickCacheUitil cacheDirectoryPath:file]);
}


+ (BOOL)documentDirectorySave:(id<NSCoding>)anObject withFileName:(NSString *)file
{
    if (SWCheckObjectNull(anObject) || SWStringIsNull(file)) {
        return NO;
    }
    
    return SWArchieveObject(anObject, [SWQuickCacheUitil documentDirectoryPath:file]);
}

+ (BOOL)documentDirectoryDelete:(NSString *)file
{
    if (SWStringIsNull(file)) {
        return NO;
    }
    return SWFileDeleteFile([SWQuickCacheUitil documentDirectoryPath:file]);
}

@end
