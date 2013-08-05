//
//  Annotation.h
//  Trvlogue
//
//  Created by Rohan Kapur on 24/3/13.
//  Copyright (c) 2013 Rohan Kapur. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <MapKit/MapKit.h>

@interface Annotation : NSObject <MKAnnotation>

@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic, strong) NSString *title;

@end