//
//  ViewController.m
//  RandomColorGenerator
//
//  Created by Mohammad Azam on 10/3/16.
//  Copyright © 2016 Mohammad Azam. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    RandomColorGenerator *r = [[RandomColorGenerator alloc] init];
    r.delegate = self;
    [r generate];
    
    // Do any additional setup after loading the view, typically from a nib.
}

-(void) sayhello
{
    
}

-(void) randomColor:(UIColor *)color
{
    self.view.backgroundColor = color;

}
//[randomcolorgenerator]

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
