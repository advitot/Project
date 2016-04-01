//
//  ViewController.h
//  KVStore_Sample
//
//  Created by Basavraj on 30/03/16.
//  Copyright © 2016 own. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>


@interface ViewController : UIViewController

@property (strong, nonatomic) NSString *databasePath;
@property (nonatomic) sqlite3 *DB;
@property (strong, nonatomic) IBOutlet UITextField *name;
@property (strong, nonatomic) IBOutlet UITextField *address;
@property (strong, nonatomic) IBOutlet UITextField *phone;




- (IBAction)save:(id)sender;
- (IBAction)search:(id)sender;
- (IBAction)remove:(id)sender;



@end

