/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKSyncServiceEndpoint : NSObject <IDSServiceDelegate> {
    IDSService *_idsService;
    NSString *_idsServiceName;
    BOOL _isConnected;
    NSObject<OS_dispatch_source> *_repeatPreventionCleanupTimer;
    NSMutableDictionary *_repeatPreventionRecords;
    NSObject<OS_dispatch_queue> *_serviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) IDSService *idsService;
@property (nonatomic, retain) NSString *idsServiceName;
@property (nonatomic) BOOL isConnected;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *repeatPreventionCleanupTimer;
@property (nonatomic, retain) NSMutableDictionary *repeatPreventionRecords;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serviceQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleConnectivityChange;
- (BOOL)_isConnected;
- (void)_removeExpiredRepeatPreventionRecords;
- (id)_sendProtobufData:(id)arg1 type:(unsigned int)arg2 priority:(unsigned int)arg3 shortTimeout:(BOOL)arg4;
- (void)_storeRepeatPreventionId:(id)arg1 priority:(unsigned int)arg2;
- (BOOL)_willIdRepeat:(id)arg1;
- (void)connectivityChanged;
- (void)dealloc;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(int)arg2;
- (id)idsService;
- (id)idsServiceName;
- (id)initWithIDSServiceName:(id)arg1 queue:(id)arg2;
- (BOOL)isConnected;
- (void)readProtobufData:(id)arg1 type:(unsigned int)arg2;
- (id)repeatPreventionCleanupTimer;
- (id)repeatPreventionRecords;
- (void)resetRepeatPreventionHistory;
- (id)sendProtobufData:(id)arg1 type:(unsigned int)arg2 priority:(unsigned int)arg3 repeatPreventionId:(id)arg4 shortTimeout:(BOOL)arg5;
- (id)sendProtobufData:(id)arg1 type:(unsigned int)arg2 priority:(unsigned int)arg3 shortTimeout:(BOOL)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (id)serviceQueue;
- (void)serviceSpaceDidBecomeAvailable:(id)arg1;
- (void)setIdsService:(id)arg1;
- (void)setIdsServiceName:(id)arg1;
- (void)setIsConnected:(BOOL)arg1;
- (void)setRepeatPreventionCleanupTimer:(id)arg1;
- (void)setRepeatPreventionRecords:(id)arg1;
- (void)setServiceQueue:(id)arg1;
- (void)spaceBecameAvailable;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;

@end