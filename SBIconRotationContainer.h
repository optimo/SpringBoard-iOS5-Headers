/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, SBIcon;

@interface SBIconRotationContainer : XXUnknownSuperclass {
	UIView* _startSnapshot;
	UIView* _endSnapshot;
	SBIcon* _icon;
	BOOL _shouldCrossfade;
	int _toOrientation;
	int _fromOrientation;
	unsigned _startIndex;
	unsigned _endIndex;
}
@property(retain, nonatomic) SBIcon* icon;
-(void)dealloc;
-(void)setStartIcon:(id)icon endIcon:(id)icon2 inIconList:(id)iconList fromOrientation:(int)orientation toOrientation:(int)orientation5;
-(void)setOrigin:(CGPoint)origin;
-(void)prepareToCrossfade;
-(void)crossfadeWithDuration:(double)duration inIconList:(id)iconList;
-(id)newSnapshot:(id)snapshot includingShadows:(BOOL)shadows;
@end

