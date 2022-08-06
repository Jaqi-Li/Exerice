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
    if (NULL == p)
    {
        printf("\n This List is null !\n");
        return;
    }
    while (NULL != p)
    {
        printf("NO.%ldѧ���ɼ�:%lf\n",p->num,p->score);
        p = p->next;
    }
}

struct student * fish_createStudentLink()
{
    struct student *head = NULL, *p, *q;
    int n = 0;
/**********************************************************************************/
/*                          ������һ�����                                          */
    p = q = (struct student *) malloc(LEN);
    if (NULL == p)
    {
        printf("Out of memory! Can't create list! \n");
        return NULL;
    }
    printf("������¼��ѧ����ѧ��:");
    scanf_s("%ld",&p->num);
    printf("�������ѧ���ĳɼ�:");
    scanf_s("%lf",&p->score);

/**********************************************************************************/
/*                   �жϵ�һ������Ƿ�Ϸ��������������������                          */
    while (0 != p->num)
    {
        n++;
        if (1 == n) //  ��һ�����  headָ����
        {
            head = p;
        }
        else        //  ���ǵ�һ�����     �����ӵ���β
        {
            q->next = p;
        }
        q = p;
/*********************************************************************************/
/*                           ������һ�����                                        */
        p = (struct student *) malloc(LEN);
        if (NULL == p)
        {
            printf("Out of memory! Can't add node! \n");
            break;
        }
        printf("\n");
        printf("������¼��ѧ����ѧ��:");
        scanf_s("%ld",&p->num);
        printf("�������ѧ���ĳɼ�:");
        scanf_s("%lf",&p->score);
    }
    q->next = NULL;
    return head;
}

struct student * fish_deleteStudentLink(struct student * head, long del)
{
    struct student *p, *q;

    if(NULL == head)
    {
        printf("\n This list is null!\n");
        return head;
    }

    p = head;
    while( p->num != del && p->next != NULL)
    {
        q = p;
        p = p->next;
    }
    if (del == p->num)
    {
        if (p == head)  // Ҫɾ������ͷ�ڵ�ʱ
        {
            head = p->next;
        } else
        {
            q->next = p->next;
        }
    } else
    {
        printf("\n %ld is not exist!\n",del);
    }
    return head;
}

struct student * fish_insertStudentLink(struct student *head, struct student *student) {

    struct student *pFront, *pRear, *pTemp;
    if (NULL == head)
    {
        head = student;
        student->next = NULL;
    }
    pRear = head;

    while (NULL != pRear->next && pRear->num < student->num)
    {
        pFront = pRear;
        pRear = pRear->next;
    }
    /****************************************************************************/
    /*                    �����һ�������С�ڲ�����ʱ�����뵽���                   */
    if (NULL == pRear->next && pRear->num < student->num)
    {
        pRear->next = student;
        student->next = NULL;
    }
    /****************************************************************************/
    /*                    ��ͷ�����ڲ�����ʱ�����뵽��ǰ                         */
    else if (pRear == head && pRear->num > student->num)
    {
        head = student;
        student->next = pRear;
    }
    else
    {
        pFront->next = student;
        student->next = pRear;
    }


    return head;
}

void fish_studentLinkTest() {
    struct student *stu;
    int del;

    /****************************************************************************/
    /*                            Test create                                   */
    stu = fish_createStudentLink();
    fish_printStudentLink(stu);

    /****************************************************************************/
    /*                            Test delete                                   */
    printf("������Ҫɾ����ѧ��ѧ��:");
    scanf_s("%ld",&del);
    stu = fish_deleteStudentLink(stu,del);
    fish_printStudentLink(stu);

    /****************************************************************************/
    /*                            Test insert                                   */
    while (1)
    {
        struct student * insStu = (struct student *) malloc(LEN);
        printf("������Ҫ�����ѧ��ѧ��(����0����¼��):");
        scanf_s("%ld",&insStu->num);
        if (0 == insStu->num)
        {
            break;
        }
        printf("\n");
        printf("������Ҫ�����ѧ���ɼ�:");
        scanf_s("%lf",&insStu->score);
        stu = fish_insertStudentLink(stu,insStu);
    }
    fish_printStudentLink(stu);

}


