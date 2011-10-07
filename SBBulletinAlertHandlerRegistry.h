/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBulletinAlertHandlerRegistry.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@protocol SBBulletinAlertHandlerRegistry
-(void)addAlertHandler:(id)handler forSection:(id)section;
@end

@interface SBBulletinAlertHandlerRegistry : XXUnknownSuperclass <SBBulletinAlertHandlerRegistry> {
	NSMutableDictionary* _handlersBySectionID;
}
-(id)init;
-(void)dealloc;
-(id)alertHandlersForSection:(id)section;
-(void)addAlertHandler:(id)handler forSection:(id)section;
@end

