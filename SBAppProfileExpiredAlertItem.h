/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplicationIcon;

@interface SBAppProfileExpiredAlertItem : XXUnknownSuperclass <UIAlertViewDelegate> {
	SBApplicationIcon* _icon;
}
-(id)initWithIcon:(id)icon;
-(void)dealloc;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(BOOL)shouldShowInLockScreen;
-(BOOL)dismissOnLock;
@end

