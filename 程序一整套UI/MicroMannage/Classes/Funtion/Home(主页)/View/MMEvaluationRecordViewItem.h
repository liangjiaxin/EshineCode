//
//  MMEvaluationRecordViewItem.h
//  MicroMannage
//
//  Created by 倪望龙 on 2017/3/16.
//  Copyright © 2017年 xunyijia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MMEvaluationRecordViewItem : UIView
@property(nonatomic,strong)NSString *num;
- (instancetype)initWithTitle:(NSString *)title NumColor:(UIColor*)color;
@end
