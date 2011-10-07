/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSCalendar, NSTimer, NSDate;
@protocol SBRelativeDateTimerDelegate;

@interface SBRelativeDateTimer : XXUnknownSuperclass {
	NSCalendar* _gregorian;
	NSTimer* _timer;
	NSDate* _date;
	id<SBRelativeDateTimerDelegate> _delegate;
	int _currResolution;
	int _currValue;
}
-(id)init;
-(void)dealloc;
-(void)_fireForEvent:(id)event;
-(void)_fireForLocaleEvent:(id)localeEvent;
-(void)setDelegate:(id)delegate;
-(void)setDate:(id)date;
-(id)date;
-(double)nextFireInterval;
-(void)fireAndSchedule;
-(void)invalidate;
-(id)_timeDifferenceFromDate:(id)date;
-(void)_fireAndUpdateTimerIfNecessary;
-(double)_nextFireInterval:(id)interval resolution:(int)resolution comparedToNow:(int)now;
@end

