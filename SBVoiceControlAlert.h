/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"


@interface SBVoiceControlAlert : SBAlert {
	struct {
		unsigned shouldBeActivated : 1;
		unsigned isReadyToBeActivated : 1;
		unsigned hasBeenActivated : 1;
	} _voiceControlFlags;
}
+(id)pendingOrActiveAlert;
+(void)registerForAlerts;
+(void)unregisterForAlerts;
+(BOOL)shouldEnterVoiceControl;
+(BOOL)resetVoiceControlIfNecessary:(BOOL)necessary;
+(void)bluetoothDeviceRequestedVoiceControl:(id)control;
+(void)bluetoothDeviceTerminatedVoiceControl:(id)control;
+(BOOL)_bluetoothDevicesPickable;
+(void)_configureSession:(id)session forAlert:(id)alert;
+(void)setNextRecognitionAudioInputPaths:(id)paths;
+(void)_setNextRecognitionAudioInputPathForSession:(id)session resetting:(BOOL)resetting;
-(void)_resign;
-(void)_makeActive;
-(id)_session;
-(void)_workspaceActivate;
-(BOOL)recognitionSessionWillBeginAction:(id)recognitionSession;
-(void)_prime;
-(void)_setRoutingAttributesForWiredHeadset:(BOOL)wiredHeadset;
-(id)init;
-(id)initFromWiredHeadsetButton;
-(id)initFromBluetoothDevice:(id)bluetoothDevice;
-(BOOL)allowsEventOnlySuspension;
-(void)deactivate;
-(void)deactivateAfterLocking;
-(void)activate;
-(id)initFromMenuButton;
-(void)activateWhenReady;
-(void)cancelIfNotActivated;
-(void)cancel;
-(void)dealloc;
-(void)_proximityChanged:(id)changed;
-(void)handleHeadsetButtonUpFromActivation:(BOOL)activation;
-(BOOL)handleMenuButtonTap;
-(double)autoDimTime;
-(id)alertDisplayViewWithSize:(CGSize)size;
@end

