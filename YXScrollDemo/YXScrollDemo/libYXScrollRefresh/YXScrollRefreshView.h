//
//  YXScrollRefreshView.h
//  UIScrollerViewRefesh
//
//  Created by apple on 2017/2/5.
//  Copyright © 2017年 zhangyanxue. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
@protocol ScrollViewRefreshDelegate;
@interface YXScrollRefreshView : UIScrollView
@property(nonatomic,weak) IBOutlet id<ScrollViewRefreshDelegate>        refreshDelegate;

/**
 下拉分别出现的文字共需3组，默认@[下拉可以刷新...,释放即可刷新...,努力加载中...];
 */
@property (nonatomic,strong) NSArray<NSString *>                *headerTexts;

/**
 下拉动画图片
 */
@property (nonatomic, copy) NSArray<UIImage *>                  *headerAnimationImages;

/**
 上拉分别出现的文字共需3组，默认@[上拉加载更多...,释放即可加载更多...,正在努力加载...];
 */
@property (nonatomic,strong) NSArray<NSString *>                *footerTexts;

/**
 上拉动画图片
 */
@property (nonatomic, copy) NSArray<UIImage *>                  *footerAnimationImages;
/** 加载完成调用 */
- (void)doneLoadingScrollViewData;

@end

@protocol ScrollViewRefreshDelegate <NSObject>
@optional
/** 下拉刷新触发 */
- (void)YXRefreshHeaderDidTriggerRefresh;
/** 上拉更多触发 */
- (void)YXRefreshFooterDidTriggerRefresh;
/** 隐藏底部 */
- (BOOL)YXRefreshFooterShouldHidden:(YXScrollRefreshView *)ScrollView;

@end


