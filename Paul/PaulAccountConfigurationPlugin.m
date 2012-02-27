//
//  PaulAccountConfigurationPlugin.m
//  Paul-AccountConfigPlugin
//
//  Created by Boris Penck on 27.02.12.
//  Copyright (c) 2012 Boris Penck. All rights reserved.
//

#import "PaulAccountConfigurationPlugin.h"

@implementation PaulAccountConfigurationPlugin

#pragma mark -
#pragma mark Identifiers

- (id)displayNameForAccountConfiguration:(id)arg1 
{
  return @"Paul";
}

- (id)accountTypeDisplayName
{
  return @"Paul";
}

- (id)accountTypeIcon
{
  return [NSImage imageNamed:NSImageNameComputer];
}

- (id)accountTypeIconOfSize:(unsigned long long)arg1
{
  return [NSImage imageNamed:NSImageNameComputer];
}

#pragma mark -

-(id)init
{
  if((self = [super init]))
  {
    NSLog(@"init");
    NSArray * _topLevelNibObjects;
    NSBundle *myBundle = [NSBundle bundleForClass:[self class]];
    NSNib *myNib = [[NSNib alloc] initWithNibNamed:@"AP-AccountConfiguration-Paul" bundle:myBundle];
    if ([myNib instantiateNibWithOwner:self topLevelObjects:&_topLevelNibObjects])
    {
      [_topLevelNibObjects retain];
    }
    [myNib release];
  }
  return self;
}

- (BOOL)hasLoginSheet
{
  NSLog(@"hasLoginSheet %d", [super hasLoginSheet]);
  return [super hasLoginSheet];
}


- (void)dealloc
{
  [super dealloc];
}

- (void)awakeFromNib
{
  NSLog(@"awakeFromNib");
}

- (BOOL)validateStoredCredentialsForAccountConfiguration:(id)arg1
{
  return NO; // TODO
}

- (void)configurationChanged:(id)arg1
{
  
}

- (void)validateStoredSession
{

}

- (id)publishPlugin
{
  return [super publishPlugin]; // TODO
}

#pragma mark -

- (IBAction)verfiyAccount:(id)sender
{
  [self.loginSheet close]; // TODO
}

@end
