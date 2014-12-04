//
//  BaseViewController.h
//  haipailama
//
//  Created by 曹大为 on 14/12/1.
//  Copyright (c) 2014年 Cao Dawei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HttpResponse.h"
#import "XXAlertView.h"
#import "JsonUtil.h"
#import "ReturnMessage.h"

@interface BaseViewController : UIViewController

- (void)handleFailureHttpResponse:(HttpResponse *)resp;

@end
