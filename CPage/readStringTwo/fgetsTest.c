/**
 * @file fgetsTest.c
 * @author your name (you@domain.com)
 * @brief 读取文件中的字符串
 * @version 0.1
 * @date 2022-04-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fp;
    int i = 0;
    char str[3][10]; //创建 二维数组 3 * 10, 3个 长度为 10的储存空间
    fp = fopen("fileData.dat", "r");
    while (fgets(str[i], 20, fp) != NULL)
    {
        printf("str = %s \r\n", str[i]);
        i++;
    }

    // char str[10];
    // fgets(str, 4, fp);
    // printf("str = %s", str);
    // fclose(fp);
    
    return 0;
}

