//
//  GLCloud.h
//  CIS3D
//
//  Created by Neo on 15/5/5.
//  Copyright (c) 2015年 PKU. All rights reserved.
//

#import "GLShape.h"
#import "CISCloud.h"

@interface GLCloud : NSObject <GLShape>

@property (nonatomic, strong) CISCloud *data;

@end
