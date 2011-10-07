/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSwitcherPopoverWindowControllerDelegate.h"
#import "UIPrintStatusDelegate.h"
#import "UIStatusBarStyleDelegate.h"
#import "UINavigationControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UITransitionView, SBAppSwitcherController, UIPrintStatusViewController, UIView, UIStatusBar;

@interface SBPrintStatusController : XXUnknownSuperclass <UIPrintStatusDelegate, UINavigationControllerDelegate, UIStatusBarStyleDelegate, SBSwitcherPopoverWindowControllerDelegate> {
	SBAppSwitcherController* _switcherController;
	UIPrintStatusViewController* _printStatusController;
	int _numPrintJobs;
	BOOL _dismissingImmediately;
	BOOL _printViewVisible;
	UIView* _rootView;
	UITransitionView* _transitionView;
	UIStatusBar* _fakeStatusBar;
	BOOL _savePopoverWindowForRotation;
	BOOL _showPopoverWhenRotationComplete;
}
@property(readonly, assign, nonatomic) int numPrintJobs;
-(id)initWithSwitcherController:(id)switcherController;
-(void)dealloc;
-(BOOL)printStatusViewIsShowing;
-(void)activatePrintStatusView;
-(void)activatePrintStatusPopoverForView:(id)view;
-(void)dismissPrintStatusView;
-(void)_updateStateForNumberOfJobs:(int)jobs;
-(void)_printStateChanged:(id)changed;
-(void)_cleanupPrintController;
-(void)_cleanupPopoverViews:(BOOL)views;
-(void)_dismissPrintStatus;
-(void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;
-(double)durationForTransition:(int)transition;
-(void)printStatusViewController:(id)controller didDismissWithCancel:(BOOL)cancel;
-(void)printStatusViewControllerJobDidCancel:(id)printStatusViewControllerJob;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
-(void)statusBar:(id)bar willAnimateFromHeight:(float)height toHeight:(float)height3 duration:(double)duration animation:(int)animation;
-(void)statusBar:(id)bar didAnimateFromHeight:(float)height toHeight:(float)height3 animation:(int)animation;
-(void)switcherPopoverController:(id)controller willRotateToOrientation:(int)orientation duration:(double)duration;
-(void)switcherPopoverController:(id)controller didRotateFromInterfaceOrientation:(int)interfaceOrientation;
@end

