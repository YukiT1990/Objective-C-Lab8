//
//  Kitchen.h
//  PizzaRestaurant
//
//  Created by Steven Masuch on 2014-07-19.
//  Copyright (c) 2014 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Pizza.h"

@interface Kitchen : NSObject

- (enum PizzaSize) pizzaSizeConverter: (NSString *) size;

- (Pizza *)makePizzaWithSize:(enum PizzaSize)size toppings:(NSArray *)toppings;

+ (Pizza *) largePepperoni;
+ (Pizza *) meatLoversWithSize: (enum PizzaSize) size;

@end
