/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBDeviceLockViewDelegate
@optional
-(void)deviceLockViewPasscodeDidChange:(id)deviceLockViewPasscode;
-(void)deviceLockViewPasscodeEntered:(id)entered;
-(void)deviceLockViewCancelButtonPressed:(id)pressed;
-(void)deviceLockViewEmergencyCallButtonPressed:(id)pressed;
-(void)deviceLockViewWillAnimateMinimization:(id)deviceLockView;
-(void)deviceLockViewWillAnimateMaximization:(id)deviceLockView;
@end

