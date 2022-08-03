//
// Created by jaqi on 2022/7/31.
//

# include "../inc/EXE_letcode.h"

void letcode_198(int * nums, int  numsize)
{
    int i;
    int* result = (int*)malloc(sizeof(int) * numsize);  //  将结果存到数组中

    for (i = 0; i < numsize; ++i) {
        printf_s("第%d户的金额：\n", i);
        scanf_s("%d", &nums[i]);
    }

    if (numsize == 1)
    {
        result[0] = nums[0];
        printfArr(result, numsize);
        return;
    }

    if (numsize == 2)
    {
        result[0] = nums[0];
        result[1] = MAX(nums[0], nums[1]);
        printfArr(result, numsize);
        return;
    }

    result[0] = nums[0];
    result[1] = MAX(nums[0], nums[1]);

    for (i = 2; i < numsize; ++i)
    {
        result[i] = MAX(nums[i] + result[i - 2], result[i - 1]);
    }
    printf_s("今晚你能偷窃到的最高金额是：%d", result[numsize - 1]);
    return;
}

void letcode_88_01(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    /*
     *  解法 1:   合并后排序   排序算法使用快速排序或者冒泡排序算法
     *  =============================================================
     *
     */
    int i;
    for (i = m; i < nums1Size; ++i)
    {
        nums1[i] = nums2[i - m];
    }
    quick_sort(nums1, 0, nums1Size - 1);
//    bubble_sort(nums1,nums1Size);
    printfArr(nums1, nums1Size);

}

void letcode_88_02(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    /*
     *  解法 2:   创建新数组使用两个指针指向 nums1 nums2 从最小的开始选择
     *  ==============================================================
     */

    int * result = (int *) malloc(sizeof(int) * nums1Size);
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < m && j < n && k < nums1Size; ++k)
    {
        if (nums1[i] < nums2[j]){
            result[k] = nums1[i];
            ++i;
        } else {
            result[k] = nums2[j];
            ++j;
        }
    }
    if (i < m) {
        for (; i < m; ++i, ++k){
            result[k] = nums1[i];
        }
    }
    if (j < n) {
        for (; j < n; ++j, ++k){
            result[k] = nums2[j];
        }
    }
    printfArr(result,m+n);

}

void letcode_88_03(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    /*
     *  解法 3:   从后往前遍历 nums1和nums2 挑选出大的值放在nums1后面
     *  ===========================================================================
     */
    int i,j,k;
    for (i = m, j = n , k = nums1Size; i > 0 && j > 0 && k > 0; --k){
        if (nums1[i-1] > nums2[j-1]){
            nums1[k-1] = nums1[i-1];
            --i;
        } else {
            nums1[k-1] = nums2[j-1];
            --j;
        }
    }
    printfArr(nums1,nums1Size);
}

void letcode_88(int choice)
{
    int nums1[] = {1,2,3,0,0,0};
    int nums2[] = {2,5,6};
    int m = 3;
    int n = sizeof(nums2) / sizeof(int);
    int nums1Size = sizeof(nums1) / sizeof(int);
    int nums2Size = n;
    switch (choice) {
        case 1:
            letcode_88_01(nums1,nums1Size,m,nums2,nums2Size,n);
            break;
        case 2:
            letcode_88_02(nums1,nums1Size,m,nums2,nums2Size,n);
            break;
        case 3:
            letcode_88_03(nums1,nums1Size,m,nums2,nums2Size,n);
            break;
    }
}

int letcode_offer_04(int** matrix, int matrixSize, int* matrixColSize, int target)
{
    if (matrixSize <=0 || *matrixColSize <=0) return 0; //  非法行列返回false
    //  从右上角开始遍历
    int row,col;
    for (row = 0, col = *matrixColSize - 1; row < matrixSize && col >= 0;)
    {
        if (matrix[row][col] == target){
            return 1;
        }
        else if (matrix[row][col] < target){
            ++row;
        } else {
            --col;
        }
    }
    return 0;
}