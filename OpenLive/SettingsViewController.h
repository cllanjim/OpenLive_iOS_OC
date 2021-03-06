//
//  SettingsViewController.h
//  OpenLive
//
//  Created by GongYuhua on 2016/9/12.
//  Copyright © 2016年 Agora. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AgoraRtcEngineKit/AgoraRtcEngineKit.h>

@class SettingsViewController;
@protocol SettingsVCDelegate <NSObject>
- (void)settingsVC:(SettingsViewController *)settingsVC didSelectProfile:(AgoraRtcVideoProfile)profile;
@end

@interface SettingsViewController : UIViewController
@property (assign, nonatomic) AgoraRtcVideoProfile videoProfile;
@property (weak, nonatomic) id<SettingsVCDelegate> delegate;
@end
