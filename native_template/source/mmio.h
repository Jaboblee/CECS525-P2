/* mmio.h - access to MMIO registers */
//by ??
 
#ifndef MMIO_H
#define MMIO_H
 
#include <stdint.h>
 
// write to MMIO register
static inline void mmio_write(uint32_t reg, uint32_t data) {
    uint32_t *ptr = (uint32_t*)reg;
   __asm__ volatile("str %[data], [%[reg]]"
	     : : [reg]"r"(ptr), [data]"r"(data));
}
 
// read from MMIO register
static inline uint32_t mmio_read(uint32_t reg) {
    uint32_t *ptr = (uint32_t*)reg;
    uint32_t data;
    __asm__ volatile("ldr %[data], [%[reg]]"
		 : [data]"=r"(data) : [reg]"r"(ptr));
    return data;
}
 
#endif // #ifndef MMIO_H
