//
//  DetailViewController.h
//  TripTracker
//
//  Created by Edward Jo on 2/3/16.
//  Copyright © 2016 Edjo82. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

