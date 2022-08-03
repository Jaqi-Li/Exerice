//
// Created by jaqi on 2022/8/3.
//

# include "../inc/EXE_search.h"

int half_search(int *arr, int target, int len) {

    int low = 0, high = len -1;
    int mid;
    if (target < arr[low] || target > arr[high])
    {
        return -1;
    }
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;

}

int half_search_2(int *arr, int target, int low, int high) {
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return half_search_2(arr, target, mid + 1, high);
    }
    else
    {
        return half_search_2(arr, target, low, mid - 1);
    }
}
