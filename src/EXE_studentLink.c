//
// Created by jaqi on 2022/8/6.
//

# include "../inc/EXE_studentLink.h"

void fish_studentLink() {
    struct student a, b, c, * head;
    a.num = 10101;
    a.score = 89.5;

    b.num = 10103;
    b.score = 90;

    c.num = 10107;
    c.score = 85;

    head = &a;
    a.next = &b;
    b.next = &c;
    c.next =NULL;

    do {
        printf("%ld %5.2lf\n", head->num, head->score);
        head = head->next;
    } while (head != NULL);
}

void fish_printStudentLink(struct student *head) {
    struct student *p;
    p = head;
    if (p == NULL)
    {
        printf("\n This List is null !\n");
    }
    while (p != NULL)
    {
        printf("NO.%ld学生成绩:%lf\n",p->num,p->score);
        p = p->next;
    }
}

struct student * fish_createStudentLink()
{
    struct student *head, *p, *q;
    p = (struct student *) malloc(LEN);
    printf("请输入录入学生的学号:");
    scanf_s("%ld",&p->num);
    printf("请输入该学生的成绩:");
    scanf_s("%lf",&p->score);

    head = p;
    if (head->num )
    {

    }

    while (p->num != 0)
    {

    }

}

int fish_deleteStudentLink(struct student * head, int del)
{
    struct student *p, *q;

    if(NULL == head)
    {
        printf("\n This list is null!\n");
        return 0;
    }

    p = head;
    while( p->num != del && p->next != NULL)
    {
        q = p;
        p = p->next;
    }
    if (p->num == del)
    {
        if (p == head)
        {
            head = p->next;
            printf("qe");
            return 1;
        } else
        {
            q->next = p->next;
            return 1;
        }
    } else
    {
        printf("\n %ld is not exist!\n",del);
        return 0;
    }
}


