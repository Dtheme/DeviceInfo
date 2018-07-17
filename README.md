# DeviceInfo 
Get iOS device Infomation

##获取iOS设备的设备信息


这个类是对常用的UIDevice方法封装，获取了一些常用的设备信息

### 包含的方法

`+ (NSDictionary *)deviceInfo;`

返回一个字典，包含本类中提供的方法的所有值

`+ (NSArray *)executablePathAndMD5Value;`

返回一个数组，index0是executablePath，index1是它的MD5加密值

`+ (BOOL)isJailBrojen;`
  
判断是否为越狱设备

`+ (NSString *)getMacAddress;`

获取设备的Mac地址

`+ (NSString *)getDeviceIPAdress;`

获取设备当前IP

`+ (NSString *)getDeviceLanguage;`

获取当前设备的语言环境

`+ (NSString *) getBatteryState;`

获取当前的电池状态

`+ (CGFloat)getBatteryLevel;`

获取当前的电池电量

`+ (NSString *)getApplicationName;`

app名称

`+ (NSString*) getLocalAppVersion;`

获取app版本号


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


