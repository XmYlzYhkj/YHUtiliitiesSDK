//
//  YHDeviceHelper.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/20.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#include <sys/sysctl.h>

//#import <SystemConfiguration/SystemConfiguration.h>
//#import <WebKit/WebKit.h>
//#include <arpa/inet.h>
//#include <ifaddrs.h>
//#include <resolv.h>
//#include <dns.h>
//#include <sys/types.h>

@interface YHDeviceHelper : NSObject


//APP 版本
+ (NSString*)getAppVersion;

+ (NSString*)getBundleVersion;

//bundle Id
+ (NSString*)getBundleID;

//APP 名称
+ (NSString*)getAppDisplayName;

//当前语种
+ (NSString*)getCurrentLanguage;


+ (NSString*)getCurrentLocale;

/**
 *  获取系统iOS主版本号
 *
 *  @return iOS主版本号
 */
+ (NSUInteger)getDeviceSystemMajorVersion;

/**
 *  获取系统iOS版本号
 *
 *  @return iOS版本号
 */
+ (NSString*)getDeviceSystemVersionString;

/**
 *  获取设备机型
 *
 *  @return 机型
 */
+ (NSString*)getDeviceModel;

/**
 *  获取屏幕分辨率
 *
 *  @return 屏幕分辨率
 */
+ (NSString*)getDeviceScreenResolution;

/**
 *  获取设备名称
 *
 *  @return 设备名称
 */
+ (NSString*)getDeviceName;


///**
// 获取APP唯一标识
// 
// @return 设备id
// */
//+(NSString *)getDeviceId;
@end
