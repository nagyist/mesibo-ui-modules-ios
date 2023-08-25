/** Copyright (c) 2023 Mesibo, Inc
 * https://mesibo.com
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the terms and condition mentioned
 * on https://mesibo.com as well as following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions, the following disclaimer and links to documentation and
 * source code repository.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * Neither the name of Mesibo nor the names of its contributors may be used to
 * endorse or promote products derived from this software without specific prior
 * written permission.
 *
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Documentation
 * https://mesibo.com/documentation/
 *
 * Source Code Repository
 * https://github.com/mesibo/ui-modules-ios
 *
 */

#import <UIKit/UIKit.h>
#import "Includes.h"
#import "MesiboUI.h"
#import "MesiboMessageViewController.h"
#import "UserData.h"


@interface UserListViewController : UITableViewController <MesiboDelegate,UITableViewDelegate,UITableViewDataSource,UISearchBarDelegate,UISearchDisplayDelegate,UISearchControllerDelegate,UISearchBarDelegate, UISearchResultsUpdating>

@property (strong, nonatomic) IBOutlet UITableView *mUsersTableView;

@property (assign,nonatomic) int mMode;
@property (strong, nonatomic) NSArray * forwardIds;
@property (nonatomic, strong) UISearchController * searchController;
@property (assign, nonatomic) uint32_t mForwardGroupid ;

@property (strong, nonatomic) MesiboUserListScreenOptions *mOpts;


@property (strong, nonatomic) id<MesiboUIListener> mUiDelegate ;
@property (strong, nonatomic) id<MesiboUIListener> mUiDelegateForMessageView ;


-(void) barButtonBackPressed:(id)sender;
-(void) setGroupMembers:(NSMutableArray *)members;

@end
