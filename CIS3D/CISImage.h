//
//  CISImage.h
//  CIS3D
//
//  Created by Neo on 15/4/10.
//  Copyright (c) 2015年 PKU. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <vector>
#import <opencv2/opencv.hpp>
#import <opencv2/nonfree/nonfree.hpp>

#import "CISUtility.h"
#import "CISCamera.h"

@interface CISImage : NSObject

@property (nonatomic) cv::Mat                   *image;
@property (atomic)    cv::Mat                   *keyDescriptor;
@property (atomic)    std::vector<cv::KeyPoint> *keyPoints;
@property (nonatomic, strong) CISCamera         *camera;

@property (nonatomic) cv::Mat                   *drawImage;

+ (cv::Mat *)cvMatFromUIImage:(UIImage *)image;

+ (UIImage *)UIImageFromCVMat:(cv::Mat *)cvMat;
+ (UIImage *)UIImageFromCVMat:(cv::Mat *)cvMat WithOrientation:(UIImageOrientation)orientation;

- (instancetype)initWithUIImage:(UIImage *)image;

@end
