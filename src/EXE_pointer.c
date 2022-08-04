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

    int a[3][4] = {{3,7,9,11},
                   {0,6,7,15},
                   {4,2,5,16}};


    printf("a=%p\n",a);
    printf("a[0]=%p\n",a[0]);
    printf("*(a+0)=%p\n",*(a+0));
    printf("&a[0][0]=%p\n",&a[0][0]);
    printf("a+1=%p\n",a+1);
    printf("a[1]=%p\n",a[1]);
    printf("*(a+1)=%p\n",*(a+1));
    printf("&a[1][0]=%p\n",&a[1][0]);
    printf("&a[1]=%p\n",&a[1]);


}

void function_pointer()
{
    void (*p)(int *, int) = printfArr;    //  将printfArr函数 赋值给函数指针  此时printfArr(arr.len)相当于p(arr,len)
    int arr[3] = {1,2,3};
    p(arr,3);
}

void print_twoDimArray_pointer() {
    int a [3][4] ={{0,1,2,3},
                   {4,5,6,7},
                   {8,9,10,11}};

    int (*p)[4];
    int i,j;
    p = a;

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 4; ++j)
        {
            printf("a[%d][%d]=%d\t", i, j, *(*(p + i) + j));
        }
        printf("\n");
    }
    printf("===================\n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 4; ++j)
        {
            printf("a[%d][%d]=%d\t", i, j, p[i][j]);
        }
        printf("\n");
    }
}

void print_SpecifiedElemOftwoDimArray(int row, int col) {
    int arr[5][10] = {{0,1,2,3,4,5,6,7,8,9},
                      {10,11,12,13,14,15,16,17,18,19},
                      {20,21,22,23,24,25,26,27,28,29},
                      {30,31,32,33,34,35,36,37,38,39},
                      {40,41,42,43,44,45,46,47,48,49}};
    int (*p)[10];
    p = arr;

    if(row < 0 || row > 4 || col < 0 || col > 9)
    {
        printf("输入非法请重新输入!\n");
    } else
    {
        printf("arr[%d][%d] = %d\n", row, col, *(*(p+row)+col));
    }

}



