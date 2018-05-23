//
//  STPopupLeftBarItem.h
//  STPopup
//
//  Created by Kevin Lin on 13/9/15.
//  Copyright (c) 2015 Sth4Me. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, STPopupBarItemType) {
    STPopupBarItemCross,
    STPopupBarItemArrow
};

@interface STPopupBarItem : UIBarButtonItem

@property (nonatomic, assign) STPopupBarItemType type;

- (instancetype)initWithTarget:(id)target action:(SEL)action;
- (void)setType:(STPopupBarItemType)type animated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
