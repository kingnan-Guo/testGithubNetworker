/**
 * @file string.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    char str1[20] = "kingnan";
    char str2[20] = "-guo";
    
    // 连接str1 str2
    strcat(str1, str2);
    cout << "strcat( str1, str2): " << str1 << endl;
    return 0;
}

