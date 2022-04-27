/**
 * @file constructorInherit.cpp
 * @author your name (you@domain.com)
 * @brief 类 "Rectange" 不存在默认构造函数 不知道如何解决
 * @version 0.1
 * @date 2022-04-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

class Shape{
    public:
        void setWidth(int wid){
            width = wid;
        };
        void setHeight(int hei){
            height = hei;
        };
        Shape(int w,int h)
        {
            width=w;
            height=h;
        };
    protected:
        int width;
        int height;
};




class Rectange: public Shape{
    public:
        Rectange(int a,int b): Shape(a, b){
            // width=a;
            // height=b;
        };
        // Rectange(int a,int b){
        //     Shape(a,b);
        // };
        
};

int main()
{
    Rectange Rect;
    int area;

    Rect.setHeight(5);
    Rect.setWidth(7);

    // Rect.getCost(area)
    // 输出总花费
    // cout << "paintCost = " << Rect.getCost(area) << endl;


    return 0;
}

