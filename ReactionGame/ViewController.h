//
//  ViewController.h
//  ReactionGame
//
//  Created by Ashikul Islam Tamal on 3/13/16.
//  Copyright © 2016 Ashikul Islam Tamal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    NSTimer *timer;
    int countInt;
    
    NSTimer *timerScore;
    int scoreInt;
}
@property (weak, nonatomic) IBOutlet UILabel *getReadyLabel;
@property (weak, nonatomic) IBOutlet UILabel *timerLabel;
- (IBAction)startstopButton:(id)sender;


@end

