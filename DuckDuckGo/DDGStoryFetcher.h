//
//  DDGStoryFetcher.h
//  Stories
//
//  Created by Johnnie Walker on 18/03/2013.
//  Copyright (c) 2013 DuckDuckGo, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const DDGStoryFetcherStoriesLastUpdatedKey;
extern NSString * const DDGStoryFetcherSourcesLastUpdatedKey;

@class DDGStory, DDGStoryFeed;
@interface DDGStoryFetcher : NSObject
@property (nonatomic, readonly, weak) NSManagedObjectContext *parentManagedObjectContext;
@property (nonatomic, readonly, getter = isRefreshing) BOOL refreshing;

- (id)initWithParentManagedObjectContext:(NSManagedObjectContext *)context;
- (void)refreshSources:(void (^)())completion;
- (void)refreshStories:(void (^)())completion;

- (void)downloadImageForStory:(DDGStory *)story;
- (void)downloadIconForFeed:(DDGStoryFeed *)feed;

@end
