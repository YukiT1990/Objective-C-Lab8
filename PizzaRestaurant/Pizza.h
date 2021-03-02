//
//  Pizza.h
//  PizzaRestaurant
//
//  Created by Yuki Tsukada on 2021/03/02.
//  Copyright © 2021 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "PizzaSize.h"

NS_ASSUME_NONNULL_BEGIN

@interface Pizza : NSObject

enum PizzaSize {small, medium, large};

@property enum PizzaSize size;
@property NSArray *toppings;

- (instancetype) init: (enum PizzaSize) size toppings: (NSArray *) toppings;

- (NSString *) returnSize;
- (NSString *) returnToppings;



@end

NS_ASSUME_NONNULL_END
