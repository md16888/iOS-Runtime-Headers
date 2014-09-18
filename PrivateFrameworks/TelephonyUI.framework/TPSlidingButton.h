/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class <TPSlidingButtonDelegateProtocol>, NSString, UIButton, UIImageView, _UIActionSlider;

@interface TPSlidingButton : UIView <_UIActionSliderDelegate> {
    _UIActionSlider *_acceptButton;
    <TPSlidingButtonDelegateProtocol> *_delegate;
    UIImageView *_dialImageView;
    UIButton *_sideButtonRight;
    int _type;
}

@property(retain) _UIActionSlider * acceptButton;
@property(copy,readonly) NSString * debugDescription;
@property <TPSlidingButtonDelegateProtocol> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) UIImageView * dialImageView;
@property(readonly) unsigned long long hash;
@property(retain) UIButton * sideButtonRight;
@property(readonly) Class superclass;
@property int type;

- (struct CGSize { double x1; double x2; })_knobSize;
- (id)acceptButton;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)dialImageView;
- (id)initWithSlidingButtonType:(int)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setAcceptButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDialImageView:(id)arg1;
- (void)setSideButtonRight:(id)arg1;
- (void)setType:(int)arg1;
- (id)sideButtonRight;
- (int)type;

@end