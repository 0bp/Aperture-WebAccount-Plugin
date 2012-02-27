/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "AccountConfigurationPluginHostProtocol-Protocol.h"

@class NSArrayController, NSMutableArray;

@protocol AccountConfigurationManagerProtocol <AccountConfigurationPluginHostProtocol>
+ (void)touch;
+ (id)sharedAccountConfigurationManager;
- (id)accountConfigurationsForAccountType:(id)arg1;
- (id)iconForAccountType:(id)arg1;
- (id)iconForAccountType:(id)arg1 iconSize:(unsigned long long)arg2;
- (id)displayNameForAccountType:(id)arg1;
- (id)selectedAccountConfiguration;
- (void)sortAccountConfigurations;
- (id)pluginForSelectedAccountConfiguration;
- (id)pluginForType:(id)arg1;
- (BOOL)storePasswordToKeychainForAccountConfiguration:(id)arg1;
- (BOOL)loadPasswordFromKeychainForAccountConfiguration:(id)arg1;
- (id)defaultAccountConfigurationForAccountType:(id)arg1;
- (void)removeAccountConfiguration:(id)arg1;
- (void)addAccountConfiguration:(id)arg1;
- (void)moveAccountConfigurationAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (long long)indexOfAccountConfiguration:(id)arg1;
- (void)updatePublishedAlbumsForAutomaticIntervalAccountConfigurations;
- (void)beginValidatingCredentialsForAccountConfiguration:(id)arg1 inWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(id)arg5;
- (void)beginDisplayAuthenticationForAccountConfiguration:(id)arg1 inWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(id)arg5;
@property BOOL didLoadAccounts;
@property BOOL isAddingAccount;
@property(retain) NSArrayController *configurationsArrayController;
@property(retain) NSMutableArray *accountConfigurations;
@property(retain) NSArrayController *pluginsArrayController;
@property(retain) NSMutableArray *plugins;
@end
