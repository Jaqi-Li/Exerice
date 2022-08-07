//
// Created by jaqi on 2022/8/6.
//

#ifndef EXERICE_EXE_FILE_H
#define EXERICE_EXE_FILE_H
#include "EXE_util.h"
#define DIR "../files/"

/**
 * 测试 fopen     fopen打开成功时返回指针，否则返回NULL
 * fopen(filename, mode)        filename:文件所在位置
 *                              mode:打开方式
 */
void fish_testFopen();

/**
 * 测试 fopen_s   fopen_s打开成功时返回0否则返回1
 */
void fish_testFopen_s();

/**
 * 功能：使文件指针变量不指向该文件，也就是文件指针变量于文件”脱钩“，此后不能再通过该指针对原来与其相联系的文件进行读写操作。
 * 返回值：关闭成功返回值为0；否则返回EOF（-1）
 */
void fish_testFclose();

/**
 * 测试   fputc()
 * fputc(ch,fp) :   将字符ch的值(ASCII码)输出到fp所指向的文件中去。
 *                  用w(写)或rw(读写)方式打开一个已存在的文件时将清除原有的文件内容，写入字符从文件首开始。
 *                  以a(追加方式)打开文件，能保留原文件内容
 */
void fish_testFputc();

/**
 * 测试   fgetc()
 * fgetc(ch,fp) :   在文件打开时，该指针总是指向文件的第一个字节。使用fgetc函数后，指针后移动一个字节。连续使用多次读取多个字符。
 */
void fish_testFgetc();






#endif //EXERICE_EXE_FILE_H
