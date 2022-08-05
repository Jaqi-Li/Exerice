//
// Created by jaqi on 2022/7/31.
//
# include "../inc/EXE_fish.h"

double fish_triangle_area(double edgeA, double edgeB, double edgeC)
{
    double s;
    s = (edgeA + edgeB +edgeC)/2.0;
    return sqrt(s * (s - edgeA) * (s - edgeB) * (s - edgeC));
}

void fish_root(double a, double b, double c, double *result) {
    double delta, p, q;

    delta = b * b - 4 * a * c;
    if(delta > 0)
    {
        q = sqrt(delta) / (2 * a);
        p = -b / (2 * a);
        result[0] = 2.0;
        result[1] = p + q;
        result[2] = p - q;
    }
    else if (delta == 0)
    {
        p = -b / (2 * a);
        result[0] = 1.0;
        result[1] = p;
    }
    else
    {
        result[0] = 0.0;
    }
}

void fish_judge_char(char ch) {
    if (ch < 32)
    {
        printf("This is a control charater\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("This is a digit\n");
        printf("%c",ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("This is a capital letter\n");
        printf("%c",ch);
    }
    else if (ch >='a' && ch <='z')
    {
        printf("This is a small letter\n");
        printf("%c",ch);
    }
    else
    {
        printf("This is an other character\n");
    }
}

void fish_score(float score) {
    if(score < 60)
    {
        printf("你的等级是E\n");
    }
    if(score >= 60 && score <= 70)
    {
        printf("你的等级是D\n");
    }
    if(score >= 70 && score <= 80)
    {
        printf("你的等级是C\n");
    }
    if(score >= 80 && score <= 90)
    {
        printf("你的等级是B\n");
    }
    if(score >= 90 && score <= 100)
    {
        printf("你的等级是A\n");
    }

}

void fish_Sequential_Output(int a, int b, int c) {
    int temp;
    if (a < b)
    {
        swap(&a,&b);
    }
    if (a < c)
    {
        swap(&a,&c);
    }
    if (b < c)
    {
        swap(&b,&c);
    }
    printf("%d,%d,%d",a,b,c);
}

void fish_char_conversion(char ch) {
    if(ch >='A' && ch <= 'Z')
    {
        ch += 32;
    }
    printf("%c",ch);

}

void fish_findMaxandMin(int a, int b, int c) {
    int min, max;
    if(a > b){
        min = b;
        max = a;
    }
    else{
        max = b;
        min = a;
    }
    if (c < min){
        min = c;
    }
    if (c > max) {
        max = c;
    }
    printf("min=%d\nmax=%d\n", min, max);
}

double fish_arithmetic(float a, char option, float b) {
    switch (option) {
        case '+':
        {
            return a + b;
        }
        case '-':
        {
            return a - b;
        }
        case '*':
        {
            return a * b;
        }
        case '/':
        {
            return a / b;
        }
        default:return -1;
    }
}

int fish_leap_year(int year) {
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return 1;
            }
            return 0;
        }
        return 1;
    }
    return 0;
}

void fish_transport_company(double f, double p, double w, int s, double d) {
    int c;
    if (s >= 3000)
    {
        c = 12;
    }
    else
    {
        c = s / 250;
    }
    switch (c)
    {
        case 0:
        {
            d = 0;
            break;
        }
        case 1:
        {
            d = 2;
            break;
        }
        case 2:
        case 3:
        {
            d = 5;
            break;
        }
        case 4:
        case 5:
        case 6:
        case 7:
        {
            d = 8;
            break;
        }
        case 8:
        case 9:
        case 10:
        case 11:
        {
            d = 10;
            break;
        }
        case 12:
        {
            d = 15;
            break;
        }
    }

    f = p * w * s * (1 - d / 100.0);
}

int fish_specified_integer(int * arr) {
    int i, j = 0;
    for (i = 0; i < 100000; ++i)
    {
        if (isCompleteSquare(i +100) && isCompleteSquare(i + 268)){
            arr[j] = i;
            ++j;
        }
    }
    return j;
}

int fish_dayOftheYear(int year, int month, int day) {

    int i, days = 0;
    for (i = 1; i < month; ++i) {
        days += dayOfmonth(i);
    }
    if (fish_leap_year(year) && month > 2)
    {
        days += day + 1;
    } else
    {
        days += day;
    }
    return days;
}

