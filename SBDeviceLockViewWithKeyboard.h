/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBDeviceLockView.h"

@class UIKeyboard;

@interface SBDeviceLockViewWithKeyboard : SBDeviceLockView {
	UIKeyboard* _keyboard;
	BOOL _isAnimating;
	BOOL _wasMinimizedWhenAnimationStarted;
	BOOL _triedToMinMaxWhileRotating;
	BOOL _previousKeyboardShowedInlineCandidates;
}
-(id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;
-(void)dealloc;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)keypadView;
-(BOOL)isKeypadMinimized;
-(void)setMinimized:(BOOL)minimized;
-(void)minimize;
-(void)maximize;
-(void)returnKeyPressed:(id)pressed;
-(CGRect)keyboardFrameForInterfaceOrientation:(int)interfaceOrientation;
-(void)setInterfaceOrientation:(int)orientation;
-(void)willAnimateToInterfaceOrientation:(int)interfaceOrientation;
-(void)animateToInterfaceInterfaceOrientation:(int)interfaceInterfaceOrientation;
-(void)didAnimateToInterfaceOrientation:(int)interfaceOrientation;
-(void)geometryChanged:(id)changed;
-(void)_layoutForCurrentOrientation;
-(void)_layoutEntryView;
-(void)_acceptOrCancelReturnKeyPress;
@end

