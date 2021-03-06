//
//  YJBannerViewCell.h
//  YJBannerViewDemo
//
//  Created by YJHou on 2015/5/24.
//  Copyright © 2015年 地址:https://github.com/stackhou/YJBannerViewOC . All rights reserved.
//

/**
 __   __  _ ____                            __     ___
 \ \ / / | | __ )  __ _ _ __  _ __   ___ _ __ \   / (_) _____      __
  \ V /  | |  _ \ / _` | '_ \| '_ \ / _ \ '__\ \ / /| |/ _ \ \ /\ / /
   | | |_| | |_) | (_| | | | | | | |  __/ |   \ V / | |  __/\ V  V /
   |_|\___/|____/ \__,_|_| |_|_| |_|\___|_|    \_/  |_|\___| \_/\_/
 
 */

#import <UIKit/UIKit.h>

@interface YJBannerViewCell : UICollectionViewCell

@property (nonatomic, strong) UIColor *titleLabelTextColor;
@property (nonatomic, strong) UIFont *titleLabelTextFont;
@property (nonatomic, strong) UIColor *titleLabelBackgroundColor;
@property (nonatomic, assign) CGFloat titleLabelHeight;
@property (nonatomic, assign) CGFloat titleLabelEdgeMargin;
@property (nonatomic, assign) NSTextAlignment titleLabelTextAlignment;
@property (nonatomic, assign) UIViewContentMode showImageViewContentMode; /**< 填充样式 默认UIViewContentModeScaleToFill */
@property (nonatomic, assign) BOOL isConfigured;
@property (nonatomic, strong) UIView *customView; /**< 自定义View */

- (void)cellWithSelectorString:(NSString *)selectorString imagePath:(NSString *)imagePath placeholderImage:(UIImage *)placeholderImage title:(NSString *)title;

@end
