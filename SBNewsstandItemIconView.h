/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBNewsstandItemIconViewBase.h"

@class SBDownloadingProgressBar, UILabel, UIView;

@interface SBNewsstandItemIconView : SBNewsstandItemIconViewBase {
	UIView* _iconTransformView;
	SBDownloadingProgressBar* _progressBar;
	UILabel* _indexLabel;
	unsigned _newsstandIndex;
}
+(CGSize)defaultIconSize;
+(BOOL)allowsRecycling;
+(id)createBadgeLabelImageAndGetTextCenterPoint:(CGPoint*)point;
+(float)_badgeLabelFontSize;
+(CGPoint)badgeLabelCenterPoint;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithDefaultSize;
-(void)dealloc;
-(void)prepareForRecycling;
-(void)positionCloseBoxOfType:(int)type;
-(id)createShadowImageView;
-(void)applyIconImageTransform:(CATransform3D)transform duration:(float)duration delay:(float)delay;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)positionIconImageView;
-(void)setIsGrabbed:(BOOL)grabbed;
-(Class)_labelClass;
-(void)positionLabel;
-(CGRect)defaultFrameForProgressBar;
-(void)_updateLabelVisibility;
-(void)_removeProgressBar;
-(void)_updateProgressBar;
-(void)iconAccessoriesDidUpdate:(id)iconAccessories;
-(id)_superviewForBadge;
-(id)_overriddenBadgeTextForText:(id)text;
-(float)_badgeHorizontalPadding;
-(float)_badgeVerticalPadding;
-(CGRect)_adjustProspectiveBadgeFrame:(CGRect)frame fromView:(id)view toView:(id)view3;
-(void)setNewsstandIndex:(unsigned)index;
@end

