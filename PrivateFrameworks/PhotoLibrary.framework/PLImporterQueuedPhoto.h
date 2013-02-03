/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLPhotoAlbum, NSString, NSDictionary;

@interface PLImporterQueuedPhoto : NSObject {
    NSString *baseName;
    NSString *directoryPath;
    PLPhotoAlbum *event;
    NSDictionary *extensions;
    NSInteger importIdentifier;
    struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; NSString *x6; } *progressStack;
}

@property(copy) NSString *baseName;
@property(copy) NSString *directoryPath;
@property(retain) PLPhotoAlbum *event;
@property(copy) NSDictionary *extensions;
@property ? *progressStack;
@property NSInteger importIdentifier;

+ (id)queuedPhotoWithDirectoryPath:(id)arg1 baseName:(id)arg2 extensions:(id)arg3 event:(id)arg4 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg5 importSessionIdentifier:(NSInteger)arg6;

- (id)baseName;
- (void)dealloc;
- (id)directoryPath;
- (id)event;
- (id)extensions;
- (NSInteger)importIdentifier;
- (struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)progressStack;
- (void)setBaseName:(id)arg1;
- (void)setDirectoryPath:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setExtensions:(id)arg1;
- (void)setImportIdentifier:(NSInteger)arg1;
- (void)setProgressStack:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg1;

@end