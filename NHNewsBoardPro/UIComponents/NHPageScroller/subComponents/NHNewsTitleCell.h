//
//  NHNewsTitleCell.h
//  NHNaviSwipeBackPro
//
//  Created by hu jiaju on 16/3/26.
//  Copyright © 2016年 hu jiaju. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NHBaseKits.h"

typedef void(^adEvent)(NSDictionary * _Nonnull info);

@interface NHNewsTitleCell : UITableViewCell


+ (CGFloat)heightForSource:(NHNews * _Nonnull)news;

+ (NSString * _Nonnull)identifierForSource:(NHNews * _Nonnull)news;

- (void)configureForSource:(NHNews * _Nonnull)news;

/**
 *  @brief 空白页面
 */
- (void)configureEmpty:(CGFloat)height;

- (void)dealWithAds:(adEvent _Nonnull)event;

@end
