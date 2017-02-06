//
//  ViewController.m
//  YXScrollDemo
//
//  Created by apple on 2017/2/6.
//  Copyright © 2017年 apple. All rights reserved.
//

#import "ViewController.h"
#import "YXScrollRefreshView.h"
#define kScreenHeight       [UIScreen mainScreen].bounds.size.height
#define kScreenWidth        [UIScreen mainScreen].bounds.size.width
@interface ViewController ()
@property (weak, nonatomic) IBOutlet YXScrollRefreshView *scrollView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.scrollView.contentSize = CGSizeMake(kScreenWidth, 2*kScreenHeight);
    self.scrollView.headerTexts = @[@"1",@"2",@"3"];
}

/** 下拉刷新触发 */
- (void)YXRefreshHeaderDidTriggerRefresh{
    [self.scrollView performSelector:@selector(doneLoadingScrollViewData) withObject:nil afterDelay:1];
}
/** 上拉更多触发 */
- (void)YXRefreshFooterDidTriggerRefresh{
    [self.scrollView performSelector:@selector(doneLoadingScrollViewData) withObject:nil afterDelay:1];
}

@end
