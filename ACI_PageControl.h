//
//  ACI_PageControl.h
//  bundespresseamt
//
//  Created by Ralph-Gordon Paul on 20.03.14.
//  Copyright (c) 2014 appcom interactive GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 @brief A Wrapper for a UIPageControl designed to support unlimited pages.
 @details
 @sa UIPageControl
 */
@interface ACI_PageControl : UIView

/**
 @brief The current page shown by the page control
 @details Default: 0
 @sa UIPageControl#currentPage
 */
@property(nonatomic) NSInteger currentPage;

/**
 @brief The total number of the page control.
 @details Default: 0
 @sa UIPageControl#numberOfPages
 */
@property(nonatomic) NSInteger numberOfPages;

/**
 @brief The tint of dot's that aren't the current one.
 @details Default: The default from UIPageControl.
 */
@property(nonatomic) UIColor *pageIndicatorTintColor;

/**
 @brief The tint of the current dot.
 @details Default: The default from UIPageControl.
 */
@property(nonatomic) UIColor *currentPageIndicatorTintColor;

/**
 @brief enables/disables the user interactions of the underlying pageIndicator.
 @details Default: The default from UIPageControl.
 */
@property(nonatomic) BOOL pageIndicatorUserInteractionsEnabled;

@end
