//
// Created by jaqi on 2022/8/6.
//

#ifndef EXERICE_EXE_STUDENTLINK_H
#define EXERICE_EXE_STUDENTLINK_H

# include "EXE_util.h"

# define LEN sizeof(struct student)

struct student
{
    long num;
    double score;
    struct student * next;
};

/**
 * 学生结构链表
 */
void fish_studentLink();

/**
 * 打印学生链表
 * @param head          头指针
 */
void fish_printStudentLink(struct student * head);

/**
 * 创建一个学生链表
 * @return
 */
struct student * fish_createStudentLink();

/**
 * 删除结点
 * @param del       学生学号
 * @return          1--success;0--error
 */
int fish_deleteStudentLink(struct student * head, int del);

#endif //EXERICE_EXE_STUDENTLINK_H
