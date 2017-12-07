//
//  STLanguageTool.h
//  Multilingual
//
//  Created by StarHui on 2017/12/7.
//  Copyright © 2017年 StarHui. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * _Nonnull const languageFileKey;

#define STLANG(key) NSLocalizedStringFromTableInBundle(key, @"Localizable", [STLanguageTool localizedBundle], nil)

@interface STLanguageTool : NSObject

+ (NSBundle *_Nonnull)localizedBundle;

/**
 * 保存用户选择的语言
 * langFileName 语言名称
 */
+ (void)saveUserLocalLang:(NSString *_Nonnull)langFileName;

@end
