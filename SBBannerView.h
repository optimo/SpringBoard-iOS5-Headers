/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UILabel, UIView, SBBulletinBannerItem;

@interface SBBannerView : XXUnknownSuperclass {
	SBBulletinBannerItem* _item;
	UIView* _iconView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	float _imageWidth;
	UIImageView* _bannerView;
	UIView* _underlayView;
}
-(id)initWithItem:(id)item;
-(id)item;
-(void)dealloc;
-(void)_createSubviewsWithBannerImage:(id)bannerImage;
-(void)layoutSubviews;
-(id)_bannerMaskStretchedToWidth:(float)width;
-(id)_bannerImageWithAttachmentImage:(id)attachmentImage;
@end

