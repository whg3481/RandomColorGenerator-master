//
//  RandomColorGenerator.h
//  RandomColorGenerator
//
//  Created by Mohammad Azam on 10/3/16.
//  Copyright © 2016 Mohammad Azam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// create a protocol called RandomColorGeneratorDelegate
// create a method in protocol randomColor with a single parameter UIColor
 // UIColor as shown below
// -(void) randomColor:(UIColor *) color;

@protocol RandomColorGeneratorDelegate

-(void) randomColor:(UIColor *) color;
-(void) sayhello;

@end



@interface RandomColorGenerator : NSObject
{
    
}

@property (nonatomic, weak) id<RandomColorGeneratorDelegate> delegate;
//I must generate the protocol so it does not argue and place it where it says delegate


-(void) generate; 

@end
