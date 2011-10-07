/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableArray, SBWeeApp, NSDate;

@interface SBBulletinListSection : XXUnknownSuperclass {
	unsigned _sectionType;
	SBWeeApp* _weeApp;
	NSMutableArray* _bulletins;
	NSArray* _sortDescriptors;
	NSDate* _lastSortDate;
}
@property(retain, nonatomic) SBWeeApp* weeApp;
@property(retain, nonatomic) NSArray* sortDescriptors;
-(BOOL)isWeeAppSection;
-(BOOL)isBulletinSection;
-(unsigned)bulletinCount;
-(BOOL)hasClearableBulletins;
-(id)lastSortDate;
-(id)initWithSectionType:(unsigned)sectionType;
-(void)dealloc;
-(unsigned)_indexForNewBulletin:(id)newBulletin;
-(unsigned)indexOfBulletinID:(id)bulletinID;
-(unsigned)addBulletin:(id)bulletin;
-(unsigned)removeBulletin:(id)bulletin;
-(id)bulletinAtIndex:(unsigned)index;
@end

