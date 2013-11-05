//
//  TileSpace.h
//  MazeGame
//
//  Created by Jerry Jei-Rui Bao on 10/31/13.
//
//

#import "CCLayer.h"

@interface TileSpace : CCLayer {
    bool isDoor;
    bool isKey;
    bool isCheckpoint;
    int numStepsAllowed;
}

-(id) initWithDoor:(bool)d initWithKey:(bool)k initWithCheckpoint:(bool)c initWithNumStepsAllowed:(int)num;

@end
