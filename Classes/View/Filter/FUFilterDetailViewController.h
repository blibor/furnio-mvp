//
//  FUFilterDetailViewController.h
//  furn
//
//  Created by Stephan Krusche on 26/04/15.
//
//

#import <UIKit/UIKit.h>

@interface FUFilterDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) NSMutableDictionary *previousFilterItems;
@property (nonatomic, strong) NSString *name;

@end
