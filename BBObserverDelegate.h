/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"
#import "SpringBoard-Structs.h"


@protocol BBObserverDelegate <NSObject>
@optional
-(void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
-(void)observer:(id)observer modifyBulletin:(id)bulletin;
-(void)observer:(id)observer removeBulletin:(id)bulletin;
-(void)observer:(id)observer updateSectionOrderRule:(unsigned)rule;
-(void)observer:(id)observer updateSectionOrder:(id)order;
-(void)observer:(id)observer updateSectionInfo:(id)info;
-(void)observer:(id)observer noteSectionParametersChanged:(id)changed;
-(void)observer:(id)observer purgeReferencesToBulletinID:(id)bulletinID;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)observer;
-(BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)observer;
-(id)observer:(id)observer thumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
-(id)observer:(id)observer multipleThumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
-(id)observer:(id)observer composedAttachmentImageForType:(int)type thumbnailData:(id)data key:(id)key;
-(CGSize)observer:(id)observer composedAttachmentSizeForType:(int)type thumbnailWidth:(float)width height:(float)height key:(id)key;
@end

