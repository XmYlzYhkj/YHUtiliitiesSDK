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
///defaultBgColor: whiteColor, defaultTextAlignMent:left.
+ (UILabel *)createLabelWithTitle:(NSString *)title fontSize:(CGFloat)fontsize textColor:(UIColor *)textColor;
+ (UILabel *)createLabelWithTitle:(NSString *)title bgColor:(UIColor *)bgColor textAlignMent:(NSTextAlignment)textAlignMent fontSize:(CGFloat)fontsize textColor:(UIColor *)textColor;

+ (UIImageView *)createImageViewWithImageName:(NSString *)imageName;
+ (UIImageView *)createImageViewWithImage:(UIImage *)image;
    
+(UITextView *)createTextViewWithBgColor:(UIColor *)backgroundColor delegate:(id)delegate fontSize:(CGFloat)fontsize textColor:(UIColor *)textColor;
    

+ (UIButton *)createBtnWithImage:(NSString *)imageName;
+ (UIButton *)createBtnWithImg:(UIImage *)image;
+ (UIButton *)createBtnWithImg:(id)norImage selImage:(id)selImage;

+ (UIButton *)createBtnWithtitle:(NSString *)title titleColor:(UIColor *)titleColor fontSize:(CGFloat)fontsize;
+ (UIButton *)createBtnWithBgColor:(UIColor *)backgroundColor titleColor:(UIColor *)titleColor ontSize:(CGFloat)fontsize title:(NSString *)title;
+ (UIButton *)createBtnWithBgColor:(UIColor *)bgColor titleColor:(UIColor *)titleColor fontSize:(CGFloat)fontsize title:(NSString *)title selTitle:(NSString *)selTitle;
+ (UIButton *)createBtnWithBgColor:(UIColor *)bgColor titleColor:(UIColor *)titleColor fontSize:(CGFloat)fontsize title:(NSString *)title selTitleColor:(UIColor *)selTitleColor selTitle:(NSString *)selTitle;

+ (UIButton *)createBtnWithBgColor:(UIColor *)backgroundColor titleColor:(UIColor *)titleColor fontSize:(CGFloat)fontsize title:(NSString *)title leftImage:(NSString *)imageName spacing:(CGFloat)spacing;
///leftImage入参为图片
+ (UIButton *)createBtnWithBgColor:(UIColor *)backgroundColor titleColor:(UIColor *)titleColor fontSize:(CGFloat)fontsize title:(NSString *)title leftImg:(UIImage *)image spacing:(CGFloat)spacing;

+ (UIButton *)createBtnWithBgColor:(UIColor *)backgroundColor titleColor:(UIColor *)titleColor fontSize:(CGFloat)fontsize title:(NSString *)title rightImage:(NSString *)imageName spacing:(CGFloat)spacing;
///rightImage入参为图片
+ (UIButton *)createBtnWithBgColor:(UIColor *)backgroundColor titleColor:(UIColor *)titleColor fontSize:(CGFloat)fontsize title:(NSString *)title rightImg:(UIImage *)image spacing:(CGFloat)spacing;

+ (UIView *)createViewWithBgColor:(UIColor *)backgroundColor;
    
+(UITextField *)createTextFieldWithBgColor:(UIColor *)backgroundColor fontSize:(CGFloat)fontsize textColor:(UIColor *)textColor;

+(UITableView *)createTableView;

+(UITableView *)createTableViewWithStylePlain;

+(UITableView *)createTableViewWithStyleGrouped;

@end
