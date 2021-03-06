/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingIrisPlayerChange : PUViewModelChange {
    BOOL  _activatedDidChange;
    BOOL  _currentlyDisplayedTimesDidChange;
    BOOL  _hasPendingVitalityHintDidChange;
    BOOL  _isLivePhotoLoadingAllowedDidChange;
    BOOL  _isLivePhotoPlaybackAllowedDidChange;
    BOOL  _livePhotoLoadingAllowedDidChange;
    BOOL  _livePhotoPlaybackAllowedDidChange;
    BOOL  _playbackStateDidChange;
    BOOL  _playerDidChange;
    BOOL  _preferredTimesDidChange;
    BOOL  _scrubbingPhotoTimeDidChange;
}

@property (setter=_setActivatedDidChange:, nonatomic) BOOL activatedDidChange;
@property (setter=_setCurrentlyDisplayedTimesDidChange:, nonatomic) BOOL currentlyDisplayedTimesDidChange;
@property (setter=_setHasPendingVitalityHintDidChange:, nonatomic) BOOL hasPendingVitalityHintDidChange;
@property (setter=_setLivePhotoLoadingAllowedDidChange:, nonatomic) BOOL isLivePhotoLoadingAllowedDidChange;
@property (setter=_setLivePhotoPlaybackAllowedDidChange:, nonatomic) BOOL isLivePhotoPlaybackAllowedDidChange;
@property (nonatomic, readonly) BOOL livePhotoLoadingAllowedDidChange;
@property (nonatomic, readonly) BOOL livePhotoPlaybackAllowedDidChange;
@property (setter=_setPlaybackStateDidChange:, nonatomic) BOOL playbackStateDidChange;
@property (setter=_setPlayerDidChange:, nonatomic) BOOL playerDidChange;
@property (setter=_setPreferredTimesDidChange:, nonatomic) BOOL preferredTimesDidChange;
@property (setter=_setScrubbingPhotoTimeDidChange:, nonatomic) BOOL scrubbingPhotoTimeDidChange;

- (void)_setActivatedDidChange:(BOOL)arg1;
- (void)_setCurrentlyDisplayedTimesDidChange:(BOOL)arg1;
- (void)_setHasPendingVitalityHintDidChange:(BOOL)arg1;
- (void)_setLivePhotoLoadingAllowedDidChange:(BOOL)arg1;
- (void)_setLivePhotoPlaybackAllowedDidChange:(BOOL)arg1;
- (void)_setPlaybackStateDidChange:(BOOL)arg1;
- (void)_setPlayerDidChange:(BOOL)arg1;
- (void)_setPreferredTimesDidChange:(BOOL)arg1;
- (void)_setScrubbingPhotoTimeDidChange:(BOOL)arg1;
- (BOOL)activatedDidChange;
- (BOOL)currentlyDisplayedTimesDidChange;
- (BOOL)hasChanges;
- (BOOL)hasPendingVitalityHintDidChange;
- (BOOL)isLivePhotoLoadingAllowedDidChange;
- (BOOL)isLivePhotoPlaybackAllowedDidChange;
- (BOOL)livePhotoLoadingAllowedDidChange;
- (BOOL)livePhotoPlaybackAllowedDidChange;
- (BOOL)playbackStateDidChange;
- (BOOL)playerDidChange;
- (BOOL)preferredTimesDidChange;
- (BOOL)scrubbingPhotoTimeDidChange;

@end
