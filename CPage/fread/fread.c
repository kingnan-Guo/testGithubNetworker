/**
 * @file fread.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>


#define SIZE 3

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
        fread(&student[i], sizeof(struct Student_type), 1, fp);
        printf("%-10s %4d %4d %-15s\r\n", student[i].name, student[i].num, student[i].age, student[i].addr);
    }
    fclose(fp);
    return 0;
}
