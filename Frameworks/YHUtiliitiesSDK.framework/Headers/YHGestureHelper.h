//
//  YHGestureHelper.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YHGestureHelper : NSObject
    
    //单击
+ (void)addGesture:(UIView*)view
            Target:(id)t_target
               Sel:(SEL)t_sel;
    //多次点击
+ (void)addTapGesture:(UIView*)view
               number:(NSInteger)number
               Target:(id)t_target
                  Sel:(SEL)t_sel;
    //长按
+ (void)addlongPressGesture:(UIView*)view
                     Target:(id)t_target
                        Sel:(SEL)t_sel;
    //滑动
+ (void)addSwipeGesture:(UIView*)view
                 Target:(id)t_target
              direction:(UISwipeGestureRecognizerDirection)direction
                    Sel:(SEL)t_sel;
@end
