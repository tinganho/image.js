// Copyright 2012 Google Inc. All Rights Reserved.
//
// This code is licensed under the same terms as WebM:
//  Software License Agreement:  http://www.webmproject.org/license/software/
//  Additional IP Rights Grant:  http://www.webmproject.org/license/additional/
// -----------------------------------------------------------------------------
//
// PNG decode.

#ifndef WEBP_EXAMPLES_PNGDEC_H_
#define WEBP_EXAMPLES_PNGDEC_H_

#include <stdio.h>

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

struct WebPPicture;

// Reads a PNG from 'in_file', returning the decoded output in 'pic'.
// If 'keep_alpha' is true and the PNG has an alpha channel, the output is RGBA
// otherwise it will be RGB.
// Returns true on success.
int ReadPNG(FILE* in_file, struct WebPPicture* const pic, int keep_alpha);

#if defined(__cplusplus) || defined(c_plusplus)
}    // extern "C"
#endif

#endif  // WEBP_EXAMPLES_PNGDEC_H_
