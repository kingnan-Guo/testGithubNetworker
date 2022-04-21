/**
 * @file array.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
#include <iomanip> //包含setw

#include <cstdlib>
#include <ctime>

int size =  10;

int * getRandomArr(){
    int arr[10];
    srand( (unsigned)time( NULL ));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand();
        cout << arr[i] << endl;
    }
    return arr;
    
}

int main()
{
    int n[10];
    for (int i = 0; i < 10; i++)
    {
        n[i] = i +10;
    }
    cout << "ELement" << std::setw(30) << "value" << endl;
    
    cout <<  std::setw(30) << double(521.3) << endl;

    // -----------
    int * p;
    p = getRandomArr();
    for (int a = 0; a < 10; a++)
    {
        /* code */
        cout << * (p + a) << endl;
    }
    
    return 0;
}


