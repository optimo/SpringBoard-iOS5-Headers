/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBFolderIconObserver.h"
#import "SBIconView.h"

@class SBDownloadingProgressBar, NSMutableSet, SBFolderIcon, UIImageView;

@interface SBFolderIconView : SBIconView <SBFolderIconObserver> {
	UIImageView* _iconBackgroundView;
	UIImageView* _iconForegroundView;
	SBDownloadingProgressBar* _progressBar;
	NSMutableSet* _animatingIcons;
	unsigned _currentScrollRow;
	BOOL _skippingGridIcons;
	float _miniIconVisibleOffset;
}
@property(readonly, retain) SBFolderIcon* folderIcon;
-(void)dealloc;
-(void)setFolderIcon:(id)icon;
-(void)setIcon:(id)icon;
-(void)noteIconAdded:(id)added;
-(void)setIconScrollPosition:(int)position animated:(BOOL)animated;
-(void)setIsOverlapping:(BOOL)overlapping;
-(CGRect)rectForMiniIconAtIndex:(unsigned)index;
-(id)_folderBackgroundImage;
-(id)_folderForegroundImage;
-(id)snapshotSettings;
-(id)iconImageSnapshot:(id)snapshot;
-(void)_positionMiniGrid;
-(void)positionIconImageView;
-(CGAffineTransform)transformToMakeIconBorderExpandToSizeOfDropGlow;
-(void)showDropGlow:(BOOL)glow;
-(CGRect)frameForIconOverlay;
-(void)placeGhostlyImageView;
-(void)setGhostly:(BOOL)ghostly requester:(int)requester;
-(void)setPartialGhostly:(float)ghostly requester:(int)requester;
-(id)progressBar;
-(id)iconBackgroundView;
-(void)positionCloseBoxOfType:(int)type;
-(id)folder;
-(id)description;
-(BOOL)allowsTapWhileEditing;
-(BOOL)delaysUnhighlightWhenTapped;
-(double)grabDurationForEvent:(id)event;
-(void)_updateProgressBar;
-(void)prepareForRecycling;
-(void)iconImageDidUpdate:(id)iconImage;
-(void)iconAccessoriesDidUpdate:(id)iconAccessories;
-(void)containedIconImageDidUpdate:(id)containedIconImage;
@end

