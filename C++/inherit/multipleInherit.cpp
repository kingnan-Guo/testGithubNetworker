/**
 * @file multipleInherit.cpp
 * @author your name (you@domain.com)
 * @brief 
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

class paintCost
{

    public:
        int getCost(int are){
            return are * 70;
        }
};


class Rectange: public Shape, public paintCost{
    public:
        int getArea(){
            return (width * height);
        };
        // Rectange(int a,int b): Shape(a, b){
        //     width=a;
        //     height=b;
        // };
        // Rectange(int a,int b){
        //     Shape(a,b);
        // };
        
};

/**
 * @brief 
 *  类中 构造函数的继承
 * @return int 
 */

// 可以把基类的构造函数放在子类构造函数的初始化列表上，以此实现调用基类的构造函数来为子类从基类继承的成员变量初始化。
class RectangeSecond: public Shape{
    public:
        RectangeSecond(int a,int b):Shape(a, b){
            
        };
};




int main()
{
    // Rectange Rect;
    // int area;

    // Rect.setHeight(5);
    // Rect.setWidth(7);

    // area = Rect.getArea();
    // // Rect.getCost(area)
    // // 输出总花费
    // cout << "paintCost = " << Rect.getCost(area) << endl;


    RectangeSecond RectS;

    return 0;
}




/**
 * @brief class B: virtual public D{......}; 虚继承 （在创建对象的时候会创建一个虚表）在创建父类对象的时候
 * 
 */
