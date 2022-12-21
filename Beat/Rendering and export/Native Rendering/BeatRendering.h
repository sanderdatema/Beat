//
//  BeatRendering.h
//  Beat
//
//  Created by Lauri-Matti Parppei on 19.12.2022.
//  Copyright © 2022 Lauri-Matti Parppei. All rights reserved.
//

#import <AppKit/AppKit.h>
#import <BeatParsing/BeatParsing.h>
#import "BeatPagination.h"

@class BeatPaginationPage;
@class BeatPaginationBlock;
@class BeatRendererDelegate;

NS_ASSUME_NONNULL_BEGIN

@interface BeatRendering : NSObject <BeatRendererDelegate>
- (instancetype)initWithSettings:(BeatExportSettings*)settings;
- (NSArray<NSAttributedString*>*)renderPages:(NSArray<BeatPaginationPage*>*)pages;
- (NSAttributedString*)renderBlock:(BeatPaginationBlock*)block firstElementOnPage:(bool)firstElementOnPage;
- (NSAttributedString*)renderLine:(Line*)line ofBlock:(BeatPaginationBlock* __nullable)block dualDialogueElement:(bool)dualDialogueElement firstElementOnPage:(bool)firstElementOnPage;
- (NSAttributedString*)renderLine:(Line*)line;
@end

NS_ASSUME_NONNULL_END
