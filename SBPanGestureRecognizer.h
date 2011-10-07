/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBFluidSlideGestureRecognizer.h"


@interface SBPanGestureRecognizer : SBFluidSlideGestureRecognizer {
	float _arcCenter;
	float _arcSize;
	BOOL _recognizesHorizontalPanning;
	BOOL _recognizesVerticalPanning;
}
-(id)init;
-(id)initForHorizontalPanning;
-(id)initForVerticalPanning;
-(float)computeIncrementalGestureMotion:(SBGestureContextRef)motion;
-(void)updateForBeganOrMovedTouches:(SBGestureContextRef)beganOrMovedTouches;
@end

