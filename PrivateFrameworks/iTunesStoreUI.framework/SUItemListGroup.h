/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUItem, NSMutableArray;



@interface SUItemListGroup : NSObject 
{
    NSMutableArray *_items;
    SUItem *_separatorItem;
}

@property(readonly) NSString *indexBarTitle;
@property(retain) SUItem *separatorItem;
@property(retain) NSMutableArray *items;


- (id)indexBarTitle;
- (id)separatorItem;
- (void)setSeparatorItem:(id)arg1;
- (void)setItems:(id)arg1;
- (id)items;
- (void)dealloc;
- (id)description;

@end