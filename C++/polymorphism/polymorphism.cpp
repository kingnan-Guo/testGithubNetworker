/**
 * @file polymorphism.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <vector>
using namespace std;

class Shape
{
    protected:
        int width, height;
    private:
        /* data */
    public:
        Shape(int a = 0, int b = 0){
            width = 0;
            height = 0;
        };
        // int area(){
        //     cout << "Shape class area" << endl;
        //     return 0;
        // }
        // virtual 虚函数
        virtual int area(){
            cout << "Shape class area" << endl;
            return 0;
        }

};

class Rectangel: public Shape{
    public:
        Rectangel(int a = 0, int b =0):Shape(a, b){

        };
        int area(){
            cout << "Rectangel class area" << endl;
            return (width * height);
        }

};

class Triangle: public Shape
{
    public:
        Triangle(int a=0, int b = 0):Shape(a, b){
            
        }
        int area(){
            cout << "Triangle class area" << endl;
            return (width * height);
        }


};



int main()
{
    Shape * shape;
    Rectangel rec(10, 5);
    Triangle tri(30, 5);

    shape = &rec;
    shape->area();

    shape = &tri;
    shape->area();
    return 0;
}

