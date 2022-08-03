//
// Created by jaqi on 2022/7/31.
//

# include "../inc/EXE_fibonacci.h"

void filbonacci_for(int n)
{
    int i;
    int f1 = 1;
    int f2 = 1;
    int result = 0;

    printf("输入阶数:");
    scanf("%d", &n);

    if (n == 1)
    {
        printf_s("1\t");
        return;
    }
    if (n == 2)
    {
        printf_s("1\t"); printf_s("1\t");
        return;
    }

    printf_s("1\t"); printf_s("1\t");

    for (i = 2; i < n; ++i)
    {
        result = f1 + f2;
        f1 = f2;
        f2 = result;
        printf_s("%d\t", result);
    }
}

void filbonacci_array(int len)
{
    int i;
    int * arr = (int *) malloc(sizeof(int) * len);
    arr[0] = 1;
    arr[1] = 1;

    for (i = 2; i < len; ++i)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printfArr(arr,len);
}

int filbonacci_recur(int n)
{
    if (n == 1 || n == 2) {
        return 1;
    }
    else {
        return filbonacci_recur(n - 1) + filbonacci_recur(n - 2);
    }

}