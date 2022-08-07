//
// Created by jaqi on 2022/8/5.
//

#include "../inc/EXE_macro.h"
#include "../inc/EXE_util.h"

void comparedDef_Typedef() {
    PIN1 x, y;
    PIN2 a, b;
    printf("By #define :%-6d  %-6d \n\n", sizeof(x), sizeof(y));
    printf("By typedef :%-6d  %-6d \n\n", sizeof(a), sizeof(b));
}

void fish_printfDate() {
    DATE date_one;
    date_one.year = 2022;
    date_one.month = 8;
    date_one.day = 6;

    printf("%d-%d-%d",date_one.year,date_one.month,date_one.day);
}

void fish_testNUM() {
    NUM num = {0};
    printf("%d\n\n",sizeof num);
}

void fish_testPOINTER() {
    POINTER day;
    day = dayOfmonth;
    printf("%d",day(3));
}
