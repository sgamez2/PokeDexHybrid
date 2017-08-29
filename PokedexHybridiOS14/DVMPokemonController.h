//
//  DVMPokemonController.h
//  PokedexHybridiOS14
//
//  Created by Sergio Gamez on 8/29/17.
//  Copyright © 2017 Nick Reichard. All rights reserved.
//

#import <Foundation/Foundation.h>
@class DVMPokemon;

@interface DVMPokemonController : NSObject

NS_ASSUME_NONNULL_BEGIN

+ (void)fetchPokemonForSearchTerm: (NSString *)searchTerm completion: (void ( ^_Nullable) (DVMPokemon * _Nullable))completion;


@end

NS_ASSUME_NONNULL_END

// Nulability

// 1) _Nullable: means it can be nil
// 2) nonnull: means its not optional. Can't be nil
// 3) null_unspecified* - implicilty unwrapped optional. This is the default
// 4) null_resettable: the value can never be nil when read, but you can set it to know a value. this is only for properties.

/*
 
 @property (nonatomic, strong, nonnull) NSString *firstName;
 @property (nonatomic, strong, nullable) NSString *middleName;
 @property (nonatomic, strong, nonnull) NSString *lastName;

*/
