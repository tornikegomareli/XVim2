//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDESigningEditorConfigurationDataSource-Protocol.h>

@class _TtC13IDEFoundation26SigningEditorConfiguration;
@protocol IDESigningEditorConfigurationDataSourceDelegate;

@interface _IDEDistributionManualConfigurationDataSource : NSObject <IDESigningEditorConfigurationDataSource>
{
    id <IDESigningEditorConfigurationDataSourceDelegate> _configurationDataSourceDelegate;
}

@property __weak id <IDESigningEditorConfigurationDataSourceDelegate> configurationDataSourceDelegate; // @synthesize configurationDataSourceDelegate=_configurationDataSourceDelegate;
- (void).cxx_destruct;
@property(readonly) _TtC13IDEFoundation26SigningEditorConfiguration *configuration;

@end

