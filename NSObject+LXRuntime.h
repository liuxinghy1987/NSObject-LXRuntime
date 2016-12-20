//
//  NSObject+LXRuntime.h
//  test
//
//  Created by liuxinghy1987 on 16/12/20.
//  Copyright © 2016年 liuxinghy1987. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (LXRuntime)
/// 使用字典数组创建当前类对象的数组
///
/// @param array 字典数组
///
/// @return 当前类对象的数组

+ (NSArray *)cz_objectsWithArray:(NSArray *)array;

/// 返回当前类的属性数组
///
/// @return 属性数组
+ (NSArray *)cz_propertiesList;

/// 返回当前类的成员变量数组
///
/// @return 成员变量数组
+ (NSArray *)cz_ivarsList;

@end
