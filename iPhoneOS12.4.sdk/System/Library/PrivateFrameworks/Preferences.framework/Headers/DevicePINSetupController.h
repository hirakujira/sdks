//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSSetupController.h>

@interface DevicePINSetupController : PSSetupController
{
    _Bool _success;
    _Bool _allowOptionsButton;
}

@property(nonatomic) _Bool allowOptionsButton; // @synthesize allowOptionsButton=_allowOptionsButton;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (struct CGSize)preferredContentSize;
- (_Bool)canBeShownFromSuspendedState;
- (_Bool)popupStyleIsModal;
- (_Bool)usePopupStyle;
- (_Bool)success;
- (id)init;

@end

