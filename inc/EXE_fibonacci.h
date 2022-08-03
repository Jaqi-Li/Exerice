//
// Created by jaqi on 2022/7/31.
//

#ifndef EXERICE_EXE_FIBONACCI_H
#define EXERICE_EXE_FIBONACCI_H

# include "EXE_util.h"

/*============================================================================*/
/* 斐波那契数列 F(O)=0，F(1)=1,F(n)=F(n - 1)+F(n - 2) (n ≥2,n ∈ N*)             */
/*============================================================================*/

/**
 *  for循环实现
 *  @param[in] n    斐波那契数列的阶数
 */
void filbonacci_for(int n);

/**
 *  数组实现
 *  @param[in] len  斐波那契数列的阶数,也是数组的长度
 */
void filbonacci_array(int len);

/**
 * 递归实现
 * @param n     斐波那契数列的阶数
 * @return      斐波那契数列在第n阶的数
 */
int filbonacci_recur(int n);

#endif //EXERICE_EXE_FIBONACCI_H