void fish_no_duplicate_number() {
    int i, j, k, l = 0;
    for (i = 1; i <= 4; ++i)
    {
        for (j = 1; j <= 4; ++j)
        {
            if (i == j) continue;
            for (k = 1; k <= 4; ++k)
            {
                if ( i != k && j != k)
                {
                    l++;
                    printf("第%d个数是：%d%d%d\n",l,i,j,k);
                }
            }
        }
    }
}

int fish_statistics_char_number() {

    int num = 0;
    printf("请输入一行字符\n");
    while (getchar()!='\n')
    {
        num++;
    }
    return num;
}

void fish_printfGraphic(int line) {
    int i, j;
    for (i = 1; i <= line; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
}

void fish_cannot_divided(int from, int to, int divided) {
    int i;
    for (i = from; i <= to; ++i)
    {
        if (0 == i % divided )
            continue;
        else
        {
            printf("%d不能整除%d\n",i,divided);
        }
    }
}

void fish_Pi(double accuracy) {
    int denominator;
    int symbol = 1;
    double pi = 0;

    for (denominator = 1; 1.0 / denominator >= accuracy; denominator +=2)
    {
        pi += (double)symbol/denominator;
        symbol = -symbol;
    }

    pi *= 4.0;
    printf("Π=%lf",pi);
}

int fish_IsPrime(int number) {
    int i,k;
    k = sqrt(number);
    for (i = 2;i <= k; ++i)
    {
        if (0 == number % i)
        {
            return 0;
        }
    }
    return 1;
}

void fish_printfPrime(int from, int to) {
    int i;

    printf("从%d到%d的所有素数是:\n",from,to);
    for (i = from; i <= to; ++i)
    {
        if (fish_IsPrime(i))
        {
            printf("%d\n",i);
        }
    }
}

void fish_Encode(char * message) {
    int i = 0;
    int len = strlen(message);
    for (i = 0; i < len; ++i)
    {
        while ((message[i] >= 'A' && message[i] <= 'Z') || (message[i] >= 'a' && message[i] <= 'z'))
        {
            if (message[i] >= 87 && message[i] <=90)
            {
                message[i] = message[i] - 22;
            }
            if (message[i] >= 119 && message[i] <=122)
            {
                message[i] = message[i] - 22;
            }
            else
            {
                message[i] += 4;
            }
            ++i;
        }
        continue;
    }

}

void fish_Decode(char *ciphertext) {
    int i;
    int len = strlen(ciphertext);
    for (i = 0; i < len; ++i)
    {
        while ((ciphertext[i] >= 'A' && ciphertext[i] <= 'Z') || (ciphertext[i] >= 'a' && ciphertext[i] <= 'z'))
        {
            if (ciphertext[i] <= 68 && ciphertext[i] >=65)
            {
                ciphertext[i] = ciphertext[i] + 22;
            }
            if (ciphertext[i] <= 100 && ciphertext[i] >=97)
            {
                ciphertext[i] = ciphertext[i] + 22;
            }
            else
            {
                ciphertext[i] -= 4;
            }
            ++i;
        }
        continue;
    }
}

void fish_StudyGroup() {

    int score[5][3] = {{80,75,92},
                       {61,65,71},
                       {59,63,70},
                       {85,87,90},
                       {76,77,85}};
    /****************************************************************/
    /*                        分科平均成绩和总平均成绩                  */
    /****************************************************************/
    int i, j;
    double avg[3], num = 0;

    for (i = 0; i < 3; ++i)         // 每一科
    {
        for (j = 0; j < 5; ++j)     // 每个学生
        {
            num += score[j][i];
        }
        avg[i] = num / 5;
        num = 0;
    }
    num = (avg[0] + avg[1] + avg[2]) / 3;

    printf("math:%lf\nc:%lf\nfoxpro:%lf\n",avg[0],avg[1],avg[2]);
    printf("num:%lf",num);


}

void fish_MatrixTranspose() {

    int i,j;
    int a[2][3] = {{1,2,3},
                   {4,5,6}
    };
    int b[3][2] = {0};

    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            b[j][i] = a[i][j];
        }
    }

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 2; ++j)
        {
            printf("b[%d][%d]=%d\t",i,j,b[i][j]);
        }
        printf("\n");
    }

}

void fish_maxOfmatrix() {
    int matrix[5][3] = {{80,75,92},
                       {61,65,71},
                       {59,63,70},
                       {85,87,90},
                       {76,77,85}};
    int i, j, maxi = 0, maxj = 0, max = matrix[0][0];
    for (i = 0; i < 5; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }
    printf("maxnum : matrix[%d][%d]=%d",maxi,maxj,max);
}

