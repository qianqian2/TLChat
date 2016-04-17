//
//  TLDBFriendStore.h
//  TLChat
//
//  Created by 李伯坤 on 16/3/22.
//  Copyright © 2016年 李伯坤. All rights reserved.
//

#import "TLDBBaseStore.h"

@interface TLDBFriendStore : TLDBBaseStore

- (BOOL)updateFriendsData:(NSArray *)friendData
                   forUid:(NSString *)uid;

- (BOOL)addFriend:(TLUser *)user forUid:(NSString *)uid;


- (NSMutableArray *)friendsDataByUid:(NSString *)uid;

- (BOOL)deleteFriendByUid:(NSString *)uid;

@end
