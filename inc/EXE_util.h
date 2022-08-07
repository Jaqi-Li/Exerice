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
# include <stdlib.h>

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
int isCompleteSquare(int x);

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

/**
 * 计算一个整数的平方
 * @param x
 * @return
 */
long square(int x);

/**
 * 计算x的阶乘： x! = x * (x-1) * (x-2)....
 * @param x
 * @return
 */
long factorial(int x);

/**
 * 字符串复制
 * @param copyfrom      拷贝字符串指针
 * @param copyto        待拷贝字符串指针
 */
void stringCopy(char * copyfrom, char * copyto);



#endif //EXERICE_EXE_UTIL_H
