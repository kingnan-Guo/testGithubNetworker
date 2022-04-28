/**
 * @file middleBracketsReload.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
const int SIZE = 10;

class safearay
{
    private:
        int arr[SIZE];
    public:
        safearay(){
            register int i;
            for ( i = 0; i < SIZE; i++)
            {
                arr[i] = i;
            }
            
        }
        // int operator [] (int i){
        //     cout << "索引超过最大值"<< i <<endl; 
        //       // 返回第一个元素
        //       if(i> SIZE){
        //           return i+100;
        //       }
        //       return arr[i];
        // }

        // 添加 & 后需要返回一个地址
        // int& operator [] (int i){
        //     cout << "索引超过最大值"<< i <<endl; 
        //       // 返回第一个元素
        //       if(i> SIZE){
        //           return arr[0];
        //       }
        //       return arr[i];
        // }
        int * operator [] (int i){
            cout << "索引超过最大值"<< i <<endl; 
              // 返回第一个元素
              if(i> SIZE){
                  return &arr[0];
              }
              return &arr[i];
        }

};

int main()
{

    safearay arr;
    // ------------非指针
    // cout << "A[2] 的值为 : " << arr[2] <<endl;
    // cout << "A[5] 的值为 : " << arr[5] <<endl;
    // cout << "A[12] 的值为 : " << *arr[12] <<endl;



    // -------若是指针
    cout << "A[2] 的值为 : " << * arr[2] <<endl;
    cout << "A[5] 的值为 : " << * arr[5] <<endl;
    cout << "A[12] 的值为 : " << * arr[12] <<endl;
    return 0;
}



