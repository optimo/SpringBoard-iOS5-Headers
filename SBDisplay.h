/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, NSMapTable, NSHashTable;

@interface SBDisplay : XXUnknownSuperclass {
	NSMapTable* _displayValues;
	NSMapTable* _activationValues;
	NSMapTable* _deactivationValues;
	NSHashTable* _displayFlags;
	NSHashTable* _activationFlags;
	NSHashTable* _deactivationFlags;
	NSMutableSet* _suppressVolumeHudCategories;
	float _accelerometerSampleInterval;
	unsigned _disableIdleTimer;
	unsigned _expectsFaceContact : 1;
	unsigned _expectsFaceContactInLandscape : 1;
	unsigned _accelerometerDeviceOrientationChangedEventsEnabled : 1;
	unsigned _proximityEventsEnabled : 1;
	unsigned _showsProgress;
}
+(id)_defaultDisplayState;
+(void)setDefaultValue:(id)value forKey:(id)key displayIdentifier:(id)identifier;
+(id)defaultValueForKey:(id)key displayIdentifier:(id)identifier urlScheme:(id)scheme;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)displayIdentifier;
-(id)urlScheme;
-(id)_newValueTable;
-(id)_newFlagTable;
-(void)clearDisplaySettings;
-(void)setDisplaySetting:(unsigned)setting flag:(BOOL)flag;
-(void)setDisplaySetting:(unsigned)setting value:(id)value;
-(id)displayValue:(unsigned)value;
-(BOOL)displayFlag:(unsigned)flag;
-(void)clearActivationSettings;
-(void)setActivationSetting:(unsigned)setting flag:(BOOL)flag;
-(void)setActivationSetting:(unsigned)setting value:(id)value;
-(id)activationValue:(unsigned)value;
-(BOOL)activationFlag:(unsigned)flag;
-(void)clearDeactivationSettings;
-(void)setDeactivationSetting:(unsigned)setting flag:(BOOL)flag;
-(void)setDeactivationSetting:(unsigned)setting value:(id)value;
-(id)deactivationValue:(unsigned)value;
-(BOOL)deactivationFlag:(unsigned)flag;
-(void)activate;
-(void)launchSucceeded:(BOOL)succeeded;
-(void)deactivate;
-(void)deactivated;
-(void)deactivateAfterLocking;
-(void)kill;
-(void)_exitedCommon;
-(void)exitedAbnormally;
-(void)exitedNormally;
-(BOOL)allowsEventOnlySuspension;
-(int)defaultStatusBarStyle;
-(int)statusBarStyle;
-(int)statusBarStyleOverridesToCancel;
-(BOOL)defaultStatusBarHidden;
-(BOOL)statusBarHidden;
-(int)statusBarOrientation;
-(int)launchingInterfaceOrientationForCurrentOrientation;
-(int)launchingInterfaceOrientationForCurrentOrientation:(int)currentOrientation;
-(BOOL)isNowRecordingApplication;
-(int)effectiveStatusBarStyle;
-(void)setDisableIdleTimer:(BOOL)timer;
-(BOOL)disableIdleTimer;
-(double)autoDimTime;
-(double)autoLockTime;
-(void)setExpectsFaceContact:(BOOL)contact;
-(void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;
-(BOOL)expectsFaceContact;
-(BOOL)expectsFaceContactInLandscape;
-(void)setAccelerometerSampleInterval:(double)interval;
-(double)accelerometerSampleInterval;
-(void)setAccelerometerDeviceOrientationChangedEventsEnabled:(BOOL)enabled;
-(BOOL)accelerometerDeviceOrientationChangedEventsEnabled;
-(void)setProximityEventsEnabled:(BOOL)enabled;
-(BOOL)proximityEventsEnabled;
-(void)setShowsProgress:(BOOL)progress;
-(BOOL)showsProgress;
-(void)setSystemVolumeHUDEnabled:(BOOL)enabled forCategory:(id)category;
-(BOOL)showSystemVolumeHUDForCategory:(id)category;
-(void)handleLock:(BOOL)lock;
-(void)prepareForActivationOfDisplay:(id)display toHandleURL:(id)handleURL;
-(BOOL)suppressesNotifications;
-(id)description;
-(id)descriptionForDisplaySetting:(unsigned)displaySetting;
-(id)displaySettingsDescription;
-(id)descriptionForActivationSetting:(unsigned)activationSetting;
-(id)activationSettingsDescription;
-(id)descriptionForDeactivationSetting:(unsigned)deactivationSetting;
-(id)deactivationSettingsDescription;
@end

