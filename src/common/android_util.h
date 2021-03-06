//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// android_util.h: Utilities for the using the Android platform

#ifndef COMMON_ANDROIDUTIL_H_
#define COMMON_ANDROIDUTIL_H_

#include <EGL/egl.h>
#include "angle_gl.h"

struct ANativeWindowBuffer;
struct AHardwareBuffer;

namespace angle
{

namespace android
{

struct ANativeWindowBuffer *ClientBufferToANativeWindowBuffer(EGLClientBuffer clientBuffer);

void GetANativeWindowBufferProperties(const struct ANativeWindowBuffer *buffer,
                                      int *width,
                                      int *height,
                                      int *depth,
                                      int *pixelFormat);
GLenum NativePixelFormatToGLInternalFormat(int pixelFormat);

struct AHardwareBuffer *ANativeWindowBufferToAHardwareBuffer(
    struct ANativeWindowBuffer *windowBuffer);

}  // namespace android
}  // namespace angle

#endif  // COMMON_ANDROIDUTIL_H_
