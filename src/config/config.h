/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

#ifndef RS_CONFIG_H
#define RS_CONFIG_H
#include "../common.h"

typedef struct RSConfig {
   int inputX;
   int inputY;
   int inputWidth;
   int inputHeight;
   int compressQuality;
} RSConfig;

void rsConfigDefaults(RSConfig *config);
void rsSetConfigParam(RSConfig *config, const char* key, const char* value);

#endif