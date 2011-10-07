/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSlidingAlertDisplay.h"
#import "SpringBoard-Structs.h"

@class SBActivationView, SBAwaySwipeGestureRecognizer, SBAwayViewPluginController, UIAlertView, UIButton, SBAwayInCallController, SBAwayBulletinListController, SBAwayDateView, SBAwayLockBar, UIView, SBAwayChargingView, NSTimer, SBAwayBuddyBackgroundView, NSDictionary, SBAlertImageView, TPBottomSingleButtonBar;

@interface SBAwayView : SBSlidingAlertDisplay {
	BOOL _isDimmed;
	BOOL _fullscreen;
	BOOL _alwaysFullscreen;
	BOOL _showingBlockedIndicator;
	BOOL _hasTelephony;
	BOOL _wasShowingAlertAtDismiss;
	BOOL _removingAlertAtUnlock;
	BOOL _awayPluginIsVisible;
	BOOL _ignoreFullScreenUpdates;
	BOOL _lockBarCurrentlyTracking;
	SBAwayChargingView* _chargingView;
	SBAwayDateView* _dateView;
	SBActivationView* _activationView;
	SBAlertImageView* _firewireWarningView;
	SBAwayViewPluginController* _awayPluginController;
	SBAwaySwipeGestureRecognizer* _gestureRecognizer;
	SBAwayBuddyBackgroundView* _buddyBackgroundView;
	SBAwayBulletinListController* _bulletinController;
	NSTimer* _mediaControlsTimer;
	NSTimer* _fullscreenTimer;
	NSTimer* _chargingViewTimer;
	NSDictionary* _nowPlayingInfo;
	BOOL _isPlaying;
	NSDictionary* _currentPluginFadeAnimationContext;
	NSTimer* _blockedStatusUpdateTimer;
	UIAlertView* _alertSheet;
	int _alertSheetPosition;
	SBAwayInCallController* _inCallController;
	SBAwayLockBar* _lockBar;
	TPBottomSingleButtonBar* _cancelSyncBar;
	UIButton* _infoButton;
	BOOL _cameraButtonShowing;
	UIView* _legalTextView;
}
+(id)newBottomBarForInstance:(id)instance;
+(id)lockLabels:(BOOL)labels fontSize:(float*)size;
-(void)_clearBlockedStatusUpdateTimer;
-(id)initWithFrame:(CGRect)frame;
-(void)layoutForInterfaceOrientation:(int)interfaceOrientation;
-(void)alertDisplayWillBecomeVisible;
-(void)postLockCompletedNotification:(BOOL)notification;
-(void)dealloc;
-(void)_postLockCompletedNotification;
-(void)finishedAnimatingIn;
-(void)dismiss;
-(void)performAdditionalDismissAnimations;
-(void)finishedAnimatingOut;
-(float)durationForOthersActivation;
-(void)setBottomLockBar:(id)bar;
-(void)noteAssistantWillAppear;
-(void)noteAssistantDidHide;
-(BOOL)shouldShowBottomBar;
-(BOOL)shouldAnimateIn;
-(BOOL)shouldAnimateIconsOut;
-(BOOL)isAnimating;
-(void)startAnimations;
-(void)stopAnimations;
-(void)resetForDeactivation;
-(void)showInfoButton;
-(void)hideInfoButton;
-(BOOL)isSupportedInterfaceOrientation:(int)orientation;
-(void)setLockoutUIVisible:(BOOL)visible mode:(int)mode;
-(void)updateUIForRestorationState:(int)restorationState;
-(void)updateUIForResetState:(int)resetState;
-(void)addFirewireWarningView;
-(void)removeFirewireWarningView;
-(BOOL)shouldShowChargingView;
-(BOOL)isShowingWallpaper;
-(void)_fixupFirstResponder;
-(void)dismissMediaControlsOverlaysAnimated:(BOOL)animated;
-(BOOL)canBecomeFirstResponder;
-(void)updateInterface;
-(void)_setMiddleSubviewsAlpha:(float)alpha;
-(void)setMiddleContentAlpha:(float)alpha;
-(void)setDimmed:(BOOL)dimmed;
-(BOOL)dimmed;
-(void)resetLockBar;
-(void)lockBarUnlocked:(id)unlocked freezeKnobInLockedPosition:(BOOL)lockedPosition;
-(void)lockBarUnlocked:(id)unlocked;
-(void)lockBarStartedTracking:(id)tracking;
-(void)lockBarStoppedTracking:(id)tracking;
-(void)lockBar:(id)bar textAlphaChangedForKnobDrag:(float)knobDrag;
-(void)_updateLockBarLabelByClearingFirst:(BOOL)first;
-(void)updateLockBarLabel;
-(void)alertWindowResizedFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame2;
-(id)currentAwayPluginController;
-(void)removePluginController:(BOOL)controller;
-(void)_setPluginController:(id)controller;
-(void)_finalizeAndClearPluginAnimationContext;
-(void)_pluginFadeInAnimationDidStop:(id)_pluginFadeInAnimation finished:(id)finished context:(void*)context;
-(void)_fullscreenAnimationStopped:(id)stopped finished:(id)finished context:(void*)context;
-(void)setFullscreen:(BOOL)fullscreen duration:(double)duration force:(BOOL)force;
-(void)setFullscreen:(BOOL)fullscreen duration:(double)duration;
-(BOOL)isFullscreen;
-(BOOL)isAlwaysFullscreen;
-(void)setAlwaysFullscreen:(BOOL)fullscreen;
-(void)setIgnoreFullScreenUpdates:(BOOL)updates;
-(id)bulletinController;
-(void)_setAwayViewGesturesEnabled:(BOOL)enabled;
-(void)windowGestureWasCompleted:(id)completed;
-(BOOL)shouldShowBlockedRedStatus;
-(void)_updateBlockedStatusLabel;
-(void)deviceUnlockCanceled;
-(void)deviceUnlockFailed;
-(void)showBlockedStatus;
-(void)removeBlockedStatus;
-(void)_updateBlockedStatus;
-(id)_currentTitleForDateView;
-(id)dateView;
-(void)removeDateView;
-(void)addDateView;
-(void)awayDateViewDidChangeTitle:(id)awayDateView;
-(id)buddyBackgroundView;
-(void)addBuddyBackgroundView;
-(void)removeBuddyBackgroundView;
-(id)inCallController;
-(BOOL)shouldShowInCallInfo;
-(void)updateInCallInfo;
-(CGAffineTransform)slideTopBarToVisible:(BOOL)visible;
-(void)_insertBulletinView;
-(void)_positionBulletinViewForOrientation:(int)orientation;
-(void)hideBulletinView;
-(void)showBulletinView;
-(void)animateToHidingDeviceLockFinished;
-(void)setShowingDeviceLock:(BOOL)lock duration:(float)duration completion:(id)completion;
-(void)showAlertSheet:(id)sheet;
-(void)removeAlertSheet;
-(void)slideAlertSheetOut:(BOOL)anOut direction:(BOOL)direction duration:(float)duration;
-(void)_recenterAlertSheet;
-(id)chargingView;
-(void)showChargingView;
-(void)hideChargingView;
-(void)updateChargingView;
-(void)startChargingViewTimer;
-(void)_chargingViewTimerFired;
-(void)_didFadeChargingView;
-(void)clearChargingViewTimer;
-(void)_hideChargingViewAndClearTimer;
-(void)clearMediaControlsTimer;
-(void)restartMediaControlsTimer;
-(void)restartMediaControlsTimerIfNecessary;
-(void)hideMediaControls;
-(void)_hideMediaControls;
-(void)showMediaControls;
-(void)toggleMediaControls;
-(BOOL)isShowingMediaControls;
-(BOOL)isMediaControlsShowingOverlays;
-(BOOL)isPlaying;
-(void)toggleCameraButton;
-(void)showCameraButton;
-(void)hideCameraButton;
-(void)setBarsHiddenForCamera:(BOOL)camera;
-(void)setPlaying:(BOOL)playing;
-(BOOL)hasNowPlayingInfo;
-(id)_topBarLCDControlsImage;
-(void)updateTopBarBackground;
-(void)showSyncingBottomBar:(BOOL)bar;
-(void)hideSyncingBottomBar:(BOOL)bar;
-(void)updateNowPlayingInfo:(id)info;
-(void)enableOrDisableNowPlayingPlugin;
-(void)cancelFullscreenTimer;
-(void)restartFullscreenTimer;
-(void)_fullscreenTimerFired;
-(void)restartFullscreenTimerIfNecessary;
-(BOOL)handleMenuButtonTap;
-(void)didMoveToWindow;
-(void)animateToShowingDeviceLock:(BOOL)showingDeviceLock duration:(float)duration;
-(void)_networkTetheringStateChanged:(id)changed;
-(void)_handleKeyEvent:(GSEventRef)event;
-(void)_initializeLegalTextOverlay;
-(void)_layoutLegalTextOverlay:(int)overlay;
@end

