/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, BBBulletin;

@interface SBBulletinModalAlert : XXUnknownSuperclass {
	BBBulletin* _bulletin;
	NSArray* _buttons;
	BOOL _playedSound;
	SBBulletinModalAlert* _superseded;
}
@property(retain, nonatomic) NSArray* buttons;
-(id)initWithBulletin:(id)bulletin;
-(id)initWithBulletin:(id)bulletin supersededAlert:(id)alert;
-(void)dealloc;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)dismiss:(int)dismiss;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)willPresentAlertView:(id)view;
-(void)didPresentAlertView:(id)view;
-(void)willDeactivateForReason:(int)reason;
-(BOOL)shouldShowInLockScreen;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
@end

