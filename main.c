#include <stdio.h>
#include <stdbool.h>
#include "includes/cpu.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <riscv-asm-binary.bin>\n", argv[0]);
        return 1;
    }

    CPU cpu;
    cpu_load_program(&cpu, argv[1]);
    
    while (true) {
        cpu_fetch_and_decode(&cpu);
        cpu_execute(&cpu);
    }
    
    return 0;
}