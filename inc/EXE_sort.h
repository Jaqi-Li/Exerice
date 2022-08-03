//
// Created by jaqi on 2022/7/31.
//

#ifndef EXERICE_EXE_SORT_H
#define EXERICE_EXE_SORT_H

# include "EXE_util.h"

/**
 *  冒泡排序
 */
void bubble_sort(int * arr, int len);

/**
 * 快速排序
 * @param arr   待排序数组
 * @param low   数组最左边
 * @param high  数组最右边
 */
void quick_sort(int arr[], int low, int high);



#endif //EXERICE_EXE_SORT_H
