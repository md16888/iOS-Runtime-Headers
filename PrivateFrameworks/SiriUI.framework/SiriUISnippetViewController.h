/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class <SiriUISnippetViewControllerDelegate>, AceObject, NSArray, NSAttributedString, NSString, SAUIAppPunchOut, SAUIConfirmationOptions, SAUISnippet, UICollectionReusableView<SiriUIReusableView>;

@interface SiriUISnippetViewController : UIViewController <SiriUIViewController> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    NSAttributedString *_attributedSubtitle;
    long long _defaultKeylineType;
    } _defaultViewInsets;
    <SiriUISnippetViewControllerDelegate> *_delegate;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    SAUIAppPunchOut *_headerPunchOut;
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    NSString *_navigationTitle;
    SAUIConfirmationOptions *_previousConfirmationOptions;
    NSArray *_requestContext;
    SAUISnippet *_snippet;
    SAUIAppPunchOut *_snippetPunchOut;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
    AceObject *aceObject;
    bool_cancelled;
    bool_confirmed;
    bool_isFullPadWidth;
    bool_loading;
    bool_provisional;
    bool_showHeaderChevron;
    bool_topKeylineHidden;
    bool_virgin;
    bool_wantsConfirmationInsets;
    bool_willAnimateCancellation;
    bool_willAnimateConfirmation;
}

@property(retain) AceObject * aceObject;
@property(copy) NSAttributedString * attributedSubtitle;
@property(getter=isCancelled) bool cancelled;
@property(getter=isConfirmed) bool confirmed;
@property(copy,readonly) NSString * debugDescription;
@property long long defaultKeylineType;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } defaultViewInsets;
@property <SiriUISnippetViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) SAUIAppPunchOut * headerPunchOut;
@property bool isFullPadWidth;
@property(getter=isLoading) bool loading;
@property(copy) NSString * navigationTitle;
@property(getter=_previousConfirmationOptions,setter=_setPreviousConfirmationOptions:,retain) SAUIConfirmationOptions * previousConfirmationOptions;
@property(getter=_isProvisional,setter=_setProvisional:) bool provisional;
@property(copy) NSArray * requestContext;
@property bool showHeaderChevron;
@property(retain) SAUISnippet * snippet;
@property(retain) SAUIAppPunchOut * snippetPunchOut;
@property(copy) NSString * subtitle;
@property(readonly) Class superclass;
@property(copy) NSString * title;
@property bool topKeylineHidden;
@property(getter=isVirgin,readonly) bool virgin;
@property bool wantsConfirmationInsets;
@property(getter=_willAnimateCancellation,setter=_setWillAnimateCancellation:) bool willAnimateCancellation;
@property(getter=_willAnimateConfirmation,setter=_setWillAnimateConfirmation:) bool willAnimateConfirmation;

- (void).cxx_destruct;
- (void)_cellDidLayoutSubviews;
- (id)_createReusableViewIfNeededWithClass:(Class)arg1;
- (id)_footerView;
- (bool)_hasConfirmationButtons;
- (bool)_hasConfirmationOrCancelledInsets;
- (id)_headerView;
- (long long)_insertionAnimation;
- (bool)_isProvisional;
- (long long)_pinAnimationType;
- (id)_previousConfirmationOptions;
- (id)_privateDelegate;
- (long long)_replacementAnimation;
- (void)_setPreviousConfirmationOptions:(id)arg1;
- (void)_setProvisional:(bool)arg1;
- (void)_setVirgin:(bool)arg1;
- (void)_setWillAnimateCancellation:(bool)arg1;
- (void)_setWillAnimateConfirmation:(bool)arg1;
- (void)_snippetPunchOutButtonTapped;
- (void)_snippetViewControllerWillBeRemoved;
- (id)_transparentFooterView;
- (id)_transparentHeaderView;
- (bool)_willAnimateCancellation;
- (bool)_willAnimateConfirmation;
- (id)aceObject;
- (id)attributedSubtitle;
- (void)cancelButtonTapped:(id)arg1;
- (void)configureReusableFooterView:(id)arg1;
- (void)configureReusableHeaderView:(id)arg1;
- (void)configureReusableTransparentFooterView:(id)arg1;
- (void)configureReusableTransparentHeaderView:(id)arg1;
- (void)confirmButtonTapped:(id)arg1;
- (long long)defaultKeylineType;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultViewInsets;
- (id)delegate;
- (double)desiredHeight;
- (double)desiredHeightForFooterView;
- (double)desiredHeightForHeaderView;
- (double)desiredHeightForTransparentFooterView;
- (double)desiredHeightForTransparentHeaderView;
- (Class)footerViewClass;
- (id)headerPunchOut;
- (void)headerTapped:(id)arg1;
- (Class)headerViewClass;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isCancelled;
- (bool)isConfirmed;
- (bool)isFullPadWidth;
- (bool)isLoading;
- (bool)isVirgin;
- (id)navigationTitle;
- (bool)removedAfterDialogProgresses;
- (id)requestContext;
- (void)setAceObject:(id)arg1;
- (void)setAttributedSubtitle:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setConfirmed:(bool)arg1;
- (void)setDefaultKeylineType:(long long)arg1;
- (void)setDefaultViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderPunchOut:(id)arg1;
- (void)setIsFullPadWidth:(bool)arg1;
- (void)setLoading:(bool)arg1;
- (void)setNavigationTitle:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setShowHeaderChevron:(bool)arg1;
- (void)setSnippet:(id)arg1;
- (void)setSnippetPunchOut:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTopKeylineHidden:(bool)arg1;
- (void)setWantsConfirmationInsets:(bool)arg1;
- (bool)showHeaderChevron;
- (void)siriDidDeactivate;
- (void)siriDidLayoutSnippetView;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)siriWillLayoutSnippetView;
- (id)snippet;
- (id)snippetPunchOut;
- (id)subtitle;
- (bool)topKeylineHidden;
- (Class)transparentFooterViewClass;
- (Class)transparentHeaderViewClass;
- (bool)wantsConfirmationInsets;
- (void)wasAddedToTranscript;
- (void)willCancel;
- (void)willConfirm;

@end