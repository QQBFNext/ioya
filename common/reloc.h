#ifndef RELOC_H_
#define RELOC_H_

#include <stdint.h>

void apply_relocations(uintptr_t runtime_base, uintptr_t linked_base);

#endif