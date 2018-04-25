//
//  YHVcHelper.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/20.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YHVcHelper : NSObject

/*
 控制器
 */
+(UINavigationController *)getCurrentNav;

+(UIViewController *)getCurrentVc;

+(UIViewController *)getRootVC;

+(void)gotoNextVC:(UIViewController *)controller;


@end
