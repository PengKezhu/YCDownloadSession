//
//  VideoCacheListCell.h
//  YCDownloadSession
//
//  Created by wz on 17/3/23.
//  Copyright © 2017年 onezen.cc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YCDownloadSession.h"

@interface VideoCacheListCell : UITableViewCell<YCDownloadItemDelegate>

@property (weak, nonatomic) IBOutlet UILabel *speedLbl;
@property (nonatomic, strong) YCDownloadItem *item;

+(instancetype)videoCacheListCellWithTableView:(UITableView *)tableView;

+ (CGFloat)rowHeight;

@end
