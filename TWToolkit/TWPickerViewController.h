//
//  TWPickerViewController.h
//  TWToolkit
//
//	This is an abstract class for displaying a UITableView with
//	a list of items for the user to choose. A subclass should
//	override the - (void)loadObjects and
//	- (NSString *)cellTextForObject:(id)anObject methods to
//	customize this class.
//
//  Created by Sam Soffes on 10/9/08.
//  Copyright 2009 Tasteful Works, Inc. All rights reserved.
//

@interface TWPickerViewController : UITableViewController {

	NSArray *_keys;
	NSString *_selectedKey;
	NSIndexPath *_currentIndexPath;
}

@property (nonatomic, retain) NSArray *keys;
@property (nonatomic, retain) NSString *selectedKey;
@property (nonatomic, retain) NSIndexPath *currentIndexPath;

- (void)loadKeys;
- (NSString *)cellTextForKey:(NSString *)key;

@end
