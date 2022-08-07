//
// Created by jaqi on 2022/8/7.
//
#include "../inc/EXE_bit.h"

void fish_case_conversion(char letter) {

    if (letter >= 'a' && letter <= 'z')
    {
        letter = letter & 0xDF;
        printf("%c",letter);
    }
    else if (letter >= 'A'&& letter <= 'Z')
    {
        letter = letter | 0x20;
        printf("%c",letter);
    }
    else
    {
        printf("It is not a letter");
    }

}

void fish_swapBybit(int *a, int *b) {
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *b ^ *a;
}

char fish_takeBits(char number) {

    number >>= 2;
    number &= ~(~0 << 4);
    return number;
}

unsigned char fish_loopRight(unsigned char number, int n) {

    unsigned char low,high;
    high = number << (sizeof(char) * 8 -n);
    low = number >> n;
    number = low | high;

    return number;
}

