//
//  Grid.h
//  GameOfLife
//
//  Created by Xiaofen Liu on 1/26/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite


@property (nonatomic, assign) int generation;
@property (nonatomic, assign) int totalAlive;

- (void)evolveStep;
- (void)countNeighbors;
- (void)updateCreatures;

@end
