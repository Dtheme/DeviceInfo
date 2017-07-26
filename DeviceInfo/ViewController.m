//
//  ViewController.m
//  DeviceInfo
//
//  Created by dzw on 2017/7/26.
//  Copyright © 2017年 段志巍. All rights reserved.
//

#import "ViewController.h"
#import "DeviceInfo.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSLog(@"deviceInfo-->%@",[DeviceInfo deviceInfo]);
    NSLog(@"executablePathMD5-->%@",[DeviceInfo executablePathAndMD5Value]);
    NSLog(@"isJailBrojen-->%d",[DeviceInfo isJailBrojen]);
    NSLog(@"MacAddress-->%@",[DeviceInfo getMacAddress]);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
