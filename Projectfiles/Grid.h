//
//  Grid.h
//  MazeGame
//
//  Created by Jerry Jei-Rui Bao on 10/30/13.
//
//

#import "CCLayer.h"

@interface Grid : CCLayer <UIAlertViewDelegate> {
    NSMutableArray* gameSpace;
    int playerLocX;
    int playerLocY;
    int checkpointX;
    int checkpointY;
    int maxX;
    int maxY;
    int numTilesLeft;
    bool hasCheckpoint;
    bool hasKey;
    NSString* levelFile;
}

-(void) initLevel: (NSString*) levelFile;
-(void) draw;
-(void) update: (ccTime) delta;

@end
