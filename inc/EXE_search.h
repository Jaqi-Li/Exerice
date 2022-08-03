//
// Created by jaqi on 2022/8/3.
//

#ifndef EXERICE_EXE_SEARCH_H
#define EXERICE_EXE_SEARCH_H

# include "EXE_util.h"

/**
 * 在一批有序数据中查找某数，折半查找：循环实现
 * @param arr           待查找数组
 * @param target        查找目标
 * @param len           数组长度
 * @return              查找的元素在原数组的位置
 */
int half_search(int * arr, int target, int len);

/**
 * 在一批有序数据中查找某数，折半查找： 递归实现
 * @param arr           待查找数组
 * @param target        查找目标
 * @param low
 * @param high
 * @return              查找的元素在原数组的位置
 */
int half_search_2(int * arr, int target, int low, int high);







#endif //EXERICE_EXE_SEARCH_H
