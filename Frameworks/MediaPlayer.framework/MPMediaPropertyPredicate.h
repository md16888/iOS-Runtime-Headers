/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPropertyPredicate : MPMediaPredicate {
    void *_internal;
}

@property(copy) NSString *property;
@property NSInteger comparisonType;
@property(copy) id value;

+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(NSInteger)arg3;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2;

- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForML3EntityProperty:(id)arg1;
- (NSInteger)comparisonType;
- (void)dealloc;
- (id)description;
- (id)descriptionOfValue:(id)arg1 forProperty:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)property;
- (void)setComparisonType:(NSInteger)arg1;
- (void)setProperty:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end