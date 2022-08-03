//
// Created by jaqi on 2022/7/31.
//

# include "../inc/EXE_sort.h"

void bubble_sort(int * arr, int len)
{
    int i, j;
    int temp = 0;

    printf("排序前：\n");
    printfArr(arr,len);

    for (i = 0; i < len - 1; ++i)
    {
        for (j = 0; j < len - 1 - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf_s("\n");
    printf("排序后：\n");
    printfArr(arr,len);
}

void quick_sort(int arr[], int low, int high)
{
    if (low >= high) return;
    int base = arr[low];
    int nextlow = low;
    int nexthigh = high;
    while (low < high)
    {
        while (low < high && arr[high] >= base) --high;
        arr[low] = arr[high];
        while (low < high && arr[low] <= base) ++low;
        arr[high] = arr[low];
    }

    arr[low] = base;

    quick_sort(arr, nextlow, low - 1);
    quick_sort(arr, low + 1, nexthigh);

}
