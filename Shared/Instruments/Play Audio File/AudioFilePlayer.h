//
//  AudioFilePlayer.h
//  Objective-C Sound Example
//
//  Created by Aurelius Prochazka on 6/16/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "OCSInstrument.h"

@interface AudioFilePlayer : OCSInstrument

@property (nonatomic, strong) OCSEventProperty *speed;
#define kSpeedMin 0.5
#define kSpeedMax 2.0 

@end
