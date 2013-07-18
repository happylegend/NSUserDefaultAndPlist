//
//  MyUserDefault.m
//  MyUserDefault
//
//  Created by 紫冬 on 13-7-18.
//  Copyright (c) 2013年 qsji. All rights reserved.
//

#import "MyUserDefault.h"

@implementation MyUserDefault

//初始化的时候，获取一个NSUserDefaults对象
-(id)init
{
    self = [super init];
    if(self)
    {
        
    }
    return self;
}

//添加数据
-(void)addData
{
    //获取一个NSUserDefaults对象，该对象是一个单例对象
    NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
    
    //添加一个布尔值
    [userDefaults setBool:YES forKey:@"flag"];
    
    //添加以后，是暂存在了内存中的，所以我们要同步到磁盘（写到磁盘上），此时调用synchronize
    [userDefaults synchronize];
}

//删除数据
-(void)removeData
{
    //获取一个NSUserDefaults对象，该对象是一个单例对象
    NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
    
    [userDefaults removeObjectForKey:@"flag"];
}

//获取值
-(BOOL)getFlag
{
    //获取一个NSUserDefaults对象，该对象是一个单例对象
    NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
    
    BOOL flag = [userDefaults boolForKey:@"flag"];
    return flag;
}

@end
