//
// Created by jaqi on 2022/7/16.
//

#ifndef EXERICE_EXE_UTIL_H
#define EXERICE_EXE_UTIL_H
# include <stdio.h>
# include <math.h>
# include <malloc.h>
# include <string.h>
# include <conio.h>

/****************************************************************/
/*                        宏定义                                 */
/****************************************************************/

/**
 *  对比两个数中较大的
 *
 *  @param[in] a    first number
 *  @param[in] b    second number
 *  @return         max of (a,b)
 */
# define MAX(a,b)       (( a > b ) ? a : b)


/****************************************************************/
/*                        功能函数定义                            */
/****************************************************************/


/**
 *  打印数组
 *
 *  @param[in] arr    Array
 *  @param[in] len    the length of array
 */
void printfArr(int* arr, int len);

/**
 * 判断一个整数是否是完全平方数
 * @param x         待判断数
 * @return          1--是完全平方数、0--不是完全平方数
 */
int isSquare(int x);

/**
 * 根据月份返回天数
 * @param month         月份
 * @return              天数
 */
int dayOfmonth(int month);

/**
 * 对换两个整数
 * @param a
 * @param b
 */
void swap(int * a, int * b);



#endif //EXERICE_EXE_UTIL_H
