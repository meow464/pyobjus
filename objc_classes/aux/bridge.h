#import <Foundation/Foundation.h>
#import <CoreMotion/CoreMotion.h>

@interface bridge : NSObject {
    NSOperationQueue *queue;
}

@property (strong, nonatomic) CMMotionManager *motionManager;
@property (nonatomic) double ac_x;
@property (nonatomic) double ac_y;
@property (nonatomic) double ac_z;

@property (nonatomic) double gy_x;
@property (nonatomic) double gy_y;
@property (nonatomic) double gy_z;

@property (nonatomic) double mg_x;
@property (nonatomic) double mg_y;
@property (nonatomic) double mg_z;

@property (nonatomic) double sp_yaw;
@property (nonatomic) double sp_pitch;
@property (nonatomic) double sp_roll;

@property (nonatomic) double g_x;
@property (nonatomic) double g_y;
@property (nonatomic) double g_z;

@property (nonatomic) double rotation_rate_x;
@property (nonatomic) double rotation_rate_y;
@property (nonatomic) double rotation_rate_z;

@property (nonatomic) double user_acc_x;
@property (nonatomic) double user_acc_y;
@property (nonatomic) double user_acc_z;

@property (nonatomic) double mf_x;
@property (nonatomic) double mf_y;
@property (nonatomic) double mf_z;

@end
