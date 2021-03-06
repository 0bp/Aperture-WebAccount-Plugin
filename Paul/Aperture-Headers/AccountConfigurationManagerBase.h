/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AccountConfigurationManagerProtocol-Protocol.h"

@class NSArrayController, NSMutableArray, NSOperationQueue, NSTimer;

@interface AccountConfigurationManagerBase : NSObject <AccountConfigurationManagerProtocol>
{
    NSMutableArray *plugins;
    NSArrayController *pluginsArrayController;
    NSMutableArray *accountConfigurations;
    NSArrayController *configurationsArrayController;
    BOOL isAddingAccount;
    BOOL didLoadAccounts;
    NSTimer *publishServiceUpdateTimer;
    NSOperationQueue *accountDataUpdateQueue;
}

+ (void)touch;
+ (void)initialize;
+ (struct NSObject *)sharedAccountConfigurationManager;
- (id)init;
- (void)dealloc;
- (void)loadPlugins;
- (void)loadAccounts;
- (void)queueProfileInformationDownloadForAccountConfiguration:(id)arg1;
- (unsigned long long)indexOfAccountConfigurationForAccountType:(id)arg1 accountIdentifier:(id)arg2;
- (void)setupAccountFilterPredicate;
- (void)startPublishServiceUpdateTimer;
- (void)stopPublishServiceUpdateTimer;
- (void)publishServiceUpdateTimerFired;
- (id)accountConfigurationsForAccountType:(id)arg1;
- (id)iconForAccountType:(id)arg1;
- (id)iconForAccountType:(id)arg1 iconSize:(unsigned long long)arg2;
- (id)displayNameForAccountType:(id)arg1;
- (id)selectedAccountConfiguration;
- (void)sortAccountConfigurations;
- (struct NSObject *)pluginForSelectedAccountConfiguration;
- (struct NSObject *)pluginForType:(id)arg1;
- (BOOL)storePasswordToKeychainForAccountConfiguration:(id)arg1;
- (BOOL)loadPasswordFromKeychainForAccountConfiguration:(id)arg1;
- (id)defaultAccountConfigurationForAccountType:(id)arg1;
- (void)removeAccountConfiguration:(id)arg1;
- (void)addAccountConfiguration:(id)arg1;
- (void)moveAccountConfigurationAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (long long)indexOfAccountConfiguration:(id)arg1;
- (void)beginValidatingCredentialsForAccountConfiguration:(id)arg1 inWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(id)arg5;
- (void)validateCredentials:(id)arg1;
- (void)didValidateCredentials:(id)arg1;
- (void)beginDisplayAuthenticationForAccountConfiguration:(id)arg1 inWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(id)arg5;
- (void)passwordSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (struct NSObject *)publishServicePluginForServiceKey:(id)arg1;
- (struct NSObject *)newPublishServicePluginForServiceKey:(id)arg1;
- (struct NSObject *)newAnonymousPublishServicePluginForServiceKey:(id)arg1;
- (id)publishPluginManager;
- (id)accountConfigurationForAccountType:(id)arg1 accountIdentifier:(id)arg2;
- (id)accountInformationForAccountType:(id)arg1 accountIdentifier:(id)arg2;
- (void)loadAccountInformation:(id)arg1;
- (id)emptyAccountConfiguration:(id)arg1 forAccountType:(id)arg2;
- (id)emptyAccountConfigurationForAccountType:(id)arg1;
- (void)updateUserDefaults;
- (id)applicationResourcePrefix;
- (void)updatePublishedAlbumsForAccountConfiguration:(id)arg1;
- (void)updatePublishedAlbumsForAutomaticIntervalAccountConfigurations;
- (id)dotMacUtils;
- (BOOL)checkNetworkReachabilityOfHost:(id)arg1;
- (void)didCancelAccountSetup:(id)arg1;
@property BOOL isAddingAccount; // @synthesize isAddingAccount;
@property(retain) NSArrayController *configurationsArrayController; // @synthesize configurationsArrayController;
@property(retain) NSMutableArray *accountConfigurations; // @synthesize accountConfigurations;
@property(retain) NSArrayController *pluginsArrayController; // @synthesize pluginsArrayController;
@property(retain) NSMutableArray *plugins; // @synthesize plugins;
@property BOOL didLoadAccounts; // @synthesize didLoadAccounts;
@property(retain) NSOperationQueue *accountDataUpdateQueue; // @synthesize accountDataUpdateQueue;
@property(retain) NSTimer *publishServiceUpdateTimer; // @synthesize publishServiceUpdateTimer;
- (id)accountConfigurationsUserDefaultsKey;
- (id)accountConfigurationsPlistURL;
- (id)loadKeychainInformationsForURL:(id)arg1;
- (void)removeKeychainInformationsForURL:(id)arg1;
- (void)saveKeychainInformationsForURL:(id)arg1 andPassword:(id)arg2;
- (void)findUnknownAccounts;
- (BOOL)shouldFindUnknownAccountsWithDefaultsAccountConfigurations:(id)arg1;
- (BOOL)shouldDisableAccountConfiguration:(id)arg1;

@end

