//
//  YHImageHelper.h
//  YHCommonSDK
//
//  Created by zxl on 2018/3/26.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YHImageHelper : NSObject

/**
 由于bundle无法自动识别@2x,@3x图片,我们根据系统scale进行判断

 @param bundleName bundleName
 @param imageName imageName
 @return image
 */
+(UIImage *)getImageWithBundle:(NSString *)bundleName withimageName:(NSString *)imageName;

/**
 获取图片名字

 @param bundleName bundle
 @param imageName imagename
 @return name
 */
+(NSString *)getImageNameWithBundle:(NSString *)bundleName withimageName:(NSString *)imageName;

@end
