/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBulletinHeaderViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSMutableSet, UIImageView, SBBulletinLinenSegmentView;

@interface SBBulletinTableView : XXUnknownSuperclass <SBBulletinHeaderViewDelegate> {
	NSMutableSet* _visibleSectionHeaders;
	SBBulletinLinenSegmentView* _fadeOverlay;
	UIImageView* _fadeOverlayMask;
}
-(id)initWithFrame:(CGRect)frame linenView:(id)view;
-(void)dealloc;
-(id)visibleSectionHeaders;
-(void)setRasterizesFadeOverlay:(BOOL)overlay;
-(void)setLinenGradientAlpha:(float)alpha;
-(void)layoutSubviews;
-(void)headerViewWillAppear:(id)headerView;
-(void)headerViewWillDisappear:(id)headerView;
@end
