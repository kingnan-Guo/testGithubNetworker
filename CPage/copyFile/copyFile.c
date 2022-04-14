#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE * in;
    FILE * out;
    char ch;
    char inFileName[10];
    char outFileName[10];
    printf("input file name\r\n");
    scanf("%s", inFileName);
    printf("out  file name\r\n");
    scanf("%s", outFileName);

    if( (in = fopen(inFileName, "r")) == NULL ){

        printf("cannot open file\r\n");
        exit(0);
    }
    if( (out = fopen(outFileName, "w")) == NULL ){

        printf("cannot open file\r\n");
        exit(0);
    }
    
    // 循环读取 直到  读到文件的结束标志
    while (!feof(in))
    {
        // 从输入文件读入一个字符， 暂存在变量 ch 中
        ch = fgetc(in); //现在所知道的是 fgetc 读完一个数 并未将指针加1
        fputc(ch, out);
        putchar(ch); //将ch显示在屏幕上
    }
    putchar(10);
    // fclose(in);
    // fclose(out);

    // return 0;
}
