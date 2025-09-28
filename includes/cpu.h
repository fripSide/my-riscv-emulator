#pragma once

#include <stdint.h>

typedef struct rv32i_cpu_t {
    uint32_t pc;
    uint32_t regs[32];
    uint32_t mem[1024];
} CPU;

void cpu_load_program(CPU *cpu, const char *filename);
void cpu_fetch_and_decode(CPU *cpu);
void cpu_execute(CPU *cpu);

