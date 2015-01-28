//
//  XPTaskTableViewCell.h
//  XPlan
//
//  Created by mjlee on 14-3-2.
//  Copyright (c) 2014年 mjlee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TaskModel.h"

#define kTaskCellMaxWidth 300
#define kTaskCellFontSize 15.0

@interface XPTaskTableViewCell : UITableViewCell{
}

-(id)initWithStyle:(UITableViewCellStyle)style
   reuseIdentifier:(NSString *)reuseIdentifier
         tableview:(UITableView*)tableview;

-(void)setTask:(TaskModel*)atask;
@end
