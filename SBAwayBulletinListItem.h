/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray, UIImage, BBBulletin, NSDate;

@interface SBAwayBulletinListItem : XXUnknownSuperclass {
	NSMutableArray* _bulletins;
	int _personID;
	NSString* _contactInfo;
	BBBulletin* _activeBulletin;
	NSDate* _sortDate;
	NSDate* _displayDate;
	NSString* _message;
	UIImage* _listItemImage;
}
-(id)initWithBulletin:(id)bulletin;
-(void)dealloc;
-(id)bulletinWithID:(id)anId;
-(void)_update;
-(void)addBulletin:(id)bulletin;
-(void)removeBulletin:(id)bulletin;
-(void)modifyBulletin:(id)bulletin;
-(BOOL)containsBulletinWithID:(id)anId;
-(id)sortDate;
-(id)bulletins;
-(id)activeBulletin;
-(id)message;
-(id)title;
-(id)date;
-(id)subtitle;
-(unsigned)maxMessageLines;
-(id)description;
-(id)iconImage;
-(id)attachmentImageForKey:(id)key;
-(id)attachmentText;
-(BOOL)hasSamePersonAsBulletin:(id)bulletin;
-(BOOL)canCoalesceWithBulletin:(id)bulletin;
@end