void fish_Input_Jiugong() {
    int matrix[3][3] = {0};
    int i, j;

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf("请输入第%d行第%d列的数字:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            if (i == 1 || j == 1)
            {
                printf("%-6d",matrix[i][j]);
            }
            else
            {
                printf("%-6c",' ');
            }
        }
        printf("\n");
    }
}

double fish_selfpow(double x, double y) {

    double result = 1;

    while(y--)
    {
        result *= x;
    }

    return result;
}

void fish_Sequential_Output_pointer(int *pa, int *pb, int *pc) {

    if (*pa < *pb)
    {
        swap(pa,pb);
    }

    if (*pa < *pc)
    {
        swap(pa,pc);
    }

    if (*pb < *pc)
    {
        swap(pb,pc );
    }

}

void fish_reverseArray_pointer(int * arr, int len) {

    int * low, * high;
    low = arr;
    high = arr + len - 1;

    while (low < high)
    {
        swap(low++, high--);
    }
}

void fish_maxOfArray_pointer(int *arr, int len, int *max, int *min) {

    int i;
    *max = *min = arr[0];
    for (i = 0; i < len; ++i)
    {
        if (*(arr + i) > *max)
        {
            *max = *(arr + i);
        }
        if (*(arr + i) < *min)
        {
            *min = *(arr + i);
        }
    }
}

void fish_process(int x, int y, int (*function)()) {
    printf("%d\n",function(x,y));
}

int fish_process_max(int x, int y) {
    return x > y ? x : y;
}

int fish_process_min(int x, int y) {
    return x < y ? x : y;
}

int fish_process_add(int x, int y) {
    return x+y;
}

void fish_process_test() {
    int (*pmax)(), (*pmin)(), (*padd)();
    pmax = fish_process_max;
    pmin = fish_process_min;
    padd = fish_process_add;

    fish_process(2,3,pmax);
    fish_process(2,3,pmin);
    fish_process(2,3,padd);
}

void fish_sortPrintfStringByInitials(char **str, int len) {
    int i, j;
    char * temp;
    for (i = 0; i < len - 1; ++i)
    {
        for (j = 0; j < len - i - 1; ++j)
        {
            if (strcmp(*(str + j),*(str + j + 1)) > 0)
            {
                temp = *(str + j);
                *(str + j) = *(str + j + 1);
                *(str + j + 1) = temp;
            }
        }
    }

    for (i = 0; i < len; ++i)
    {
        printf("%s\n",*(str + i));
    }
}

void fish_Voting_system() {
    struct candidate
    {
        char name[20];
        int votes;
    };
    int i;
    int winner = 0, winnerVotes = 0;
    char voteInput[40];
    /**********************************************************************************/
    /*                          初始化                                                 */
    /**********************************************************************************/
    struct candidate candidates[3] = {
            {"苍井空",0},
            {"波多野结衣",0},
            {"水朴樱",0},
    };
    /**********************************************************************************/
    /*                          系统提示  开始投票                                       */
    /**********************************************************************************/
    printf("投票系统已开启，已有候选人：\n\n%s\t%s\t%s\n\n", candidates[0].name, candidates[1].name, candidates[2].name);
    printf("请您选择您想要投票的人(共10人投票)：\n");
    for (i = 0; i < 10; ++i)
    {
        printf("第%d位投票人：",i);
        scanf_s("%s",voteInput,40);
        printf("\n");
        if (strcmp(voteInput,candidates[0].name) == 0)
        {
            candidates[0].votes++;
        }
        else if (strcmp(voteInput,candidates[1].name) == 0)
        {
            candidates[1].votes++;
        }
        else if (strcmp(voteInput,candidates[2].name) == 0)
        {
            candidates[2].votes++;
        }
        else
        {
            printf("该输入不在候选人名单中，请重新输入！\n");
            --i;
            continue;
        }
    }

    /**********************************************************************************/
    /*                          统计投票，公布结果                                       */
    /**********************************************************************************/
    for (i = 0; i <3; ++i)
    {
        if (candidates[i].votes > winnerVotes)
        {
            winnerVotes = candidates[i].votes;
            winner = i;
        }
        printf("%s的得票数：%d\n",candidates[i].name,candidates[i].votes);
    }

    /**********************************************************************************/
    /*                          系统提示  公布结果                                       */
    /**********************************************************************************/
    printf("\n");
    printf("最终获胜者：%s",candidates[winner].name);
}





