//
//  DetailViewController.h
//  AbtGo
//
//  Created by Genming Zhao on 2016-06-02.
//  Copyright © 2016 Genming Zhao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

