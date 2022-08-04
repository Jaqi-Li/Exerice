//
// Created by jaqi on 2022/7/31.
//

#ifndef EXERICE_EXE_POINTER_H
#define EXERICE_EXE_POINTER_H

# include "EXE_util.h"

/**
 *  指针数组
 */
void pointer_array();

/**
 * 二维数组指针
 */
void two_dimensional_pointer_array();

/**
 *
 *  函数指针        函数指针的意义是能够实现函数回调
 *
 *  eg:     int max2(int (*p)(int,int), int a, int b)  将函数指针作为参数传递
 *          {   //  函数回调
 *                  return p(a,b);
 *           }
 *
 *           即 定义一个max函数,在 main 函数中声明一个 max 函数的函数指针p，传入参数p给max2函数，
 *           让max2函数调用Max函数。
 */
void function_pointer();

/**
 * 对二维数组和指针的理解：
 * https://www.zhihu.com/question/460166982
 */
void print_twoDimArray_pointer();

/**
 * input specified row and col to show the element of the two-dimension Array.
 * @param row         row
 * @param col         col
 */
void print_SpecifiedElemOftwoDimArray(int row, int col);


#endif //EXERICE_EXE_POINTER_H
