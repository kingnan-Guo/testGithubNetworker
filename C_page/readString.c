/**
 * @file readString.c
 * @author your name (you@domain.com)
 * @brief 
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
    char ch;
    fp = fopen("fileData.dat", "w");
    // fgets(str, n, fp); 
    fputs("kingnan", fp);//写入字符串
    fclose(fp);
    return 0;
}

