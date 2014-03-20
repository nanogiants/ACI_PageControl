//
//  ACI_PageControl.h
//  bundespresseamt
//
//  Created by Ralph-Gordon Paul on 20.03.14.
//  Copyright (c) 2014 AppCom Interactive GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 @brief A Wrapper for a UIPageControl designed to support unlimited pages.
 @details
 @sa UIPageControl
 */
@interface ACI_PageControl : UIView

/**
 @brief
 @details
 @sa UIPageControl#currentPage
 */
@property(nonatomic) NSInteger currentPage;

/**
 @brief
 @details
 @sa UIPageControl#numberOfPages
 */
@property(nonatomic) NSInteger numberOfPages;

/**
 @brief
 @details
 @sa UIPageControl#numberOfPages
 */
@property(nonatomic) UIColor *pageIndicatorTintColor;

/**
 @brief
 @details
 @sa UIPageControl#numberOfPages
 */
@property(nonatomic) UIColor *currentPageIndicatorTintColor;

@end
