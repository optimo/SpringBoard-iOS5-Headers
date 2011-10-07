/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDeviceLockViewDelegate.h"
#import "AFUISnippetDelegate.h"
#import "AFSpeechDelegate.h"
#import "SBShowcaseViewController.h"
#import "AFAssistantUIService.h"
#import "SBDeviceLockViewOwner.h"
#import "VSSpeechSynthesizerDelegate.h"
#import "SpringBoard-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "SBAssistantTourGuideDelegate.h"
#import "SBAssistantTableViewCellDelegate.h"
#import "SBAssistantViewDelegate.h"

@class SBAssistantTourGuideController, SBAssistantView, SBAssistantSpaceController, SBAssistantSpeechElement, SBAssistantNavigationController, SBAssistantUserUtteranceController, AFUISnippetController, NSTimer, SBAssistantUserUtterance, AFConnection, SAUIAddViews, NSString, VSSpeechSynthesizer, NSMutableArray, BluetoothDevice, AFSpeechRequestOptions, NSMutableSet;
@protocol SBAssistantControllerOwner;

@interface SBAssistantController : SBShowcaseViewController <AFAssistantUIService, UITableViewDataSource, UITableViewDelegate, VSSpeechSynthesizerDelegate, AFSpeechDelegate, SBAssistantViewDelegate, AFUISnippetDelegate, SBAssistantTableViewCellDelegate, SBAssistantTourGuideDelegate, SBDeviceLockViewDelegate, SBDeviceLockViewOwner> {
	id<SBAssistantControllerOwner> _owner;
	SBAssistantView* _assistantDisplay;
	AFConnection* _assistantConnection;
	NSMutableArray* _conversation;
	SAUIAddViews* _tempPendingElements;
	NSMutableArray* _speechQueue;
	NSMutableArray* _tempSpeechQueue;
	NSMutableArray* _repeatQueue;
	NSMutableSet* _modalRequesters;
	NSMutableSet* _snippetsToToss;
	unsigned _tableAnimationCount;
	VSSpeechSynthesizer* _synthesizer;
	NSString* _spokenLanguageCode;
	BOOL _pendingRecord;
	NSTimer* _statusTimer;
	int _state;
	int _currentPhase;
	NSString* _currentAudioRoute;
	BluetoothDevice* _bluetoothDevice;
	BOOL _awaitingResponse;
	AFUISnippetController* _pinnedSnippet;
	AFUISnippetController* _pendingPinnedSnippet;
	AFUISnippetController* _lastSnippetInTranscript;
	SBAssistantUserUtterance* _pendingSpeechUtterance;
	SBAssistantTourGuideController* _tourGuideSnippet;
	SBAssistantSpaceController* _extraSpace;
	SBAssistantUserUtteranceController* _lastCorrectableUtterance;
	SBAssistantSpeechElement* _currentSpeechElement;
	id _passcodeUnlockCompletionHandler;
	NSMutableArray* _pausedEvents;
	AFSpeechRequestOptions* _activationOptions;
	BOOL _notifiedAfterActivate;
	BOOL _shouldSpeak;
	BOOL _assistantVisible;
	BOOL _expectsFaceContact;
	BOOL _guideDone;
	BOOL _connectionCurrentlyAvailable;
	BOOL _unlockedDeviceWithinAssistant;
	BOOL _requestFinished;
	BOOL _hasAddedToTTS;
	BOOL _hasShownFirstTimeGuide;
	BOOL _delayConnectionEndUntilPhoneCall;
	BOOL _deactivatedForPendingPhoneCall;
	BOOL _registeredForActiveNotifications;
	BOOL _registeredForCallNotifications;
	BOOL _keyboardAnimating;
	BOOL _removedSnippetDuringThisUpdate;
	BOOL _notifyingChangeInLastSnippet;
	BOOL _endVoiceSessionWhenDoneSpeaking;
	NSString* _currentAddViewsIdentifier;
	int _networkErrorIndex;
	SBAssistantNavigationController* _viewController;
	NSMutableArray* _nextRecognitionAudioInputPaths;
	BOOL _shouldRouteToReceiver;
	BOOL _audioRouteNeedsUpdate;
	BOOL _enableProxForGesture;
}
@property(readonly, assign, nonatomic) BOOL unlockedDevice;
@property(assign, nonatomic) id<SBAssistantControllerOwner> owner;
@property(copy) NSString* currentAudioRoute;
@property(retain, nonatomic) BluetoothDevice* bluetoothDevice;
@property(assign, nonatomic) BOOL willOpenTelURL;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(BOOL)deviceSupported;
+(BOOL)preferenceEnabled;
+(BOOL)supportedAndEnabled;
+(BOOL)shouldEnterAssistant;
+(BOOL)hasUserBeenEducated;
+(void)setUserHasBeenEducated;
+(void)educateUserAboutAssistantWhenAppropriate;
+(BOOL)canActivateWithActiveTouchesUsingOptions:(id)activeTouchesUsingOptions;
-(id)init;
-(void)dealloc;
-(float)bottomBarHeight;
-(id)_connection;
-(void)_clearConnection;
-(void)_cleanUpConnectionIfNeeded;
-(id)view;
-(id)_extraSpace;
-(id)_assistantView;
-(void)_detachFromAssistantView;
-(void)viewWillAppear;
-(void)viewDidAppear;
-(void)viewWillDisappear;
-(void)viewDidDisappear;
-(void)setRevealMode:(int)mode;
-(BOOL)isAssistantVisible;
-(int)viewState;
-(BOOL)currentRouteExpectsFaceContact;
-(void)_updateExpectsFaceContact;
-(void)_registerForActiveNotifications:(BOOL)activeNotifications;
-(void)_registerForCallNotification:(BOOL)callNotification;
-(void)_updateCurrentAudioRoute;
-(void)updateCurrentAudioRoute;
-(void)_setExpectsFaceContact:(BOOL)contact;
-(void)_endBTVoiceSession;
-(BOOL)expectsFaceContact;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)shouldShowLockStatusBarIcon;
-(void)noteSpokenLanguageDidChange;
-(BOOL)assistantVisibleAndRequiresPasscodeUnlockForOpenURL:(id)openURL withDisplay:(id)display;
-(void)passcodeUnlockWithCompletion:(id)completion;
-(BOOL)preventGesture;
-(void)_keyboardWillShow:(id)_keyboard;
-(void)_keyboardDidShow:(id)_keyboard;
-(void)_keyboardWillHide:(id)_keyboard;
-(void)_keyboardDidHide:(id)_keyboard;
-(void)_callStateChanged:(id)changed;
-(void)_cleanUpPreheatedConnection;
-(void)preheat;
-(void)_updateConnectionAudioRouteIfNecessary;
-(void)activateWithOptions:(id)options;
-(void)deactivate;
-(void)_clearDeactivatedForPendingPhoneCall;
-(void)_setDeactivatedForPendingPhoneCall:(BOOL)pendingPhoneCall withDelay:(double)delay;
-(void)_displayDidLaunchFrontmost:(id)_display;
-(BOOL)cancelPendingPhoneCall;
-(void)dismissAssistant;
-(void)dismissAssistantWithFade:(double)fade;
-(void)dismissAssistantForAlertActivation:(id)alertActivation;
-(void)_clearState;
-(void)_sendActivationNotification;
-(void)_notifyAllSnippetsOfInterruption;
-(void)resetAndStartListeningWithOptions:(id)options;
-(void)pauseConnectionCallbacks:(BOOL)callbacks;
-(BOOL)allowsEventOnlySuspension;
-(double)autoDimTime;
-(void)proximityStateChanged:(id)changed;
-(void)_stopSpeechAndHandleAudioInput;
-(void)_micButtonHit:(id)hit;
-(void)_appendExchange:(id)exchange;
-(void)_appendSnippet:(id)snippet;
-(void)_removeSnippet:(id)snippet;
-(void)_reloadSnippet:(id)snippet animation:(int)animation;
-(void)_beginConversationUpdates;
-(void)_endConversationUpdates;
-(void)_startProcessingRequest;
-(void)_clearLastCorrectableUtterance;
-(void)_appendUserUtterance:(id)utterance beginProcessing:(BOOL)processing;
-(void)_submitQuery:(id)query;
-(void)_handleAudioInput;
-(void)_handleAudioTimeout;
-(void)_listen;
-(void)_listenAttemptDidFinish;
-(void)_listenFailed;
-(void)_setState:(int)state;
-(void)_setViewState:(int)state;
-(void)_clearStatusTimer;
-(void)_scheduleStatusTimer;
-(void)_statusTimerFired:(id)fired;
-(void)_addSpeakableTextForExchange:(id)exchange listenFollowingSpeech:(BOOL)speech;
-(id)_addAceView:(id)view phase:(int)phase;
-(unsigned)_replaceLastSnippetWithSameSnippetClass:(id)sameSnippetClass withPhase:(int)phase replacePhase:(int)phase3;
-(void)_scheduleTempSpeechTimer;
-(void)_tempSpeechTimerFired;
-(void)_clearTempSpeechTimer;
-(void)_scheduleTempElementTimer;
-(void)_tempElementTimerFired;
-(void)_clearTempElements;
-(void)_clearTempElementTimer;
-(void)_scheduleScrollToPinned;
-(void)_cancelScrollToPinned;
-(void)_scrollToPinnedTimer;
-(void)_scheduleEducateUserGestureIfNecessary;
-(void)_clearEducateUserGestureTimer;
-(void)_clearScreen;
-(void)_clearConversation;
-(void)_addAceViewAdornmentsIfNecessary:(id)necessary;
-(BOOL)_handleConfirmationPhaseAddViews:(id)views phase:(int)phase;
-(void)_pinSnippetToTop:(id)top;
-(float)_requiredSpaceForCurrentPin;
-(float)_requiredExtraSpaceFromIndex:(unsigned)index;
-(CGSize)_calculatedViewSizeForSnippet:(id)snippet suggestedHeight:(float)height;
-(id)_snippetWithFirstResponder;
-(void)_positionSnippet:(id)snippet aboveKeyboard:(CGRect)keyboard withCurve:(int)curve duration:(double)duration atPosition:(int)position positionHandler:(id)handler;
-(void)_restoreFromKeyboardShownWithCurve:(int)curve duration:(double)duration positionHandler:(id)handler;
-(id)_tableCellIndexPathForSnippet:(id)snippet;
-(void)_addSnippetToToss:(id)toss;
-(void)_processSnippetTosses;
-(void)_tellUserAboutGesture;
-(CGSize)_rowSize:(unsigned)size;
-(CGSize)_rowSize:(unsigned)size suggestedHeight:(float)height;
-(void)_removeTemporaryElementsExcept:(id)except;
-(void)_say:(id)say;
-(void)_say:(id)say forced:(BOOL)forced;
-(BOOL)_isSpeaking;
-(void)_addTemporaryMessageToSpeechQueue:(id)speechQueue;
-(void)_clearTemporarySpeechQueue;
-(void)_sendSuccessCommandForRefIdentifier:(id)refIdentifier;
-(void)_sendFailedCommandForRefIdentifier:(id)refIdentifier;
-(void)_processSpeechQueue;
-(void)_stopSpeakingAndProcessCommands:(BOOL)commands;
-(unsigned long)_prepareSoundFromString:(id)string;
-(void)_playSound:(unsigned long)sound;
-(void)_startListenTimer;
-(void)_cancelListenTimer;
-(void)_addViews:(id)views;
-(void)_handleCommand:(id)command;
-(void)_handleAddViewsCommand:(id)command;
-(void)_handleClearScreenCommand:(id)command;
-(void)_handleOpenLinkCommand:(id)command;
-(void)_handleSayItCommand:(id)command;
-(void)_handleRepeatItCommand:(id)command;
-(void)_handlePresentPasscodeUnlockCommand:(id)command;
-(void)_handleShowGuideCommand:(id)command;
-(int)_phaseFromPhaseString:(id)phaseString;
-(BOOL)_phaseReplacesPreviousAvailableSnippetContents:(int)contents;
-(BOOL)_phaseIsTemporary:(int)temporary;
-(BOOL)_phaseForTemporaryQueue:(int)temporaryQueue;
-(BOOL)_phaseIsInterstitial:(int)interstitial;
-(id)_lastReplaceableTemporarySnippet;
-(unsigned)_lastNonSpaceSnippetIndex;
-(id)_lastNonSpaceSnippet;
-(unsigned)_lastNonTemporarySnippetAbsentFrom:(id)from;
-(id)_lastNonStaticSnippet;
-(void)_tossOutLastSnippetAndRemoveFollowingViews;
-(id)_snippetsOfPhase:(int)phase;
-(BOOL)_shouldActAsIfInConfirmationPhase;
-(void)_notifyFirstResponseReceivedAndHideGuideIfNecessary;
-(void)_forceSnippetsToResignFirstResponder;
-(void)_notifyWantsFullRevealIfNecessary:(id)necessary;
-(void)_clearModality;
-(BOOL)_isModal;
-(void)_updateModality;
-(void)_stampLastSnippetWithStamp:(int)stamp;
-(void)reinterpretUserUtterance:(id)utterance;
-(void)_handleError:(id)error;
-(void)_showPasscodeKeypad:(BOOL)keypad;
-(void)_entryFinishedWithPassword:(id)password;
-(BOOL)_haveAudioInputPaths;
-(void)_startRequestWithNextAudioInputPath;
-(void)setNextRecognitionAudioInputPaths:(id)paths;
-(void)_clearPausedEvents;
-(void)_executeOrPendCommand:(id)command;
-(id)supportedCommands;
-(void)_clearRepeatQueue;
-(void)_repeatLastResponseWithFallback:(id)fallback;
-(void)assistantConnection:(id)connection receivedCommand:(id)command;
-(void)assistantConnectionConversationFinished:(id)finished;
-(void)assistantConnection:(id)connection conversationFailedWithError:(id)error;
-(void)assistantConnection:(id)connection voiceCaptureFinishedWithText:(id)text;
-(void)assistantConnection:(id)connection voiceCaptureFailedWithError:(id)error;
-(void)assistantConnectionRequestFinished:(id)finished;
-(void)assistantConnection:(id)connection requestFailedWithError:(id)error;
-(void)assistantConnection:(id)connection shouldSpeak:(BOOL)speak;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)_delayedDeactivateAssistant;
-(void)assistantConnectionSpeechRecordingWillBegin:(id)assistantConnectionSpeechRecording;
-(void)assistantConnectionSpeechRecordingDidBegin:(id)assistantConnectionSpeechRecording;
-(void)assistantConnectionSpeechRecordingDidEnd:(id)assistantConnectionSpeechRecording;
-(void)assistantConnection:(id)connection speechRecordingDidFail:(id)speechRecording;
-(void)assistantConnection:(id)connection didRecognizeSpeechPhrases:(id)phrases correctionIdentifier:(id)identifier;
-(void)assistantConnection:(id)connection speechRecognitionDidFail:(id)speechRecognition;
-(void)speechSynthesizerDidStartSpeaking:(id)speechSynthesizer;
-(void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;
-(void)assistantViewSearchScrolledToView:(id)view;
-(void)assistantView:(id)view madeRequest:(id)request;
-(void)assistantViewAnimatedIn:(id)anIn;
-(void)assistantViewAnimatedOut:(id)anOut;
-(float)assistantViewAudioLevel:(id)level;
-(void)assistantTableViewCellDidRemoveFromSuperview:(id)assistantTableViewCell;
-(void)snippetController:(id)controller changeSizeTo:(CGSize)to;
-(void)snippetControllerRemoveView:(id)view;
-(void)snippetController:(id)controller sendGenericAceCommand:(id)command;
-(id)snippetControllerViewController:(id)controller;
-(void)snippetControllerTransactionComplete:(id)complete;
-(void)snippetControllerHaltTTS:(id)tts;
-(void)snippetControllerCancelScroll:(id)scroll;
-(BOOL)snippetControllerPreventInteraction:(id)interaction;
-(void)snippetController:(id)controller stampMostRecentSnippetWithStamp:(int)stamp;
-(id)snippetController:(id)controller disambiguationCellForAceObject:(id)aceObject context:(id)context;
-(id)snippetController:(id)controller domainObjectForIdentifier:(id)identifier;
-(id)snippetControllerEffectiveBundleForCoreLocation:(id)coreLocation;
-(BOOL)snippetControllerIsDevicePasscodeLocked:(id)locked;
-(void)snippetControllerModalityRequest:(id)request;
-(void)snippetControllerModalityRelinquish:(id)relinquish;
-(void)snippetController:(id)controller addMessage:(id)message phase:(id)phase speakableDescription:(id)description;
-(void)snippetController:(id)controller addMessage:(id)message speakableDescription:(id)description;
-(void)tourGuideWantsToDisplayGuide:(id)displayGuide;
-(void)deviceLockViewPasscodeEntered:(id)entered;
-(void)deviceLockViewCancelButtonPressed:(id)pressed;
-(void)deviceUnlockSucceeded;
-(void)deviceUnlockFailed;
-(BOOL)isDisplayingErrorStatus;
-(BOOL)shouldUseTransparentStatusBar;
@end

