/**
 * @file bracketsReload.cpp
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

class Distance
{
    private:
        /* data */
  
    public:
        int feet;
        int inches;
        Distance(){
            feet = 0;
            inches = 0;
        }
        Distance(int i, int f){
            feet = i;
            inches = f;
        }
        Distance operator() (int a, int b, int c){
            Distance D;
            D.feet = a + b;
            D.inches = b +c;
            return D;
        }
};

int main()
{
    Distance D1(10, 20), D2;
    D2 = D1(10, 20, 30);
    cout << "F: " << D2.feet <<  " I:" <<  D2.inches << endl;

    return 0;
}



