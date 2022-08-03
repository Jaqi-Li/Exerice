//
// Created by jaqi on 2022/7/31.
//

#ifndef EXERICE_EXE_PRACTICE_H
#define EXERICE_EXE_PRACTICE_H

# include "EXE_util.h"

/**
 *  水仙花数是指一个3位数，它的每个位上的数字的3次幂之和等于它本身。
 *  求出 1000 以内的水仙花数
 */
void narcissus_flower_number();

/**
 * 打印99乘法表
 *
 * @param[in] len   乘法表的范围数
 */
void multiplication_table(int len);

/**
 *  回文字符串判断
 * @param str 待检测的字符串
 */
void palindrome_string(char * str);

/**
 * 字符串匹配 暴力解法
 * @param mainString    主串
 * @param subString     待匹配字符串
 */
void string_matching_force(char * mainString, char * subString);

/**
 * KMP算法
 * @param mainString    主串
 * @param subString     待匹配字符串
 */
void kmp(char * mainString, char * subString);

/**
 * 汉诺塔
 * @param A     A柱子
 * @param B     B柱子
 * @param C     C柱子
 * @param n     n个盘子
 */
void Hanoi(char A, char B, char C, int n);




#endif //EXERICE_EXE_PRACTICE_H
