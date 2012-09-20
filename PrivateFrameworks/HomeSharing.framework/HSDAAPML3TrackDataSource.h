/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSData, NSArray;

@interface HSDAAPML3TrackDataSource : NSObject <ML3TrackInsertionDataSource> {
    struct { 
        unsigned int propertyCode; 
        void *bytes; 
        unsigned int encodedLength; 
        int valueType; 
    } _parsedValues[256];
    int _parsedValuesPropertyIndex[83];
    NSData *_itemsResponseData;
    NSArray *_rawItems;
    unsigned int _idx;
}


- (id)currentTrackComment;
- (id)currentTrackCategory;
- (id)currentTrackChapterData;
- (BOOL)currentTrackIsUserDisabled;
- (long long)currentTrackStoreKeyVersions;
- (long long)currentTrackGeniusChecksum;
- (void)getCurrentTrackLyrics:(struct sqlite3_context { }*)arg1;
- (void)getCurrentTrackStoreArtworkURL:(struct sqlite3_context { }*)arg1;
- (void)getCurrentTrackCategory:(struct sqlite3_context { }*)arg1;
- (BOOL)mediaKindIsSupported:(unsigned int)arg1;
- (void)_parseCurrentItem;
- (void)postParseCurrentTrack;
- (id)initWithItemsResponseData:(id)arg1;
- (void)dealloc;
- (void)seekToNextTrack;
- (BOOL)hasNextTrack;
- (void)seekToStart;
- (void)getCurrentTrackChapterData:(struct sqlite3_context { }*)arg1;
- (double)currentTrackDateLastUsed;
- (void)getCurrentTrackDownloadIdentifier:(struct sqlite3_context { }*)arg1;
- (int)currentTrackIsDownloading;
- (BOOL)currentTrackIsHidden;
- (int)currentTrackUserRating;
- (double)currentTrackBookmarkTimeMS;
- (int)currentTrackSkipCountRecent;
- (int)currentTrackSkipCountUser;
- (double)currentTrackDateSkipped;
- (int)currentTrackPlayCountRecent;
- (int)currentTrackPlayCountUser;
- (double)currentTrackDatePlayed;
- (BOOL)currentTrackHasBeenPlayed;
- (long long)currentTrackPendingGeniusChecksum;
- (int)currentTrackBitRate;
- (void)getCurrentTrackMovieInfo:(struct sqlite3_context { }*)arg1;
- (void)getCurrentTrackExtendedContentRating:(struct sqlite3_context { }*)arg1;
- (void)getCurrentTrackNetworkName:(struct sqlite3_context { }*)arg1;
- (void)getCurrentTrackEpisodeID:(struct sqlite3_context { }*)arg1;
- (int)currentTrackSubtitleTrackID;
- (int)currentTrackSubtitleTrackIndex;
- (int)currentTrackSubtitleLanguage;
- (int)currentTrackAudioTrackID;
- (int)currentTrackAudioTrackIndex;
- (int)currentTrackAudioLanguage;
- (BOOL)currentTrackIsHD;
- (BOOL)currentTrackHasSubtitles;
- (BOOL)currentTrackHasAlternateAudio;
- (double)currentTrackRentalStartDate;
- (double)currentTrackRentalPlaybackStartDate;
- (long long)currentTrackRentalPlaybackDuration;
- (long long)currentTrackRentalDuration;
- (BOOL)currentTrackIsDemoRental;
- (BOOL)currentTrackIsRental;
- (long long)currentTrackVolumeNormalization;
- (long long)currentTrackGaplessLastFrameResync;
- (long long)currentTrackGaplessEncodingDrain;
- (long long)currentTrackGaplessEncodingDelay;
- (long long)currentTrackGaplessHeuristicInfo;
- (long long)currentTrackDurationInSamples;
- (int)currentTrackSampleRate;
- (long long)currentTrackAudioFormat;
- (long long)currentTrackStoreRedownloadedStatus;
- (long long)currentTrackStoreMatchedStatus;
- (long long)currentTrackStoreSagaID;
- (void)getCurrentTrackStoreFlavor:(struct sqlite3_context { }*)arg1;
- (long long)currentTrackStoreXID;
- (void)getCurrentTrackStoreURL:(struct sqlite3_context { }*)arg1;
- (void)getCurrentTrackRedownloadActionParameters:(struct sqlite3_context { }*)arg1;
- (long long)currentTrackStoreStorefrontID;
- (long long)currentTrackStorePlaylistID;
- (long long)currentTrackStoreGenreID;
- (long long)currentTrackStoreComposerID;
- (long long)currentTrackStoreArtistID;
- (long long)currentTrackStoreItemID;
- (long long)currentTrackStoreKeyPlatformID;
- (long long)currentTrackStoreKeyID;
- (long long)currentTrackStoreAccountID;
- (double)currentTrackDateReleased;
- (double)currentTrackStoreDatePurchased;
- (long long)currentTrackStoreStoreKind;
- (void)getCurrentTrackFeedURL:(struct sqlite3_context { }*)arg1;
- (void)getCurrentTrackPodcastExternalGUID:(struct sqlite3_context { }*)arg1;
- (BOOL)currentTrackIsPodcast;
- (BOOL)currentTrackIsTemporaryCloudDownload;
- (BOOL)currentTrackChosenByAutoFill;
- (void)getCurrentTrackCopyright:(struct sqlite3_context { }*)arg1;
- (BOOL)currentTrackIsAudibleAudioBook;
- (BOOL)currentTrackIsITunesU;
- (BOOL)currentTrackIsOTAPurchased;
- (void)getCurrentTrackCollectionDescription:(struct sqlite3_context { }*)arg1;
- (void)getCurrentTrackLongDescription:(struct sqlite3_context { }*)arg1;
- (void)getCurrentTrackDescription:(struct sqlite3_context { }*)arg1;
- (void)getCurrentTrackGrouping:(struct sqlite3_context { }*)arg1;
- (void)getCurrentTrackComment:(struct sqlite3_context { }*)arg1;
- (long long)currentTrackGlobalID;
- (void)getCurrentTrackEQPreset:(struct sqlite3_context { }*)arg1;
- (double)currentTrackRelativeVolume;
- (int)currentTrackBPM;
- (double)currentTrackTotalTimeMS;
- (double)currentTrackStopTimeMS;
- (double)currentTrackStartTimeMS;
- (BOOL)currentTrackRememberBookmarkTime;
- (long long)currentTrackRatingLevel;
- (int)currentTrackContentRating;
- (int)currentTrackYear;
- (double)currentTrackDateModified;
- (double)currentTrackDateAdded;
- (void)getCurrentTrackArtworkCacheID:(struct sqlite3_context { }*)arg1;
- (int)currentTrackTrackCount;
- (int)currentTrackDiscCount;
- (void)getCurrentTrackSortTitle:(struct sqlite3_context { }*)arg1;
- (void)getCurrentTrackTitle:(struct sqlite3_context { }*)arg1;
- (void)getCurrentTrackIntegrity:(struct sqlite3_context { }*)arg1;
- (BOOL)currentTrackExcludeFromShuffle;
- (void)getCurrentTrackStoreLinkID:(struct sqlite3_context { }*)arg1;
- (int)currentTrackEpisodeSortID;
- (int)currentTrackTrackNumber;
- (int)currentTrackDiscNumber;
- (id)currentTrackSortTitle;
- (id)currentTrackTitle;
- (id)currentTrackKind;
- (id)currentTrackSortComposer;
- (id)currentTrackComposer;
- (id)currentTrackGenre;
- (id)currentTrackSortAlbum;
- (int)currentTrackUserAlbumRating;
- (id)currentTrackSeasonNumber;
- (id)currentTrackFeedURL;
- (id)currentTrackAlbum;
- (id)currentTrackArtworkCacheID;
- (id)currentTrackSortAlbumArtist;
- (BOOL)currentTrackIsCompilation;
- (id)currentTrackAlbumArtist;
- (id)currentTrackSortSeriesName;
- (id)currentTrackSortArtist;
- (id)currentTrackSeriesName;
- (id)currentTrackArtist;
- (long long)currentTrackTotalSize;
- (unsigned long)currentTrackMediaType;
- (id)currentTrackFilePath;
- (long long)currentTrackPersistentID;

@end
