//
//  DFImagesSendViewController.h
//  DFTimelineView
//
//  Created by Allen Zhong on 16/2/15.
//  Copyright © 2016年 Datafans, Inc. All rights reserved.
//

#import <DFCommon/DFCommon.h>

@protocol DFImagesSendViewControllerDelegate <NSObject>

@optional

-(void) onSendTextImage:(NSString *) text images:(NSArray *)images;

-(void) onSendVideo:(NSString *)text videoPath:(NSString *)videoPath screenShot:(UIImage *)screenShot;

@end

@interface DFImagesSendViewController : DFBaseViewController

@property (nonatomic, strong)NSString *videoPath;
@property (nonatomic, strong)UIImage *screenShot;

@property (nonatomic, weak) id<DFImagesSendViewControllerDelegate> delegate;

- (instancetype)initWithImages:(NSArray *) images;

@end
