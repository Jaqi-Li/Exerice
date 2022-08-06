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
/**********************************************************************************/
/*                          链表不带头节点                                          */
/**********************************************************************************/


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
struct student * fish_deleteStudentLink(struct student * head, long del);

/**
 * 插入一个结点
 * @param head          原学生链表
 * @param student       待插入的学生  (根据学号顺序插入)
 * @return              新学生链表
 */
struct student * fish_insertStudentLink(struct student * head, struct student * student);

void fish_studentLinkTest();

#endif //EXERICE_EXE_STUDENTLINK_H
