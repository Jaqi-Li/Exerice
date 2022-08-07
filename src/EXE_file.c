//
// Created by jaqi on 2022/8/6.
//
#include "../inc/EXE_file.h"

void fish_testFopen() {
    FILE *fp;
    char path[] = "C:\\Users\\54722\\Desktop\\C\\C_projects\\Exerice\\readme.md";
    if (!(fp = fopen(path,"rb")))
    {
        printf("Can not open %s",path);
    }
    else
    {
        printf("Open success\n");
    }
}

void fish_testFopen_s() {
    FILE *fp;
    char path[] = "C:\\Users\\54722\\Desktop\\C\\C_projects\\Exerice\\readme.md";
    if (fopen_s(&fp,path,"rb"))
    {
        printf("Can not open %s",path);
    }
    else
    {
        printf("Open success\n");
    }
}

void fish_testFclose() {
    FILE *fp;
    char path[] = "C:\\Users\\54722\\Desktop\\C\\C_projects\\Exerice\\readme.md";
    if (!(fp = fopen(path,"rb")))
    {
        printf("Can not open %s",path);
    }
    else
    {
        printf("Open success\n");
    }
    if (0 == fclose(fp))
    {
        printf("Close success\n");
    }
    else
    {
        printf("Close false\n");
    }
}

void fish_testFgetc_Fputc() {
    FILE *fp;
    int ch;
    char path[60] = DIR,filename[50];
    printf("please input the filename you want to write:");
    scanf_s("%s",filename,50);
    strcat_s(path,60,filename);
    if (!(fp = fopen(path,"wt+")))
    {
        printf("Can't open the file\n");
        exit(0);
    }

    printf("please input contents you want to write:");
    ch = getchar();// ctrl + z = EOF
    while (ch != EOF)
    {
        fputc(ch,fp);
        ch = getchar();
    }
    fclose(fp);
}

