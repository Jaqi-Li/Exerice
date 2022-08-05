//
// Created by jaqi on 2022/7/31.
//

#ifndef EXERICE_EXE_LETCODE_H
#define EXERICE_EXE_LETCODE_H

# include "EXE_util.h"
# include "EXE_sort.h"

/**
 *  198 打家劫舍
 *  你是一个专业的小偷每间房内都藏有一定的现金，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。
 *  给定一个代表每个房屋存放金额的非负整数数组，计算你 不触动警报装置的情况下 ，一夜之内能够偷窃到的最高金额。
 *
 *  输入：[1,2,3,1]
                输出：4
                解释：偷窃 1 号房屋 (金额 = 1) ，然后偷窃 3 号房屋 (金额 = 3)。
                偷窃到的最高金额 = 1 + 3 = 4 。
 *
 * @param[in] nums      代表每个房屋存放金额的非负整数数组   (不用提起给数据，在函数中给数据)
 * @param[in] numsize   房间数量
 */
void letcode_198(int * nums, int  numsize);

/**
 *  88 合并两个有序数组
 *  给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
 *  请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
 *  注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。
 *  为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。
 *
    实例：输入：nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
         输出：[1,2,2,3,5,6]
         解释：需要合并 [1,2,3] 和 [2,5,6] 。
         合并结果是 [1,2,2,3,5,6] ，其中斜体加粗标注的为 nums1 中的元素。
 *
 * @param nums1             数组nums1
 * @param nums1Size         数组nums1的长度: m+n
 * @param m                 数组nums1的有效元素
 * @param nums2             数组nums2
 * @param nums2Size         数组nums2的长度: n
 * @param n                 数组nums2的有效元素
 */
void letcode_88_01(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);

void letcode_88_02(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);

void letcode_88_03(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);

/**
 * 选择解法
 * @param choice
 */
void letcode_88(int choice);

/**
 *  剑指 Offer 04. 二维数组中的查找
 * 输入 **matrix 是长度为 matrixSize 的数组指针的数组，其中每个元素（也是一个数组）
 * 的长度组成 *matrixColSize 数组作为另一输入，*matrixColSize 数组的长度也为 matrixSize
 * ====================================================================================
 *  在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
 *  请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
 *
 *      [ [1,   4,  7, 11, 15],
          [2,   5,  8, 12, 19],
          [3,   6,  9, 16, 22],
          [10, 13, 14, 17, 24],
          [18, 21, 23, 26, 30]]
      给定 target = 5，返回 true。
      给定 target = 20，返回 false。
 *
 * @param matrix                    二维数组(int 指针数组)
 * @param matrixSize                二维数组行数
 * @param matrixColSize             二维数组列数(int 数组)  行元素
 * @param target                    目标指针
 * @return
 */
int letcode_offer_04(int * matrix[], int matrixSize, int* matrixColSize, int target);


#endif //EXERICE_EXE_LETCODE_H
