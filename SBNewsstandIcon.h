/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFolderIcon.h"
#import "SpringBoard-Structs.h"


@interface SBNewsstandIcon : SBFolderIcon {
}
-(id)displayName;
-(id)leafIdentifier;
-(id)folder;
-(unsigned)_maxIcons;
-(float)_miniIconSize;
-(float)_miniIconGap;
-(id)croppedImageForIcon:(id)icon;
-(CGSize)_sizeOfMiniIconGridWithRows:(unsigned)rows;
-(CGRect)_rectForMiniIconImage:(id)miniIconImage atIndex:(unsigned)index;
-(void)launchFromViewSwitcher;
@end

