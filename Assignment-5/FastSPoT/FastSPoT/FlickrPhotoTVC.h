//
//  FlickrPhotoTVC.m
//  FastSPoT
//
//  Created by CS193p Instructor.
//  Copyright (c) 2013 Stanford University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FlickrPhotoTVC : UITableViewController

// the Model for this VC
// an array of dictionaries of Flickr information
// obtained using Flickr API
// (e.g. FlickrFetcher will obtain such an array of dictionaries)
@property (nonatomic, strong) NSArray *photos; // of NSDictionary

@property (nonatomic, strong) NSString *cellIdentifier;

@end
