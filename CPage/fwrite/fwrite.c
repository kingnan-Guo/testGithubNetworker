/**
 * @file fwrite.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-18
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

void save() {
    FILE * fp;
    int i;
    // wb 写入 按照ASCII 形式保存数据 自动转换成 二进制形式存储
    fp = fopen("student.dat", "wb");
    // printf("fp = %d \r\n", fp);
    for (i = 0; i < SIZE; i++)
    {
        // 使用 fwrite 写入二进制的 文件
        // fwrite(buffer, size, count, fp)
        // buffer是一个地址  对于 fread用来说存放读入数据的储存区的 地址 对于 fwrite 来说 是要把此地址开始的储存区中的数据向问价输出(以上值得是起始地址)
        // size 要读写的 字节数
        //count 要读写多少个数据项 (每个数据项长度 size)
        // eg: fread(f, 4, 10, fp) 
        // f是一个float型数组名(首地址) 这个函数 fp 所指向的文件读入 10 个 4 个字节的数据 存储到数组 f 中
        // printf("size =%lu\r\n", sizeof(struct Student_type));
        int fwriteTarge = fwrite(&student[i], sizeof(struct Student_type), 1, fp);
        printf("fwriteTarge = %d \r\n", fwriteTarge);
        
        if ( fwriteTarge != 1 )
        {
            printf("file wirte error\r\n");
        }
        fclose(fp);
        
    }
    

}


int main()
{
    int i;
    printf("enter data \r\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%s %d %d %s", student[i].name, &student[i].num, &student[i].age, student[i].addr);
    }
    save();
    return 0;
}

