//
//  DeviceInfo.h
//  DeviceInfo
//
//  Created by dzw on 2017/7/26.
//  Copyright © 2017年 段志巍. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface DeviceInfo : NSObject


/**
 DeviceMac  mac地址
 DeviceMetrics 分辨率
 DeviceModel 设备型号
 DeviceOsType 系统版本

 @return NSDictionary contain above-mentioned
 */
+ (NSDictionary *)deviceInfo;


/**
 executablePath 和 其进行MD5加密后的值

 executablePath = array[0];
 MD5Value = array[1];
 
 @return executablePath和其MD5值加密值
 */
+ (NSArray *)executablePathAndMD5Value;

/**
 是否越狱

 @return 是否越狱
 */
+ (BOOL)isJailBrojen;

/**
 获取设备Mac地址

 @return Mac地址
 */
+ (NSString *)getMacAddress;
//- (NSString*)getMainBundleMD5WithFlag:(NSInteger)flag;



@end
