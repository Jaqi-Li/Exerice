//
// Created by jaqi on 2022/7/31.
//

# include "../inc/EXE_practice.h"

void narcissus_flower_number()
{
    int i;

    for (i = 100; i < 1000; ++i) {
        int a = i % 10;
        int b = (i / 10) % 10;
        int c = (i / 10) / 10;

        if (a * a * a + b * b * b + c * c * c == i)
        {
            printf("%d????????\n", i);
        }
    }
}

void multiplication_table(int len) {

    int i, j;

    printf("?????? ?????¦¶??");
    scanf_s("%d", &len);

    for (i = 1; i <= len; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            int result = i * j;
            printf("%d * %d = %d\t", i, j, result);
        }
        printf("\n");
    }
}

void palindrome_string(char * str)
{
    int len = strlen(str);
    int low, high;

    for (low = 0, high = len - 1; low < high; ++low, --high) {
        if (str[low] != str[high]) {
            break;
        }
    }
    if (low < high) {
        printf("%s????????????", str);
    }
    else {
        printf("%s??????????", str);
    }

}

void  string_matching_force(char * mainString, char * subString)
{

    int i, j;
    int mainLen, subLen;
    mainLen = strlen(mainString);
    subLen = strlen(subString);

    for (i = 0; i < mainLen; ++i) {
        for (j = 0; j < subLen; ++j) {
            if (mainString[i + j] != subString[j]) {
                break;
            }
        }
        if (j == subLen) break;
    }

    /*  ????????
        for ( i = 0,j = 0; i < mainLen && j < subLen; ++i) {
            if (mainString[i] == subString[j]){
                ++j;
            } else {
                i -= j;
                j = 0;
            }
        }
    */

    if (j == subLen) {
        printf("??????????????§Ö?¦Ë?????%d -- %d", i + 1, i + j);
    }
    else {
        printf("??????????");
    }


}

void kmp(char * mainString, char * subString)
{

    int subLen = strlen(subString);
    int mainLen = strlen(mainString);
    int * next = (int *) malloc(sizeof(int) * subLen);

    int i = 0;
    int j = -1;
    next[0] = -1;

    //  ?????????????????next????
    while (i < subLen) {
        if (j == -1 || subString[i] == subString[j]) {
            i++;
            j++;
            next[i] = j;
        }
        else {
            j = next[j];
        }
    }

    //  i??????????????j???????????next????????
    i = 0;
    j = 0;
    while (i < mainLen && j < subLen) {
        if (j == -1 || mainString[i] == subString[j]) {
            i++;
            j++;
        }
        else {
            j = next[j];
        }
    }

    if (j == subLen) {
        printf("yes");
    }
    else {
        printf("no");
    }
}

void Hanoi(char A, char B, char C, int n)
{
    if (n == 1) {
        printf("%c=======>%c %d \n", A, C, n);
    }
    else {
        Hanoi(A, C, B, n - 1);
        printf("%c=======>%c %d \n", A, C, n);
        Hanoi(B, A, C, n - 1);
    }
}


