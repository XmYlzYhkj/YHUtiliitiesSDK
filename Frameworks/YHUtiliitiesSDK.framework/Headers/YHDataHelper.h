//
//  YHDataHelper.h
//  FileManager
//
//  Created by humingxing on 14-7-25.
//  Copyright (c) 2014年 HMX. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YHDataHelper : NSObject
//字符串写入文件
+(void)writeStringToFile:(NSString*)str atPathName:(NSString *)pathStr;
//NSMutableArray写入文件
+(void)writeNSMutableArrayToFile:(NSMutableArray*)array atPathName:(NSString *)pathStr;
//NSArray写入文件
+(void)writeArrayToFile:(NSArray*)array atPathName:(NSString *)pathStr;
//NSMutableDictionary写入文件
+(void)writeMutableDictionaryToFile:(NSMutableDictionary *)dictionary atPathName:(NSString *)pathStr;
//NSDictionary写入文件
+(void)writeDictionaryToFile:(NSDictionary *)dictionary atPathName:(NSString *)pathStr;
//NSData写入文件
+(void)writeDataToFile:(NSData *)data atPathName:(NSString *)pathStr;


+(NSString *)readStringAtPathString:(NSString*)pathStr;
+(NSMutableArray *)readMutableArrarAtPathString:(NSString*)pathStr;
+(NSArray*)readArrayAtPathString:(NSString*)pathStr;
+(NSMutableDictionary *)readNSMutableDictionaryAtPathString:(NSString*)pathStr;
+(NSDictionary *)readDictionaryAtPathString:(NSString*)pathStr;
+(NSData *)readDataAtPathString:(NSString*)pathStr;

+(BOOL)deleteFileAtPath:(NSString*)pathStr;

@end
