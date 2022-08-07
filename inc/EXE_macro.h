//
// Created by jaqi on 2022/8/5.
//

#ifndef EXERICE_EXE_MACRO_H
#define EXERICE_EXE_MACRO_H

# include "EXE_util.h"

#define PIN1 char*
#define SQ(y) ((y)*(y))
typedef char* PIN2;
typedef int INTEGER;
typedef struct
{
    INTEGER day;
    INTEGER month;
    INTEGER year;
}DATE;

typedef int NUM[100];   // 相当于  typedef int[100]  NUM

typedef int (*POINTER)();


/**
 * 比较 #define   和    typedef    区别
 */
void comparedDef_Typedef();

/**
 * 测试 typedef struct
 */
void fish_printfDate();

/**
 * 测试  typedef int NUM[100]
 */
void fish_testNUM();

/**
 * 测试函数指针
 */
void fish_testPOINTER();







#endif //EXERICE_EXE_MACRO_H
