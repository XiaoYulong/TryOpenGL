//
//  OpenGLView.h
//  TryOpenGL
//
//  Created by 肖 玉龙 on 15/11/3.
//  Copyright (c) 2015年 xyl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

@interface OpenGLView : UIView
@property (nonatomic, strong) CAEAGLLayer *eaglLayer;
@property (nonatomic, strong) EAGLContext *glContext;
@property (nonatomic) GLuint colorRenderBuffer;
@property (nonatomic) GLuint frameBuffer;;
@end
