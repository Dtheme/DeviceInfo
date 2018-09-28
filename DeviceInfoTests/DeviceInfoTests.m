//
//  DeviceInfoTests.m
//  DeviceInfoTests
//
//  Created by dzw on 2017/7/26.
//  Copyright © 2017年 段志巍. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "DeviceInfo.h"

@interface DeviceInfoTests : XCTestCase

@end

@implementation DeviceInfoTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

#pragma mark - test
- (void)testExample {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
    [self measureBlock:^{
        NSDictionary *dict = [DeviceInfo deviceInfo];
        NSLog(@"%@",dict);
    }];
}

-(void)testExecutablePathAndMD5Value{
    [self measureBlock:^{
        NSArray *arr = [DeviceInfo executablePathAndMD5Value];
        NSLog(@"%@",[arr copy]);
    }];
}




#pragma mark - test case



@end
