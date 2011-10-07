/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SBAwayListUnlockActionContext : XXUnknownSuperclass {
	NSString* _lockLabel;
	NSString* _shortLockLabel;
	id _unlockAction;
	NSString* _bulletinID;
	float _fontsize;
	BOOL _launchActionCanBypassPinLock;
	BOOL _canBypassPinLock;
}
@property(assign, nonatomic) BOOL canBypassPinLock;
+(id)unlockActionContextForBulletin:(id)bulletin;
+(id)unlockActionContextForAlertItem:(id)alertItem;
-(id)_initWithLockLabel:(id)lockLabel shortLockLabel:(id)label unlockAction:(id)action bulletinID:(id)anId;
-(id)_initWithLockLabel:(id)lockLabel shortLockLabel:(id)label unlockAction:(id)action bulletinID:(id)anId fontSize:(float)size;
-(void)dealloc;
-(id)unlockAction;
-(id)lockLabel;
-(id)shortLockLabel;
-(id)bulletinID;
-(float)lockLabelFontSize;
@end

