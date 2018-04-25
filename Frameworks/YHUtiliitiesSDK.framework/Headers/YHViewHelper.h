//
//  YHViewHelper.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YHViewHelper : NSObject

+ (UILabel *)createLabelWithBgColor:(UIColor *)backgroundColor textAlignMent:(NSTextAlignment)textAlignMent fontSize:(CGFloat)fontsize textColor:(UIColor *)textColor;
    
+ (UIImageView *)createImageViewWithImageName:(NSString *)imageName;
    
+(UITextView *)createTextViewWithBgColor:(UIColor *)backgroundColor delegate:(id)delegate fontSize:(CGFloat)fontsize textColor:(UIColor *)textColor;
    
+ (UIButton *)createBtnWithBgColor:(UIColor *)backgroundColor titleColor:(UIColor *)titleColor ontSize:(CGFloat)fontsize title:(NSString *)title;

+ (UIButton *)createBtnWithImage:(NSString *)imageName;

+ (UIButton *)createBtnWithBgColor:(UIColor *)backgroundColor titleColor:(UIColor *)titleColor fontSize:(CGFloat)fontsize title:(NSString *)title leftImage:(NSString *)imageName spacing:(CGFloat)spacing;

+ (UIButton *)createBtnWithBgColor:(UIColor *)backgroundColor titleColor:(UIColor *)titleColor fontSize:(CGFloat)fontsize title:(NSString *)title rightImage:(NSString *)imageName spacing:(CGFloat)spacing;

+ (UIView *)createViewWithBgColor:(UIColor *)backgroundColor;
    
+(UITextField *)createTextFieldWithBgColor:(UIColor *)backgroundColor fontSize:(CGFloat)fontsize textColor:(UIColor *)textColor;

+(UITableView *)createTableView;

+(UITableView *)createTableViewWithStylePlain;

+(UITableView *)createTableViewWithStyleGrouped;

@end
