//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class EAGLContext, NSLock, NSMutableArray, NSRecursiveLock;

@interface IJKSDLGLView : UIView
{
    EAGLContext *_context;
    unsigned int _framebuffer;
    unsigned int _renderbuffer;
    int _backingWidth;
    int _backingHeight;
    unsigned int _program;
    int _uniformMatrix;
    float _vertices[8];
    float _texCoords[8];
    int _frameWidth;
    int _frameHeight;
    int _frameChroma;
    int _rightPaddingPixels;
    float _rightPadding;
    int _bytesPerPixel;
    int _frameCount;
    long long _lastFrameTime;
    float _prevScaleFactor;
    id <IJKSDLGLRender> _renderer;
    struct __CVOpenGLESTextureCache *_textureCache;
    _Bool _didSetContentMode;
    _Bool _didRelayoutSubViews;
    _Bool _didPaddingChanged;
    int _tryLockErrorCount;
    _Bool _didSetupGL;
    NSMutableArray *_registeredNotifications;
    _Bool _glActivePaused;
    NSLock *_appActivityLock;
    double _fps;
    double _scaleFactor;
    NSRecursiveLock *_glActiveLock;
}

+ (Class)layerClass;
@property _Bool glActivePaused; // @synthesize glActivePaused=_glActivePaused;
@property(retain) NSRecursiveLock *glActiveLock; // @synthesize glActiveLock=_glActiveLock;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) double fps; // @synthesize fps=_fps;
@property(retain, nonatomic) NSLock *appActivityLock; // @synthesize appActivityLock=_appActivityLock;
- (void).cxx_destruct;
- (void)clearContent;
- (id)snapshotInternalOnIOS6AndBefore;
- (id)snapshotInternalOnIOS7AndLater;
- (id)snapshotInternal;
- (id)snapshot;
- (void)applicationWillTerminate;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)unregisterApplicationObservers;
- (void)registerApplicationObservers;
- (void)toggleGLPaused:(_Bool)arg1;
- (_Bool)tryLockGLActive;
- (void)unlockGLActive;
- (void)lockGLActive;
- (void)displayInternal:(struct SDL_VoutOverlay *)arg1;
- (void)display:(void *)arg1;
- (void)updateVertices;
- (_Bool)loadShaders;
- (_Bool)setupDisplay:(struct SDL_VoutOverlay *)arg1;
- (void)setContentMode:(long long)arg1;
- (void)layoutOnDisplayThread;
- (void)layoutSubviews;
- (void)dealloc;
- (_Bool)isApplicationActive;
- (_Bool)setupGLOnce;
- (_Bool)setupGLGuarded;
- (_Bool)setupGL;
- (id)initWithFrame:(struct CGRect)arg1;

@end
