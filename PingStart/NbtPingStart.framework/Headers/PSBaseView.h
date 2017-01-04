//
//  PSBaseView.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/13.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Ad base view
 */
@interface PSBaseView : UIView

/**
 publisher id
 */
@property(nonatomic,copy)NSString *publisherId;

/**
 slot id
 */
@property(nonatomic,copy)NSString *slotId;

/**
 Click the ad to open the AppStore download page. Default no, use the "SKStoreProductViewController" to open the AppStore download page within the application. If yes, open the download page via "UIApplication openurl", which will jump to the AppStore application.
 */
@property(nonatomic,assign)BOOL openAppStoreOutside;

/**
 init

 @param publisherId publisher id
 @param slotId slot id
 @return instance
 */
-(instancetype)initWithPublisherId:(NSString*)publisherId slotId:(NSString*)slotId;

/**
 Starts the ad load request
 */
-(void)loadAd;

@end

NS_ASSUME_NONNULL_END
