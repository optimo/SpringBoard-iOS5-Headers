/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBNowPlayingBarMediaControlsView, UIButton, UIImageView, UISlider, SBIconView, UIView;

@interface SBNowPlayingBarView : XXUnknownSuperclass {
	int _toggleType;
	UIView* _toggleButtonContainer;
	UIButton* _toggleButton;
	UISlider* _brightnessSlider;
	UISlider* _volumeSlider;
	UIImageView* _brightnessImage;
	UIImageView* _volumeImage;
	SBNowPlayingBarMediaControlsView* _mediaView;
	SBIconView* _nowPlayingIconView;
}
@property(readonly, assign, nonatomic) UIButton* toggleButton;
@property(readonly, assign, nonatomic) UISlider* brightnessSlider;
@property(readonly, assign, nonatomic) UISlider* volumeSlider;
@property(readonly, assign, nonatomic) SBNowPlayingBarMediaControlsView* mediaView;
@property(retain, nonatomic) SBIconView* nowPlayingIconView;
@property(assign, nonatomic) BOOL marqueeRunning;
@property(readonly, assign, nonatomic) UIButton* airPlayButton;
@property(assign, nonatomic) int toggleType;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_layoutForiPhone;
-(void)_layoutForiPad;
-(void)_updateToggleButton;
-(void)showAudioRoutesPickerButton:(BOOL)button;
-(void)showVolume:(BOOL)volume;
@end

