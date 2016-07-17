//
//  RHMenuView.h
//  RHProject
//
//  Created by 郭人豪 on 16/4/30.
//  Copyright © 2016年 Abner_G. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^MyBlock)(NSInteger index);
@interface RHMenuView : UIView



- (instancetype)initWithFrame:(CGRect)frame andMenuTitles:(NSArray *)titles andBlock:(MyBlock)block;

- (void)changeSelectItemWithIndex:(NSInteger)index;

@property (nonatomic,assign)NSInteger selectIndex;

@end
