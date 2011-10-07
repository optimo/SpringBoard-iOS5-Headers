/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "UIWindowDelegate.h"

@class UIWindow, UIView;
@protocol SBSwitcherPopoverWindowControllerDelegate;

@interface SBSwitcherPopoverWindowController : XXUnknownSuperclass <UIWindowDelegate> {
	UIWindow* _popoverWindow;
	UIView* _popoverRootView;
	BOOL _popoverVisible;
	id _delegate;
}
@property(readonly, assign, nonatomic) UIView* rootView;
@property(assign, nonatomic) id<SBSwitcherPopoverWindowControllerDelegate> delegate;
@property(readonly, assign, nonatomic) BOOL popoverVisible;
@property(readonly, assign, nonatomic) UIWindow* window;
+(id)sharedInstance;
-(void)dealloc;
-(void)prepareAndPresentPopoverForFrame:(CGRect)frame inView:(id)view delegate:(id)delegate withPresentationBlock:(id)presentationBlock;
-(void)rotatePopoverWindowToOrientation:(int)orientation;
-(void)cleanupPopover;
-(void)willRotateToOrientation:(int)orientation;
-(void)didRotateFromOrientation:(int)orientation;
@end

