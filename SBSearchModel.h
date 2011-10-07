/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SPDaemonQueryDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSString, NSMutableArray, CPSearchMatcher, NSDate, SPDaemonQueryToken, NSMutableDictionary, SPSearchResult, NSArray;

@interface SBSearchModel : XXUnknownSuperclass <SPDaemonQueryDelegate> {
	NSString* _queryString;
	NSString* _firstNoResultsQuery;
	CPSearchMatcher* _queryMatcher;
	unsigned* _domainOrdering;
	NSArray* _querySearchDomains;
	unsigned* _nakedQuerySearchDomains;
	BOOL _querySearchDomainsIncludesApplications;
	int* _sectionToGroupMap;
	BOOL _sectionToGroupMapIsValid;
	int _resultSectionCount;
	int _applicationsSectionIndex;
	SPSearchResultDeserializer** _resultGroups;
	SPSearchResultDeserializer** _accumulatingResultGroups;
	BOOL* _resultGroupsIsCurrent;
	SPDaemonQueryToken* _currentToken;
	NSArray* _matchingLaunchingIcons;
	NSMutableArray* _accumulatingLaunchingIcons;
	NSTimer* _clearSearchTimer;
	NSDate* _clearSearchDate;
	BOOL _hasResults;
	BOOL _queryFinished;
	BOOL _haveCachedWebSearchFlag;
	BOOL _isAbleToShowWebSearch;
	unsigned _domainCount;
	NSMutableDictionary* _cachedCustomImages;
	SPSearchResult* _topHitResult;
}
@property(readonly, assign, nonatomic) BOOL hasResults;
@property(readonly, assign, nonatomic) BOOL queryFinished;
@property(readonly, assign, nonatomic) NSString* firstNoResultsQuery;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_makeArrays;
-(void)_freeArrays;
-(void)updateSearchOrdering;
-(void)resetClearSearchTimer;
-(void)startClearSearchTimer;
-(void)_updateClearSearchTimerFireDate;
-(void)_clearSearchTimerFired;
-(BOOL)setQueryString:(id)string;
-(id)queryString;
-(BOOL)hasQueryString;
-(BOOL)_shouldIgnoreQuery:(id)query;
-(BOOL)_searchResultDeserializer:(id)deserializer isTopHitResult:(id)result;
-(void)_pruneTopHitFromAccumulatingResuts;
-(void)searchDaemonQuery:(id)query addedResults:(id)results;
-(void)searchDaemonQuery:(id)query encounteredError:(id)error;
-(void)searchDaemonQueryCompleted:(id)completed;
-(BOOL)shouldDisplayApplicationSearchResults;
-(BOOL)hasSearchResults;
-(void)_clearCachedWebSearchFlag;
-(BOOL)isAbleToShowWebSearchResults;
-(BOOL)_shouldDisplayWebSearchResults;
-(int)numberOfSections;
-(void)_promoteAccumulatedResults;
-(void)_releaseAccumulatingResultGroups;
-(void)_releaseResultGroups;
-(void)_updateSectionToGroupMap;
-(id)groupForSection:(int)section;
-(int)_groupIndexForSection:(int)section;
-(int)_resultSectionCount;
-(id)launchingURLForResult:(id)result withDisplayIdentifier:(id)displayIdentifier;
-(id)iconForAppIndex:(int)appIndex;
-(id)webSearchTitleForRow:(int)row;
-(id)launchingURLForWebSearchRow:(int)webSearchRow queryString:(id)string;
-(id)imageForWebSearch;
-(void)_sendUpdateNotification;
-(void)_updateApplicationSearchResults;
-(void)_promoteAccumulatedApplicationResults;
-(id)imageForDomain:(unsigned)domain andDisplayID:(id)anId;
-(id)imageForDisplayIdentifier:(id)displayIdentifier spotlightKey:(id)key;
-(id)_cachedCustomImageForPath:(id)path;
-(void)clearSearchResults;
-(BOOL)sectionIsApp:(int*)app appOffset:(int*)offset;
-(BOOL)sectionIsWebSearch:(int)search;
-(int)sectionItemCount:(int)count;
@end
