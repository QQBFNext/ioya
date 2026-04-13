#ifndef FB_H_
#define FB_H_

#include <stddef.h>
#include <stdint.h>

void fb_setup(void);
uint64_t fb_get_base(void);
uint32_t fb_get_width(void);
uint32_t fb_get_height(void);

#endif