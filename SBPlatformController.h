/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSMutableDictionary, NSString, NSDictionary;

@interface SBPlatformController : XXUnknownSuperclass {
	NSString* _currentConfigurationName;
	NSMutableDictionary* _currentConfiguration;
	NSMutableDictionary* _currentCapabilities;
	NSMutableDictionary* _regionalOverrideSoftwareBehaviors;
	NSDictionary* _discoveredCapabilities;
	int _currentLockdownState;
	BOOL _saveLocalePostActivation;
}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)systemBuildVersion;
-(id)infoForCapability:(id)capability;
-(id)defaultInfoForCapability:(id)capability;
-(id)hardwareInfoForCapability:(id)capability;
-(void)setValue:(id)value forCapability:(id)capability;
-(void)addCapabilities:(id)capabilities resetCapabilites:(id)capabilites;
-(BOOL)hasCapability:(id)capability;
-(id)enabledCapabilities;
-(BOOL)hasRestriction:(id)restriction;
-(BOOL)canDisplayHomescreenWallpaper;
-(id)platformName;
-(id)iconState;
-(void)_addIconListIdentifiers:(id)identifiers toSet:(id)set;
-(id)defaultDisplayIdentifiers;
-(BOOL)matchesPlatforms:(id)platforms;
-(id)localizedPlatformName;
-(BOOL)isInternalInstall;
-(BOOL)isCarrierInstall;
-(void)noteITunesStoreCapabilityChanged;
-(BOOL)capabililtyOverrideEnabledByPreference:(id)preference;
-(void)noteCapabilityOverrideMightHaveChanged:(id)changed setByPreference:(id)preference;
-(void)noteCapabilityOverridesMightHaveChanged;
-(void)noteDeveloperDeviceStateMightHaveChanged;
-(id)currentConfigurationName;
-(void)postCurrentConfiguration;
-(id)_copyConfigInfoWithName:(id)name;
-(id)_copyDefaultConfigInfo;
-(BOOL)allowSensitiveUI:(BOOL)ui hasInternalBundle:(BOOL)bundle;
-(BOOL)isCarrierInstall:(BOOL)install hasInternalBundle:(BOOL)bundle;
-(BOOL)allowYouTube;
-(BOOL)allowYouTubePlugin;
-(void)discoverCurrentConfiguration;
-(void)addTelephonyCapabilitiesAndPost:(BOOL)post;
-(CFBooleanRef)currentITunesStoreCapability;
-(void)noteConfigurationChangedWithKeys:(id)keys;
-(void)resetDefaultSoftwareBehaviorsAndPost:(BOOL)post;
-(void)setSoftwareBehavior:(id)behavior forKey:(id)key;
-(id)regionalOverrideSoftwareBehaviorForKey:(id)key;
-(void)lockdownStateChanged;
-(void)_iCloudRestoreDidEnd;
-(void)localeChanged;
-(void)setOriginalRegionFormatCountryCodeAndResetSoftwareBehaviorsIfNecessary;
@end

