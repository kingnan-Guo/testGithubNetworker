/**
 * @file fseek.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>

// fseek 函数改变文件位置 标记
// fseek(文件类型指针, 位移量, 起始点);
// fseek(fp, 100L, 0);//将文件位置标记 向前 移动 到离 文件开头 100 个字节处
// fseek(fp, 20L, 1); //将文件位置标记 向前 移动 到离 当前位置 50 个字节处
// fseek(fp, -10L, 2); //将文件位置标记 从文件末尾处向后退 10 个字节处


// ftell 测定文件位置标记的 当前位置
// i = ftell(fp); //存放文件当前的位置

#define SIZE 7

struct Student_type
{
    char name[10]; // 10个字节
    int num; // 4个字节
    int age; //4个字节
    char addr[15]; // 15个字节    
} student[SIZE];



int main()
{
    int i;
    // printf("enter data \r\n");
    FILE * fp;
    fp = fopen("student.dat", "rb");
    
    for (i = 0; i < SIZE; i++)
    {

        fseek(fp, i * sizeof(struct Student_type), 0);
        fread(&student[i], sizeof(struct Student_type), 1, fp);
        printf("%-10s %4d %4d %-15s\r\n", student[i].name, student[i].num, student[i].age, student[i].addr);
    }
    fclose(fp);
    return 0;
}

