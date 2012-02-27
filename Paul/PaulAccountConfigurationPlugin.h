//
//  PaulAccountConfigurationPlugin.h
//  Paul-AccountConfigPlugin
//
//  Created by Boris Penck on 27.02.12.
//  Copyright (c) 2012 Boris Penck. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "AccountConfigurationPublishServicePlugin.h"

@interface PaulAccountConfigurationPlugin : AccountConfigurationPublishServicePlugin
{
  IBOutlet NSTextField *nameLabel;
  IBOutlet NSTextField *passwordSheetMessageLabel;
  IBOutlet NSView *settingsContainer;
}

- (IBAction)verfiyAccount:(id)sender;

@end
