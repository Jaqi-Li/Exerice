//
// Created by jaqi on 2022/7/31.
//

# include "../inc/EXE_pointer.h"

void pointer_array()
{
    int a, b, c;
    int* arr[] = { &a,&b,&c };

    int** p = arr;
    //  对比一下： arr = {a,b,c}  int * p = arr; p[0]=*p=a   p[1]=*(p+1)=b p[2]=*(p+2)=b

    *arr[0] = 0;
    *arr[1] = 1;
    *arr[2] = 2;

    printf("a=%d\n", a);
    printf("**p=%d,*p[0] = %d\n", **p, *p[0]);
    printf("**(p+1)=%d,*p[1] = %d\n", **(p + 1), *p[1]);
    printf("*p=%p\n", *p);
}

void two_dimensional_pointer_array()
{
    int arr[2][3] = { {1,2,3},
                      {4,5,6} };

    int* p = &arr[0][0];
    int* q = arr[0];
    int* r = arr[0];

    //    printf("%d,%d",arr[1][1],*(p+4));
    printf("%d", *p);
}

void function_pointer()
{


    void (*p)(int *, int) = printfArr;    //  将printfArr函数 赋值给函数指针  此时printfArr(arr.len)相当于p(arr,len)
    int arr[3] = {1,2,3};
    p(arr,3);
}