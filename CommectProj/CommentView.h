//
//  CommentView.h
//  CommectProj
//
//  Created by shenjie on 2019/8/6.
//  Copyright © 2019 shenjie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Masonry/Masonry.h>

#import "JJTopicFrame.h"
#import "JJCommentCell.h"
#import "JJCommentModel.h"
#import "JJCommentConstant.h"
#import "JJCommentReplay.h"
#import "JJTopicManager.h"
#import "JJCommentInputView.h"
#import "JJUser.h"

NS_ASSUME_NONNULL_BEGIN

@interface CommentView : UIView<UITableViewDelegate, UITableViewDataSource, JJCommentCellDelegate, JJCommentInputViewDelegate>

@property (nonatomic, strong) UITableView *commentTableView;

@property (nonatomic, strong) NSMutableArray *dataSource;

@property (nonatomic, strong) JJTopicFrame *selecteTopicFrame;

@property (nonatomic, weak) JJCommentInputView *inputPanelView;

@property (nonatomic, copy) NSString *postId;

@end

NS_ASSUME_NONNULL_END