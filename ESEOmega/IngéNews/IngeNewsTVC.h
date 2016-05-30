//
//  IngeNewsTVC.h
//  ESEOmega
//
//  Created by Thomas Naudet on 22/12/2015.
//  Copyright © 2015 Thomas Naudet

//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.

//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.

//  You should have received a copy of the GNU General Public License
//  along with this program. If not, see http://www.gnu.org/licenses/
//

@import UIKit;
@import CoreText;
@import SafariServices;
#import "Data.h"
#import "UIScrollView+EmptyDataSet.h"
#import "../SDWebImage/UIImageView+WebCache.h"

@interface IngeNewsCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UILabel *titreLabel;
@property (weak, nonatomic) IBOutlet UILabel *sousLabel;
@property (weak, nonatomic) IBOutlet UIImageView *iconeView;

@end

@interface IngeNewsCVC : UICollectionViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, SFSafariViewControllerDelegate,UIGestureRecognizerDelegate,UIViewControllerPreviewingDelegate,DZNEmptyDataSetSource, DZNEmptyDataSetDelegate>
{
    NSArray *fichiers;
    UIRefreshControl *refreshControl;
    BOOL messageLu;
}

- (IBAction) fermer:(id)sender;
- (void) refresh:(id)sender;
- (void) loadFichiers;

@end

@interface IngeNewsTVC : UITableViewController  <DZNEmptyDataSetSource, DZNEmptyDataSetDelegate, SFSafariViewControllerDelegate>
{
    NSArray *fichiers;
}

- (IBAction) fermer:(id)sender;
- (IBAction) refresh:(id)sender;
- (void) loadFichiers;

@end