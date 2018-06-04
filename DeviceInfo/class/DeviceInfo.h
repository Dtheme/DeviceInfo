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



// 返回本类提供的所有设备信息
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


/**
 获取App名称

 @return app名称
 */
+ (NSString *)getApplicationName;

/**
 获取app版本号

 @return app版本号
 */
+ (NSString*) getLocalAppVersion;

/**
 获取BundleID

 @return bundle ID
 */
+ (NSString*)getBundleID;


/**
 获取设备当前IP

 @return  获取设备当前IP
 */
+ (NSString *)getDeviceIPAdress;

/**
 电池电量

 @return 电池电量
 */
+ (CGFloat)getBatteryLevel;


/**
 电池状态

 @return 电池状态
 */
+ (NSString *) getBatteryState;

/**
 当期设备语言

 @return 当前设备语言
 */
+ (NSString *)getDeviceLanguage;

@end
