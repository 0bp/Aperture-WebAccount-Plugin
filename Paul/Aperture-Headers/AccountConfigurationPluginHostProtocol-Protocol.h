/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol AccountConfigurationPluginHostProtocol <NSObject>
- (id)publishPluginManager;
- (id)publishServicePluginForServiceKey:(id)arg1;
- (id)newPublishServicePluginForServiceKey:(id)arg1;
- (id)newAnonymousPublishServicePluginForServiceKey:(id)arg1;
- (id)accountConfigurationForAccountType:(id)arg1 accountIdentifier:(id)arg2;
- (id)accountInformationForAccountType:(id)arg1 accountIdentifier:(id)arg2;
- (id)emptyAccountConfigurationForAccountType:(id)arg1;
- (id)emptyAccountConfiguration:(id)arg1 forAccountType:(id)arg2;
- (void)updateUserDefaults;
- (id)applicationResourcePrefix;
- (void)updatePublishedAlbumsForAccountConfiguration:(id)arg1;
- (id)dotMacUtils;
- (BOOL)checkNetworkReachabilityOfHost:(id)arg1;
- (void)didCancelAccountSetup:(id)arg1;
@end

