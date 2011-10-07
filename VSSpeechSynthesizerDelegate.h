/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"
#import "SpringBoard-Structs.h"


@protocol VSSpeechSynthesizerDelegate <NSObject>
@optional
-(void)speechSynthesizerDidStartSpeaking:(id)speechSynthesizer;
-(void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;
-(void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking phonemesSpoken:(id)spoken withError:(id)error;
-(void)speechSynthesizerDidPauseSpeaking:(id)speechSynthesizer;
-(void)speechSynthesizerDidContinueSpeaking:(id)speechSynthesizer;
-(void)speechSynthesizer:(id)synthesizer willSpeakRangeOfSpeechString:(NSRange)speechString;
@end

