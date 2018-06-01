# DeviceInfo 

[![Packagist](https://img.shields.io/packagist/l/doctrine/orm.svg?style=flat-square)]()

Get Apple device Infomation

##获取apple设备的设备信息


这个类是对常用的UIDevice方法封装，获取了一些常用的设备信息

### 包含的方法

`+ (NSDictionary *)deviceInfo;`

返回一个字典

*  DeviceMac  mac地址
*  DeviceType 设备类型
*  DeviceMetrics 分辨率
*  DeviceModel 设备型号
*  DeviceOsType 系统版本
*  CPUArchitecture CPU架构

`+ (NSArray *)executablePathAndMD5Value;`

返回一个数组，index0是executablePath，index1是它的MD5加密值

`+ (BOOL)isJailBrojen;`
  
判断是否为越狱设备

`+ (NSString *)getMacAddress;`

获取设备的Mac地址

### 使用

所有方法都已经封装成类方法，引入`DeviceInfo.h`后就可以直接调。

```objc
#import "DeviceInfo.h"
```


```objc
 NSLog(@"deviceInfo-->%@",[DeviceInfo deviceInfo]);
 NSLog(@"executablePathMD5-->%@",[DeviceInfo executablePathAndMD5Value]);
 NSLog(@"isJailBrojen-->%d",[DeviceInfo isJailBrojen]);
 NSLog(@"MacAddress-->%@",[DeviceInfo getMacAddress]);
```


