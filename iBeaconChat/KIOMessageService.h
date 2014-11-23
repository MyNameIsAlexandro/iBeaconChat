//
//  KIOMessageService.h
//  iBeaconChat
//
//  Created by Kirill Osipov on 20.11.14.
//  Copyright (c) 2014 Kirill Osipov. All rights reserved.
//

@import MultipeerConnectivity;

@interface KIOMessageService : NSObject

- (void)sendString:(NSString *)string;

@end

extern NSString *const kKIOServiceMessagePeerReceiveDataNotification;
extern NSString *const kKIOServiceMessagePeerStateChangeNotification;