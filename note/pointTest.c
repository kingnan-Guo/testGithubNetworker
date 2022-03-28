/**
 * @file pointTest.c
 * @author your name (you@domain.com)
 * @brief 字符串指针
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "stdio.h"

// 关于 * p ++ 的学习， 其实是 * (p++)
// 打印字符串 
// 字符串指针  , 指向字符串的首地址， 通过循环，指针不断加1
void sendMessage(unsigned char * p){
    while (*p != '\0')
    {
        printf("p = %d \n", * (p++));
        // printf("p = %d \n", (p));
    }
}

int main()
{
    // unsigned char str =  ;
    sendMessage("hellow world");
    return 0;
}


