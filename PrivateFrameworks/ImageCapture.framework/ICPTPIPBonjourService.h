/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICPTPIPBonjourService : NSObject  {
    id _bonjourServiceProperties;
}


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)disconnectClient:(id)arg1;
- (void)unlockDeviceForClient:(id)arg1;
- (void)handleNetServiceError:(struct { int x1; int x2; }*)arg1;
- (void)clientTerminated:(id)arg1;
- (int)numClients;
- (int)destroyPTPDIPInstance:(id)arg1;
- (void)dispatchConnectionFromSocket:(int)arg1 withAddress:(struct __CFData { }*)arg2;
- (BOOL)startService;
- (id)initWithHostPort:(unsigned long)arg1 hostName:(id)arg2 hostGUID:(id)arg3 bonjourServiceType:(id)arg4 bonjourTXTRecords:(id)arg5;
- (id)clientForPID:(unsigned long)arg1;
- (int)createPTPDIPInstanceWithAddress:(struct __CFData { }*)arg1 fileDescriptor:(int)arg2;
- (int)messagePTPDIPInstance:(id)arg1 withSocket:(int)arg2;
- (id)clientForAddress:(struct __CFData { }*)arg1;
- (BOOL)createAndPublishNetService;
- (BOOL)createSocket;
- (void)releaseSocket;
- (void)releaseNetService;
- (struct __CFNetService { }*)publishedService;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;

@end