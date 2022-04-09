/**
 * @file openFile.c
 * @author your name (you@domain.com)
 * @brief  打开文件
 * @version 0.1
 * @date 2022-04-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE * fp;
    // char ch;
    // char fileName[10];
    // printf("input file name");
    // scanf("%s", fileName);
    // fp = fopen(fileName, "W");
    fp = fopen("fileData.dat", "r");
    printf("fp = %x", fp);
    // return 0;
}
