//
//  DVMPokemon.h
//  PokedexHybridiOS14
//
//  Created by Sergio Gamez on 8/29/17.
//  Copyright © 2017 Nick Reichard. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DVMPokemon : NSObject

-(instancetype)initWithName:(NSString *)name identifier:(NSInteger)identifier abilities:(NSArray<NSString *> *)abilities NS_DESIGNATED_INITIALIZER; 

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, readonly) NSInteger identifier; // primatives are the actual value
@property (nonatomic, copy, readonly) NSArray<NSString *> *abilities;

// The copy operation makes a copy of an object then changes the pointer to refer to its copy

@end

@interface DVMPokemon (JSONConvertible)

-(instancetype)initWithDictionary: (NSDictionary <NSString *, id> *)dictionary;


@end
