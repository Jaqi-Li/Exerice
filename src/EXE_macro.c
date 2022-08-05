//
// Created by jaqi on 2022/8/5.
//

#include "../inc/EXE_macro.h"

void comparedDef_Typedef() {
    PIN1 x, y;
    PIN2 a, b;
    printf("By #define :%-6d  %-6d \n\n", sizeof(x), sizeof(y));
    printf("By typedef :%-6d  %-6d \n\n", sizeof(a), sizeof(b));
}
