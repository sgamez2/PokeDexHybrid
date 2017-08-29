//
//  DVMPokemon.m
//  PokedexHybridiOS14
//
//  Created by Sergio Gamez on 8/29/17.
//  Copyright © 2017 Nick Reichard. All rights reserved.
//

#import "DVMPokemon.h"

@implementation DVMPokemon

- (instancetype)initWithName:(NSString *)name identifier:(NSInteger)identifier abilities:(NSArray<NSString *> *)abilities
{
    self = [super init];
    if (self) {
        _name = [name copy];
        _identifier = identifier;
        _abilities = [abilities copy];
    }
    return self;
}

// - init must be overriden since its the designated initilizar for the super class.

-(instancetype)init
{
    return [self initWithName:@"" identifier:0 abilities: @[]];
}

@end

@implementation DVMPokemon (JSONConvertible)

-(instancetype)initWithDictionary:(NSDictionary<NSString *,id> *)dictionary
{
    NSString *name = dictionary[@"name"];
    NSInteger identifer = [dictionary[@"id"] integerValue];
    NSArray *abilitiesDictionaryArray = dictionary[@"abilities"];
    
    NSMutableArray<NSString *> *abilities = [[NSMutableArray alloc] init];
    
    for (NSDictionary *abilityDictionary in abilitiesDictionaryArray) {
        NSDictionary *nestedDictionary = abilityDictionary[@"ability"];
        
        NSString *abilityName = nestedDictionary[@"name"];
        
        [abilities addObject:abilityName];
    }
    
    return [self initWithName:name identifier:identifer abilities:abilities];
}

@end
