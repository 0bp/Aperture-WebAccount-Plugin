/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "AccountConfigurationPluginProtocol-Protocol.h"
#import "AccountConfiguration.h"

@class AccountConfiguration;

@interface AccountConfigurationPluginBase : NSViewController <AccountConfigurationPluginProtocol>
{
    AccountConfiguration *editedConfiguration;
    id <AccountConfigurationPluginHostProtocol> pluginManager;
    NSWindow *loginSheet;
    NSWindow *passwordSheet;
    double loginSheetExpandedHeight;
    double passwordSheetExpandedHeight;
    BOOL networkOperationInProgress;
    NSString *loginErrorMessage;
    NSButton *autoCheckButton;
}

- (void)automaticallyCheckForNewlyPublishedAlbums:(id)arg1;
- (void)updatePublishedAlbumsNow:(id)arg1;
- (IBAction)cancelLoginSheet:(id)arg1;
- (IBAction)cancelPasswordSheet:(id)arg1;
- (void)login:(id)arg1;
- (void)updatePassword:(id)arg1;
- (void)awakeFromNib;
@property(retain, nonatomic) NSString *loginErrorMessage; // @synthesize loginErrorMessage;
- (void)adjustSheet:(id)arg1 expandedHeight:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)bundle;
- (void)prepareLoginSheet;
- (void)preparePasswordSheet;
- (BOOL)hasLoginSheet;
@property(retain) IBOutlet NSWindow *loginSheet; // @synthesize loginSheet;
@property(retain) IBOutlet NSWindow *passwordSheet; // @synthesize passwordSheet;
- (void)beginLoginSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)beginPasswordSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (id)accountTypeIdentifier;
- (id)accountTypeIcon;
- (id)accountTypeIconOfSize:(unsigned long long)arg1;
- (id)displayNameForAccountConfiguration:(id)arg1;
- (id)accountTypeDisplayName;
@property(readonly) long long displaySortPriority;
- (void)initializeConfiguration:(id)arg1;
- (void)beginEditingConfiguration:(id)accountConfiguration;
- (void)endEditingConfiguration;
- (id)keychainURLForAccountConfiguration:(id)arg1;
- (id)settingsDictionaryForUnsavedChangesCheck:(id)arg1;
- (BOOL)canEndEditingConfiguration;
- (void)prepareAccountConfigurationForDisplay:(id)arg1;
- (BOOL)validateStoredCredentialsForAccountConfiguration:(id)arg1;
@property(retain) NSButton *autoCheckButton; // @synthesize autoCheckButton;
@property BOOL networkOperationInProgress; // @synthesize networkOperationInProgress;
@property(retain) AccountConfiguration *editedConfiguration; // @synthesize editedConfiguration;
@property(retain) id <AccountConfigurationPluginHostProtocol> pluginManager; // @synthesize pluginManager;

@end
