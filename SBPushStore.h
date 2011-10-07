/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBPushStore : XXUnknownSuperclass {
	dispatch_queue_s* _readQueue;
	dispatch_queue_s* _writeQueue;
}
+(void)initialize;
+(id)sharedInstance;
+(void)migratePushStore;
-(id)init;
-(void)noteInstalledAppsChanged;
-(id)_notificationStoreFilenameForBundleID:(id)bundleID;
-(BOOL)_notificationDataExistsAtPath:(id)path;
-(id)_allNotificationDataFromPath:(id)path;
-(id)_allNotificationsFromPath:(id)path;
-(BOOL)_saveNotificationList:(id)list toPath:(id)path;
-(void)registerAppForNotificationsWithBundleID:(id)bundleID;
-(void)_removeNotificationsForBundleID:(id)bundleID andSendNotification:(id)notification;
-(void)unregisterAppForNotificationsWithBundleID:(id)bundleID;
-(void)clearNotificationsForBundleID:(id)bundleID;
-(void)_saveNotificationWithMessage:(id)message soundName:(id)name actionText:(id)text badge:(id)badge userInfo:(id)info launchImage:(id)image fullDetails:(id)details soundIsRingtone:(BOOL)ringtone isRemoteNotification:(BOOL)notification forBundleID:(id)bundleID;
-(void)saveRemoteNotificationWithMessage:(id)message soundName:(id)name actionText:(id)text badge:(id)badge userInfo:(id)info launchImage:(id)image forBundleID:(id)bundleID;
-(void)saveLocalNotification:(id)notification forBundleID:(id)bundleID;
-(void)removeLocalNotification:(id)notification forBundleID:(id)bundleID;
-(void)removeAllLocalNotificationsForBundleID:(id)bundleID;
-(void)makeTestNotificationStores;
-(id)savedNotificationDataForBundleID:(id)bundleID;
-(id)bundleIDsWithUpdatesSince:(id)updatesSince;
-(id)lastUpdateDateForBundleID:(id)bundleID;
-(id)allLocalNotificationEnabledBundleIDs;
-(id)allNotificationEnabledBundleIDs;
-(unsigned)effectivePushSettingsForBundleID:(id)bundleID;
-(void)setEffectivePushSettings:(unsigned)settings forBundleID:(id)bundleID;
-(BOOL)prepareToSupportLocalNotificationsTypes:(int)supportLocalNotificationsTypes forBundleID:(id)bundleID;
-(void)dealloc;
@end

