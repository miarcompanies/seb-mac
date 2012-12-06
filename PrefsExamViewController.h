//
//  PrefsExamViewController.h
//  SafeExamBrowser
//
//  Created by Daniel R. Schneider on 15.11.12.
//
//

#import <Cocoa/Cocoa.h>
#import <Foundation/Foundation.h>
#import "MBPreferencesController.h"

@interface PrefsExamViewController : NSViewController <MBPreferencesModule> {
    NSTextField *examKey;
    IBOutlet NSPopUpButton *chooseIdentity;
}

@property (strong, nonatomic) IBOutlet NSTextField *examKey;
@property (strong, nonatomic) NSMutableArray *identitiesName;
@property (strong, nonatomic) NSArray *identities;

- (IBAction) saveSEBPrefs:(id)sender;

@end