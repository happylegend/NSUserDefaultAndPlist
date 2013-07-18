//
//  MyUserDefault.h
//  MyUserDefault
//
//  Created by 紫冬 on 13-7-18.
//  Copyright (c) 2013年 qsji. All rights reserved.
//

/*
 Property List  (属性表)
 
 定义：Property List文件是一种用来存储序列化后的对象 的文件。属性列表文件的文件扩展名 为.plist，因此通常被称为 plist 文件。
 
 pl是一种格式，包含了（NSData，NSString，NSNumber，NSDate，NSArray，NSDictionary  这六种任意组合创建的结构体）。
 
 NSUserDafults相当于一个缓存，而plist是一个文件。
 
 NSUserDefault，它其实也是以property list 的形式来存储的，但是它有限制，比如说NSColor和NSFont等类型式不能够直接存储的，我们必须要转换他们，要把他们转换成NSData类型来存。
 
 总结一下就是说，plist 文件和NSUserDefaults都是存储文件的一种方法。至于plist怎么储存，等要用的时候再来补充，先了解。
 NSUserDefaults实际上也是把数据存储到plist文件中。
 
 
 NSUserDefaults
 
 定义:
 
 1. NSUserDefaults类用于保存应用程序设置和属性以及用户数据。例如，你可以存储用户在应用程序中使用的图片或默认颜色方案，或者背景等。这些对象存储在iOS所谓的“defaults系统”中。
 
 2. iOS的defaults系统在整个app中都是可用的，因此存放到defaults系统中的数据也是整个应用程序生命周期中可用的。也就是说，无论用户关闭程序还是关机，在用户再次打开程序或开机后这些数据仍然存在。
 
 3. 从NSUserDefaults返回的值是不可改变的，即便是你在存储的时候使用的是可变的值。例如你使用mutable string做为“MyStringDefault”的值，当你做使用stringForKey:方法获取的值，这个值仍然是不可变的。
 
 4. NSUserDefaults是单例，同时也是线程安全的
 
 5. NSUserDefaults可以存储的数据类型只能是property list类型的数据。（NSData，NSString，NSNumber，NSDate，NSArray，NSDictionary）
 
 如果你想保存其他类型，如UIImage，你应该进行编码（即archive），或者将它转换为NSData、NSNumber或者NSString。
 
 提供给observer的信息包裹. notification对象有两个重要的成员变量: name 和 object.
 - (NSString *)name;
 - (id)object;
 - (NSDictionary *)userInfo;我们想要notification对象传递更多的信息
 
 方法
 
 一.得到共享的NSUserDefaults实例
 Getting the Shared NSUserDefaults
 + standardUserDefaults
 + resetStandardUserDefaults
 + (NSUserDefaults *)standardUserDefaults    
 
 二.初始化一个NSUserDefaults对象
 Initializing an NSUserDefaults
 -init
 -initWithUser
 - (id)initWithUser:(NSString *)username
 
 三.记录默认值
 Registering Defaults
 - registerDefaults
 
 四.得到默认值。
 Getting Defaults Values
 - arrayForKey:
 - boolForKey:
 - dataForKey:
 - dictionaryForKey:
 - floatForKey:
 - integerForKey:
 - objectForKey:
 - stringArrayForKey:
 - stringForKey:
 - doubleForKey:
 - URLForKey:
 得到数据时候用的方法，作用可以通过方法名轻松看出。
 
 五.设置默认值
 Setting Default Values
 - setBool:forKey:
 - setFloat:forKey:
 - setInteger:forKey:
 - setObject:forKey:
 - setDouble:forKey:
 - setURL:forKey:
 写入数据的方法
 
 六.删除某个默认值
 Removing Defaults
 - removeObjectForKey:
 
 七.维护持久域
 Maintaining Persisitent Domains
 - synchronize
 - persistentDomainForName:
 - persistentDomainNames
 - removePersistentDomainForName:
 - setPersistentDomain:forName:
 
 如何使用NSUserDefaults？
 
 你可以把它当做是一个小型的数据库，在存储和读取数据之前，你需要调用方法：     standardUserDefaults ：
 
 如：
 
 NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
 
 我把这个方法理解为，打开数据库的大门，这样你就可以对里面的数据做各种操作，也可以将存储数据进来。
 
 存储数据和读取数据有各种方法，需要注意的是，存储数据需要完成方法 synchronize：，这个方法完成的作用是同步数据，也就是将你做出改变的数据更新。
 
 如：
 
 [defaults synchronize];
 
 */

#import <Foundation/Foundation.h>

@interface MyUserDefault : NSObject



@end
