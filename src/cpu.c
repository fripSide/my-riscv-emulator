#include "../includes/cpu.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cpu_load_program(CPU *cpu, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Failed to open file %s\n", filename);
        return;
    }

    uint32_t file_size = 0;
    fseek(file, 0, SEEK_END);
    file_size = ftell(file);
    fseek(file, 0, SEEK_SET);

    memset(cpu, 0, sizeof(CPU));
    fread(cpu->mem, sizeof(uint8_t), file_size, file);

    fclose(file);
}

void cpu_fetch_and_decode(CPU *cpu) {
    uint32_t instruction = cpu->mem[cpu->pc];
    cpu->pc++;
}

void cpu_execute(CPU *cpu) {
    uint32_t instruction = cpu->mem[cpu->pc];
    switch (instruction & 0x7F) {
        case 0x13: // addi
            cpu->regs[instruction & 0x1F] = cpu->regs[instruction >> 15 & 0x1F] + (instruction >> 20 & 0xFFFF);
            break;
    }
}