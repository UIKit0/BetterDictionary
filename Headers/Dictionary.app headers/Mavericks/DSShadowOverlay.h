//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 14 2013 08:30:39).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSGradient;

@interface DSShadowOverlay : NSView
{
    NSGradient *_gradient;
    double _angle;
}

@property double angle; // @synthesize angle=_angle;
@property(retain) NSGradient *gradient; // @synthesize gradient=_gradient;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;

@end

