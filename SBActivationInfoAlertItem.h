/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDismissOnlyAlertItem.h"

@class NSString, UITextView;

@interface SBActivationInfoAlertItem : SBDismissOnlyAlertItem {
	UITextView* _textView;
	NSString* _meid;
	NSString* _imei;
	NSString* _iccid;
	float _alertHeight;
}
+(id)activeItem;
-(id)init;
-(void)dealloc;
-(void)didPresentAlertView:(id)view;
-(void)_updateTextView;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)_simStatusChanged:(id)changed;
-(void)willActivate;
-(void)didDeactivateForReason:(int)reason;
-(BOOL)forcesModalAlertAppearance;
-(void)cleanPreviousConfiguration;
-(BOOL)allowInSetup;
@end

