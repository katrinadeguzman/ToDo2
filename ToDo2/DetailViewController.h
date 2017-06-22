//
//  DetailViewController.h
//  ToDo2
//
//  Created by Katrina de Guzman on 2017-06-21.
//  Copyright © 2017 Katrina de Guzman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ToDo2+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) ToDo *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

