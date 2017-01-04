//
//  ASTableNode+BFRReorder.h
//  BFRTableReorder
//
//  Created by Jordan Morgan on 9/14/16.
//  Copyright © 2016 Buffer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BFRReorderController.h"

@interface ASTableNode (BFRReorder)


/**
 The primary controller for the reordering operations.
 */
@property (nonatomic, weak, nullable) BFRReorderController *reorder;

@end
