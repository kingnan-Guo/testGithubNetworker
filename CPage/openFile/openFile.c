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
    char ch;
    // char fileName[10];
    // printf("input file name");
    // scanf("%s", fileName);
    // fp = fopen(fileName, "W");
    // fp = fopen("fileData.dat", "w+");
    fp = fopen("fileData1.dat", "w");
    // printf("fp = %x \r\n", fp);
    // return 0;
    ch = getchar(); //这里是getchar()，程序运行时碰到这个语句，会暂停程序的运行，在控制台出现一个闪烁的光标，等待用户输入一个签字

    while (ch!= '#') {
        fputc(ch, fp);
        putchar(ch);
        ch = getchar();
    }
    fclose(fp);

}
