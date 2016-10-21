//
//  UIImage+CK.h
//  星澜科技
//
//  Created by apple on 16-3-4.
//  Copyright (c) 2015年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Render)

/*
 *加载最原始的图片，没有渲染
 */
+ (instancetype)imageWithOriginalName:(NSString *)imageName;

@end

@interface UIImage (Extensiton)
/*
 *加载拉伸边缘不变形的图片
 */
+ (instancetype)resizeImage:(NSString *)imgName;
/*
 *指定加载图片方向
 */
+ (instancetype)image:(UIImage *)image rotation:(UIImageOrientation)orientation;
@end