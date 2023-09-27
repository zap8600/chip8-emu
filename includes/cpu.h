#ifndef CPU_H
#define CPU_H

#include <stdint.h>
#include <stdbool.h>

#define DRAM_SIZE 1024*4 // 4 KB

typedef struct Chip8CPU {
    uint8_t mem[DRAM_SIZE];
    uint8_t regs[16];
    uint16_t pc;
    uint16_t i;
    uint16_t stack[16];
} Chip8CPU;

void chip8_cpu_init(struct Chip8CPU* cpu);

#endif
