/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSLock;



@interface ISCookieStorage : NSObject 
{
    struct OpaqueCFHTTPCookieStorage { } *_cookieStorage;
    NSLock *_lock;
    struct __CFArray { } *_sessionCookies;
}

+ (id)sharedInstance;

- (void)synchronizeSessionCookies;
- (void)handleResponseHeaderFields:(id)arg1 forURL:(id)arg2;
- (id)copyRequestHeaderFieldsForURL:(id)arg1;
- (void)deleteAllCookies;
- (void)setCookiesFromArchivedProperties:(id)arg1;
- (void)synchronizeCookies;
- (void)_addSessionCookiesNotification:(id)arg1;
- (void)_addSessionCookies:(struct __CFArray { }*)arg1;
- (id)_archivedDataForSessionOnlyCookiesFromCookies:(struct __CFArray { }*)arg1;
- (BOOL)_cookie:(struct OpaqueCFHTTPCookie { }*)arg1 isEqualToCookie:(struct OpaqueCFHTTPCookie { }*)arg2;
- (void)_handleSessionOnlyCookiesFromCookies:(struct __CFArray { }*)arg1;
- (void)_restoreSessionCookies;
- (id)archivedPropertiesDataForSessionOnlyCookies;
- (id)init;
- (void)dealloc;

@end