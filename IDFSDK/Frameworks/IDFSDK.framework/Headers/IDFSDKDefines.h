//
//  IDFSDKDefines.h
//  IDFSDK
//
//  Created by bruce on 16/3/8.
//  Copyright © 2016年. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

//登陆相关的
extern NSString *const IDF_LOGIN_NOTIFICATION;              //登录
extern NSString *const IDF_LOGOUT_NOTIFICATION;             //退出
extern NSString *const IDF_SWITCHACCOUNT_NOTIFICATION;      //切换账号
extern NSString *const IDF_WEBVIEW_CLOSE_NOTIFICATION;      //关闭webview的通知，内部使用
extern NSString *const IDF_WEBVIEW_LOGOUT_NOTIFICATION;     //页面webview，点击退出
extern NSString *const IDF_WEBVIEW_CUSTOMER_NOTIFICATION;   //平台键点开的页面关闭通知

extern NSString *const IDF_INFO_VIEW_CLOSE_NOTIFICATION;   //关闭InfoView

extern NSString *const IDF_TIPS_WEBVIEW_CLOSE_NOTIFICATION;  //TIPS页面 关闭
extern NSString *const IDF_TIPS_WEBVIEW_RESULT_NOTIFICATION;

//GameCenter
extern NSString *const IDF_PRESENT_AUTHVIEWCONTROLLER_NOTIFICATION;
extern NSString *const IDF_LOCALPALYER_AUTH_NOTIFICATION;
extern NSString *const IDF_GAMECENTER_LOGIN;

extern NSString *const NSLOGFLAG;
extern NSString *const IDFREMOVETRANSACTIONS_NOTIFICATION;

//充值
extern NSString *const IDF_ROLE_ID;
extern NSString *const IDF_ROLE_NAME;
extern NSString *const IDF_ROLE_LEVEL;
extern NSString *const IDF_ROLE_COIN;
extern NSString *const IDF_ROLE_MENEY;


//CS选项
extern NSString *const IDF_USERINFO;                 //用户信息
extern NSString *const IDF_FEEDBACK;                 //用户反馈
extern NSString *const IDF_BULLENTIN;                //SDK公告

//
extern NSString *const IDF_LOGIN_JSOC;               //登录
extern NSString *const IDF_LOGIN_COLSE_JSOC;         //web关闭
extern NSString *const IDF_LOGIN_FB_JSOC;            //FB登陆回调
extern NSString *const IDF_LOGIN_GOOGLE_JSOC;        //Google登陆回调
extern NSString *const IDF_LOGOUT_JSOC;              //注销
extern NSString *const IDF_SHARE_WECHAT_JSOC;        //微信分享回调
extern NSString *const IDF_REVIEW_STAR_JSOC;
extern NSString *const IDF_REMOVE_TRANSCATIONS;      //删除TRANSCATIONS
extern NSString *const IDF_SIMULATED_LOGIN_JSOC;     //模拟登录
extern NSString *const IDF_PSD_CHANGE;               //网页修改密码
extern NSString *const IDF_discrete_Result;

typedef NS_ENUM(NSInteger, IDFSTATUS) {
    message_fail = 0,                       //失败
    message_success = 1,                    //成功
    message_buying_error,                   //有其他订单购买进行中
    message_product_info_error,             //商品信息获取失败
    message_get_order_error,                //用户下单失败
//    message_user_cancel,                  //用户取消支付
    message_user_paid,                      //用户完成支付
    message_user_paid_error,                //用户支付失败
    message_issue_success,                  //物品下发成功
    message_issue_error,                    //物品下发失败
    
    message_web_logout = 100,               //webview注销
};

typedef NS_ENUM(NSInteger, IDFLoginType) {
    IDF_LOGIN_UNKOWN = 0,        //未知
    IDF_LOGIN_GUEST = 1,         //游客账号登录
    IDF_LOGIN_IDF = 2,            //账号登录
    IDF_LOGIN_GAMECENTER =3,     //gamecenter
    IDF_LOGIN_GOOGLEPLAY = 4,    //googleplay
    IDF_LOGIN_FB = 5,            //Facebook
    IDF_LOGIN_LINE = 6,          //Line
    IDF_LOGIN_TWITTER = 7,       //twitter
    IDF_LOGIN_QQ = 8,            //QQ
    IDF_LOGIN_WECHAT = 9,        //微信
    IDF_LOGIN_APPLEID = 10,      //苹果id登录

};

//回调数据，默认返回失败信息
@interface IDFCallbackModel : NSObject

extern NSString *const IDF_CALLBACK_SUCCESS;      //回调成功
extern NSString *const IDF_CALLBACK_FAIL;         //回调失败

@property (nonatomic, strong) NSString *message;
@property (nonatomic, assign) IDFSTATUS status;
@property (nonatomic, strong) id data;

@end

typedef void  (^IDFCallbackBlock)(IDFCallbackModel *callbackModel);
typedef void  (^IDFCallback)(void);


@interface IDFSDKDefines : NSObject


@end


#pragma mark - 语言类型
//zh-cn 简体中文
//zh-hk 繁体中文
//en 英文
//ja  日文
//th  泰文
//vi  越南
//id  印尼
//de  德文
typedef NS_ENUM(NSInteger, IDFLanguageType) {
    IDF_LANGUAGE_SYSTEM = 0,//取设备的系统语言
    IDF_LANGUAGE_CN,//简体中文
    IDF_LANGUAGE_HK,//繁体中文
    IDF_LANGUAGE_EN,//英文
    IDF_LANGUAGE_JA,//日文
    IDF_LANGUAGE_TH,//泰文
    IDF_LANGUAGE_VI,//越南文
    IDF_LANGUAGE_ID,//印尼文
    IDF_LANGUAGE_DE,//德文
    IDF_LANGUAGE_KO,//韩文
    IDF_LANGUAGE_FR,//法国
    IDF_LANGUAGE_TR,//土耳其
};
#pragma mark - 分享类别

typedef NS_ENUM(NSInteger, IDFShareType){
    
    IDF_SHAREFACEBOOKLINK = 1,    //facebook link
    IDF_SHAREFACEBOOKIMAGE,       //facebook image
    IDF_SHAREINSTAGRAM,           //instagram
    IDF_SHARIDFINE,                //line
    IDF_SHAREWXSESSIONLINK,       //微信会话 link
    IDF_SHAREWXSESSIONIMAGE,      //微信会话 image
    IDF_SHAREWXTIMIDFINIDFINK,      //微信朋友圈 link
    IDF_SHAREWXTIMIDFINEIMAGE,     //微信朋友圈 image

    IDF_SHAREFACEBOOK,           //facebook
    IDF_SHAREWXSESSION,          //微信会话
    IDF_SHAREWXTIMIDFINE,         //微信朋友圈
    
    IDF_SHARETWITTER,            //twitter

};

