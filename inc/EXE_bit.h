//
// Created by jaqi on 2022/8/7.
//

#ifndef EXERICE_EXE_BIT_H
#define EXERICE_EXE_BIT_H

# include "EXE_util.h"

/**
 * 字母大小写转换
 * @param letter        字母
 */
void fish_case_conversion(char letter);

/**
 * 通过位运算符交换ab的值
 * @param a
 * @param b
 */
void fish_swapBybit(int * a , int * b);

/**
 * 取一个数的第2-5位
 * @param number            数
 */
char fish_takeBits(char number);

/**
 * 将Number循环右移
 * @param number
 * @return
 */
unsigned char fish_loopRight(unsigned char number, int n);







#endif //EXERICE_EXE_BIT_H
