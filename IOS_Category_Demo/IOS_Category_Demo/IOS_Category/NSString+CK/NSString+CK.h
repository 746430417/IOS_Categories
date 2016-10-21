//
//  NSString+DNS.h
//  quickenterconf
//
//  Created by 123 on 15/9/17.
//  Copyright (c) 2015年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <netdb.h>
#include <sys/socket.h>
#import <arpa/inet.h>

@interface NSString (DNS)

/*
 *DNS域名解析
 */
+(NSString*)getIPWithHostName:(const NSString*)hostName;

@end

@interface NSString (UUID)

/*
 *生成UUID
 */
+(NSString*)UUIDString;

@end
