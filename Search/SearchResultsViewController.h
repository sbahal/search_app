//
//  SearchResultsViewController.h
//  Search
//
//  Created by Sanchit Bahal on 09/10/12.
//  Copyright (c) 2012 ThoughtWorks Technologies (India) Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchResultsViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIWebView *searchResults;
- (void)setSearchText:(NSString *)searchText;

@end
