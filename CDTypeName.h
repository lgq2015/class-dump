//
// $Id: CDTypeName.h,v 1.1 2004/01/18 01:34:58 nygard Exp $
//

//  This file is part of class-dump, a utility for examining the
//  Objective-C segment of Mach-O files.
//  Copyright (C) 1997-1998, 2000-2001, 2004  Steve Nygard

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface CDTypeName : NSObject
{
    NSString *name;
    NSMutableArray *templateTypes;
}

- (id)init;
- (void)dealloc;

- (NSString *)name;
- (void)setName:(NSString *)newName;

- (NSArray *)templateTypes;
- (void)addTemplateType:(CDTypeName *)aTemplateType;

- (NSString *)description;

- (BOOL)isTemplateType;

- (BOOL)isEqual:(id)otherObject;

@end
