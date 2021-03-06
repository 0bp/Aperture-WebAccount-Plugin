/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "AccountConfigurationPluginBase.h"

@interface AccountConfigurationPublishServicePlugin : AccountConfigurationPluginBase
{
}

- (id)publishPlugin;
- (id)displayNameForAccountConfiguration:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)accountTypeIcon;
- (id)accountTypeIconOfSize:(unsigned long long)arg1;
- (id)accountTypeDisplayName;
- (BOOL)validateStoredCredentialsForAccountConfiguration:(id)arg1;
- (IBAction)configurationChanged:(id)arg1;
- (void)validateStoredSession;

@end

