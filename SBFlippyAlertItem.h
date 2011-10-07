/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIAlertView;

@interface SBFlippyAlertItem : XXUnknownSuperclass {
	UIAlertView* _frontAlertSheet;
	UIAlertView* _backAlertSheet;
	BOOL _showingBack;
	BOOL _isLocked;
	BOOL _requirePasscode;
}
-(Class)frontAlertSheetClass;
-(Class)backAlertSheetClass;
-(Class)alertSheetClass;
-(id)newFrontAlertSheet;
-(id)newBackAlertSheet;
-(id)frontAlertSheet;
-(id)backAlertSheet;
-(id)alertSheet;
-(void)dealloc;
-(void)cleanPreviousConfiguration;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)configureFront:(BOOL)front requirePasscodeForActions:(BOOL)actions;
-(void)configureBack:(BOOL)back requirePasscodeForActions:(BOOL)actions;
-(void)flip;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
@end

