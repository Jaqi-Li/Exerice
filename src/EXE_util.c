//
// Created by jaqi on 2022/7/31.
//

# include "../inc/EXE_util.h"




void printfArr(int* arr, int len)
{
    int i;

    for (i = 0; i < len; ++i) {
        printf_s("%d\n", arr[i]);
    }
}

int isSquare(int x) {
    double root = sqrt(x);
    if((int)root == root)
    {
        return 1;
    }
//    double root = sqrt(x);
//    if (root * root == x)
//    {
//        return 1;
//    }
    return 0;

}

int dayOfmonth(int month) {
    switch (month) {
        case 1:return 31;
        case 2:return 28;
        case 3:return 31;
        case 4:return 30;
        case 5:return 31;
        case 6:return 30;
        case 7:return 31;
        case 8:return 31;
        case 9:return 30;
        case 10:return 31;
        case 11:return 30;
        case 12:return 31;
    }
    return 0;
}

void swap(int * a, int * b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
