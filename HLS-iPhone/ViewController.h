//
//  ViewController.h
//  HLS-iPhone
//
//  Created by François LASSERRE on 18/02/12.
//  Copyright (c) 2012 AddictRadio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <MediaPlayer/MediaPlayer.h>

@class AVPlayer;
@class AVPlayerItem;

@interface ViewController : UIViewController {
    AVAsset *asset;
    AVPlayerItem *playerItem;
    AVPlayer *player;
    NSURL *mURL;
	IBOutlet UIView *airplay;
    IBOutlet UILabel *nowplaying;
    IBOutlet UILabel *metadatas;
    IBOutlet UIToolbar *toolBar;
    IBOutlet UIBarButtonItem *playButton;
    IBOutlet UIBarButtonItem *pauseButton;
}

@property (nonatomic) BOOL *allowsAirPlay;
@property (nonatomic, retain) IBOutlet UILabel *nowplaying;
@property (nonatomic, retain) IBOutlet UILabel *metadatas;
@property (retain) IBOutlet UIToolbar *toolBar;
@property (retain) IBOutlet UIBarButtonItem *playButton;
@property (retain) IBOutlet UIBarButtonItem *pauseButton;
@property (nonatomic, assign) CMTime movieDuration;

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object
                        change:(NSDictionary *)change context:(void *)context;
- (BOOL)isPlaying;
- (void)showPauseButton;
- (void)showPlayButton;
- (void)playpause;
- (void)enablePlayerButtons;
- (void)disablePlayerButtons;
- (IBAction)play:(id)sender;
- (IBAction)pause:(id)sender;


@end