//
// Created by jaqi on 2022/7/31.
//

#ifndef EXERICE_EXE_FISH_H
#define EXERICE_EXE_FISH_H


# include "EXE_util.h"

/**
 * 输入三角形三边长，求三角形面积
 * @param edgeA
 * @param edgeB
 * @param edgeC
 */
double fish_triangle_area(double edgeA, double edgeB, double edgeC);

/**
 * 求一元二次方程的根  ax²+bx+c
 * @param[in] a         系数a
 * @param[in] b         系数b
 * @param[in] c         系数c
 * @param[out] result   方程的根
 * @return  result[0]记录方程根的个数。
 */
void fish_root(double a, double b, double c, double * result);

/**
 * 输入整数根据ascii码判断是什么
 * @param ch        输入的字符
 */
void fish_judge_char(char ch);

/**
 * 根据分数给出等级
 * @param score
 */
void fish_score(float score);

/**
 * 根据从大到小的顺序输出a,b,c
 * @param a
 * @param b
 * @param c
 */
void fish_Sequential_Output(int a, int b, int c);

/**
 * 根据字符判断，若是大写字母则转换成小写字母，若不是则不转换
 * @param ch
 */
void fish_char_conversion(char ch);

/**
 * 找出三个值中的最大值最小值
 * @param a
 * @param b
 * @param c
 */
void fish_findMaxandMin(int a, int b, int c);

/**
 *  四则运算
 * @param a
 * @param option    +、-、*、/
 * @param b
 * @return          result
 */
double fish_arithmetic(float a, char option, float b);

/**
 * 判断年份是否是闰年
 * @param year
 * @return 1--是，0--否
 */
int fish_leap_year(int year);

/**
 * 计算运费
 * @param[in] p         每公里每吨货物的基本运费
 * @param[in] w         货物重
 * @param[in] s         距离  单位km
 * @param[in] d         折扣
 * @param[out] f         总运费
 */
void fish_transport_company(double f, double p, double w, int s, double d);

/**
 *  一个整数，加上100后是一个完全平方数，再加上168又是一个完全平方数，求该数
 *  @param arr  存放满足条件的所有整数
 *  @return     满足条件的整数的个数  (100000以内有3个)
 */
int fish_specified_integer(int * arr);

/**
 * 输入某年某月某日，判断这一天是这一年的第几天。
 * @param year
 * @param month
 * @param day
 * @return          这是这一年的第几天
 */
int fish_dayOftheYear(int year, int month, int day);

/**
 *    1、2、3、4，能组成多少个互不相同且无重复数字的三位数？
 */
void fish_no_duplicate_number();

/**
 * 统计从键盘输入一行字符的个数
 * @return          个数
 */
int fish_statistics_char_number();

/**
 * 根据行数输出图案
 * @param line          行数
 */
void fish_printfGraphic(int line);

/**
 * 输出不能被整除的数
 * @param from          范围下限
 * @param to            范围上限
 * @param divided       除数
 */
void fish_cannot_divided(int from, int to, int divided);

/**
 * 求Π的近似值
 * @param accuracy      精度
 */
void fish_Pi(double accuracy);

/**
 * 判断一个整数是否是素数
 * @param number        待判断整数
 * @return              1--是；0--不是
 *
 * 思想，若整数能被2-sqrt(n)之间的数整除，那么它就不是素数。
 */
int fish_IsPrime(int number);

/**
 * 打印出从 from 到 to的所有素数。
 * @param from          范围下限
 * @param to            范围上限
 */
void fish_printfPrime(int from, int to);

/**
 * 密码加密     置换到字母表中后4位
 * @param message
 */
void fish_Encode(char * message);

/**
 * 解密
 * @param ciphertext
 */
void fish_Decode(char * ciphertext);

/**
 *  一个学习小组5个人，每个人有三门课的考试成绩，保存到a[5][3]中，求全组分科的平均成绩和总平均成绩
 */
void fish_StudyGroup();

/**
 * 将一个二维数组行和列元素互换
 */
void fish_MatrixTranspose();

/**
 * 求出矩阵中值最大的元素，以及其所在的行号和列号
 */
void fish_maxOfmatrix();

/**
 * 从键盘上输入9个整数，按照原来位置输出第一行和第一列所有元素。
 */
void fish_Input_Jiugong();

/**
 * 求x的y次方
 * @param x
 * @param y
 * @return
 */
double fish_selfpow(double x, double y);

/**
 * 按大小顺序输出a、b、c
 * @param pa            a的指针
 * @param pb            b的指针
 * @param pc            c的指针
 */
void fish_Sequential_Output_pointer(int * pa, int * pb, int * pc);

/**
 * 数组反向存储
 * @param arr           数组
 * @param len           数组长度
 */
void fish_reverseArray_pointer(int * arr, int len);

/**
 * 找出数组中最大值最小值
 * @param[in] arr           数组
 * @param[in] len           数组长度
 * @param[out] max          最大值
 * @param[out] min          最小值
 */
void fish_maxOfArray_pointer(int * arr, int len, int * max, int * min);







#endif //EXERICE_EXE_FISH_H
