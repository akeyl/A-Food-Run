//
//  ViewController.h
//  A Food Run
//
//  Created by AK on 1/16/16.
//  Copyright © 2016 AK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>
@property (weak, nonatomic) IBOutlet UIView *viewPreview;
@property (weak, nonatomic) IBOutlet UILabel *lblStatus;
//@property (weak, nonatomic) IBOutlet UIBarButtonItem *bbitemStart;
- (IBAction)startStopReading:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *bbitemStart;


@end