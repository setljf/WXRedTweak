//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSMutableSet, NSString;

@interface QDBDatabase : NSObject
{
    void *_db;
    NSString *_databasePath;
    _Bool _isExecutingStatement;
    _Bool _logsErrors;
    NSMutableSet *_openResultSets;
    NSDateFormatter *_dateFormat;
}

- (void).cxx_destruct;
- (void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (_Bool)close;
- (void)closeOpenResultSets;
- (_Bool)databaseExists;
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(retain, nonatomic) NSDateFormatter *dateFormat; // @synthesize dateFormat=_dateFormat;
- (id)dateFromString:(id)arg1;
- (void)dealloc;
- (id)errorWithMessage:(id)arg1;
- (id)executeQuery:(id)arg1;
- (id)executeQuery:(id)arg1 valist:(char *)arg2;
- (_Bool)executeUpdate:(id)arg1;
- (_Bool)executeUpdate:(id)arg1 error:(id *)arg2 valist:(char *)arg3;
- (void)extractSQL:(id)arg1 argumentsList:(char *)arg2 intoString:(id)arg3 arguments:(id)arg4;
- (_Bool)hasDateFormatter;
- (id)initWithPath:(id)arg1;
- (int)lastErrorCode;
- (id)lastErrorMessage;
- (_Bool)open;
- (void)resultSetDidClose:(id)arg1;
- (void *)sqliteHandle;
- (const char *)sqlitePath;
- (id)stringFromDate:(id)arg1;
- (void)warnInUse;

@end

